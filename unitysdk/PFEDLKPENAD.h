#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FOBNALGHPPD_1.h"
#include "unitysdk/KHFGGFPIAOM.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
class GPIOLGMOBLJ;
class HDJJJGCHLEE;
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define PFEDLKPENAD_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0xFDAC7B0)
#define PFEDLKPENAD_FROMBINARY_OFFSET UNITYSDK_OFFSET(0xFDACCC0)
#define PFEDLKPENAD_FROMFLX_OFFSET UNITYSDK_OFFSET(0xFDAC8C0)
#define PFEDLKPENAD_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0xFDACFF0)
#define PFEDLKPENAD_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0xFDAC8B0)
#define PFEDLKPENAD_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0xFDAD1A0)
#define PFEDLKPENAD_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0xFDACD20)
#define PFEDLKPENAD_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0xFDAD300)
#define PFEDLKPENAD_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0xFDAC5C0)
#define PFEDLKPENAD_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0xFDAC720)
#define PFEDLKPENAD_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0xFDAC940)
#define PFEDLKPENAD__CTOR_OFFSET UNITYSDK_OFFSET(0xFDACF60)

inline static constexpr unsigned int PFEDLKPENAD_TypeDefinitionIndex = 54186;

class PFEDLKPENAD : public ::KHFGGFPIAOM
{
public:
	::FOBNALGHPPD_1<::UnityEngine::Vector3> KDLNKNDCPAB; // 0x30
	::System::Byte _padding0[0x18];
	::GPIOLGMOBLJ* EPMNNELBGFG; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFEDLKPENAD__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFEDLKPENAD_LBHNEFGNNNB_OFFSET))(this);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + PFEDLKPENAD_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::HDJJJGCHLEE* DGNAAPGKIPL()
	{
		return ((::HDJJJGCHLEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + PFEDLKPENAD_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PFEDLKPENAD_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + PFEDLKPENAD_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + PFEDLKPENAD_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::PFEDLKPENAD* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::PFEDLKPENAD*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + PFEDLKPENAD_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::PFEDLKPENAD* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::PFEDLKPENAD*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + PFEDLKPENAD_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + PFEDLKPENAD_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void JFLMLBMNFFK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFEDLKPENAD_JFLMLBMNFFK_OFFSET))(this);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + PFEDLKPENAD_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}
};
