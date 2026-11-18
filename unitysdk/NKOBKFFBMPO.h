#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FOBNALGHPPD_1.h"
#include "unitysdk/KHFGGFPIAOM.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
class GPIOLGMOBLJ;
class HDJJJGCHLEE;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define NKOBKFFBMPO_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x105C8AE0)
#define NKOBKFFBMPO_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x105C90A0)
#define NKOBKFFBMPO_FROMFLX_OFFSET UNITYSDK_OFFSET(0x105C8BF0)
#define NKOBKFFBMPO_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x105C9600)
#define NKOBKFFBMPO_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x105C8BE0)
#define NKOBKFFBMPO_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x105C94A0)
#define NKOBKFFBMPO_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x105C9100)
#define NKOBKFFBMPO_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x105C9410)
#define NKOBKFFBMPO_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x105C8820)
#define NKOBKFFBMPO_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x105C8A50)
#define NKOBKFFBMPO_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x105C8C70)
#define NKOBKFFBMPO__CTOR_OFFSET UNITYSDK_OFFSET(0x105C9380)

inline static constexpr unsigned int NKOBKFFBMPO_TypeDefinitionIndex = 88117;

class NKOBKFFBMPO : public ::KHFGGFPIAOM
{
public:
	::FOBNALGHPPD_1<::System::String*> OFCPMNEOELH; // 0x30
	::System::Byte _padding0[0x18];
	::GPIOLGMOBLJ* EPMNNELBGFG; // 0x50
	::FOBNALGHPPD_1<::System::String*> DOKMGJBJJHE; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKOBKFFBMPO__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKOBKFFBMPO_LBHNEFGNNNB_OFFSET))(this);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + NKOBKFFBMPO_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::HDJJJGCHLEE* DGNAAPGKIPL()
	{
		return ((::HDJJJGCHLEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + NKOBKFFBMPO_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NKOBKFFBMPO_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + NKOBKFFBMPO_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + NKOBKFFBMPO_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void JFLMLBMNFFK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKOBKFFBMPO_JFLMLBMNFFK_OFFSET))(this);
	}

	static ::NKOBKFFBMPO* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::NKOBKFFBMPO*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + NKOBKFFBMPO_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	static ::NKOBKFFBMPO* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::NKOBKFFBMPO*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + NKOBKFFBMPO_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + NKOBKFFBMPO_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + NKOBKFFBMPO_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}
};
