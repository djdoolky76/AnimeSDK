#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FOBNALGHPPD_1.h"
#include "unitysdk/HDJJJGCHLEE.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
class HBIBNDIOKPG;
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define ABBCPFGGLMK_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x126285B0)
#define ABBCPFGGLMK_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x12628CC0)
#define ABBCPFGGLMK_FROMFLX_OFFSET UNITYSDK_OFFSET(0x126286C0)
#define ABBCPFGGLMK_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x126290C0)
#define ABBCPFGGLMK_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x126286B0)
#define ABBCPFGGLMK_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x12629270)
#define ABBCPFGGLMK_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x12628D20)
#define ABBCPFGGLMK_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x126293D0)
#define ABBCPFGGLMK_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x126280B0)
#define ABBCPFGGLMK_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x12628520)
#define ABBCPFGGLMK_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x12628740)
#define ABBCPFGGLMK__CTOR_OFFSET UNITYSDK_OFFSET(0x12628FC0)

inline static constexpr unsigned int ABBCPFGGLMK_TypeDefinitionIndex = 56900;

class ABBCPFGGLMK : public ::HDJJJGCHLEE
{
public:
	::FOBNALGHPPD_1<::UnityEngine::Vector3> BFDGJMPKGGC; // 0x30
	::System::Byte _padding0[0x18];
	::FOBNALGHPPD_1<::System::Single> MMNNLOMMNGL; // 0x50
	::System::Byte _padding1[0x18];
	::HBIBNDIOKPG* PBANCBCAMOI; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABBCPFGGLMK__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABBCPFGGLMK_LBHNEFGNNNB_OFFSET))(this);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + ABBCPFGGLMK_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::HDJJJGCHLEE* DGNAAPGKIPL()
	{
		return ((::HDJJJGCHLEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABBCPFGGLMK_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ABBCPFGGLMK_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + ABBCPFGGLMK_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + ABBCPFGGLMK_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + ABBCPFGGLMK_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::ABBCPFGGLMK* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::ABBCPFGGLMK*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + ABBCPFGGLMK_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::ABBCPFGGLMK* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::ABBCPFGGLMK*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + ABBCPFGGLMK_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Void JFLMLBMNFFK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABBCPFGGLMK_JFLMLBMNFFK_OFFSET))(this);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + ABBCPFGGLMK_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}
};
