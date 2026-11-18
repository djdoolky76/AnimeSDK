#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FOBNALGHPPD_1.h"
#include "unitysdk/HDJJJGCHLEE.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
class HBIBNDIOKPG;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define OCOCOOKPGKF_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x14F67540)
#define OCOCOOKPGKF_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x14F681C0)
#define OCOCOOKPGKF_FROMFLX_OFFSET UNITYSDK_OFFSET(0x14F67650)
#define OCOCOOKPGKF_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x14F68930)
#define OCOCOOKPGKF_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x14F67640)
#define OCOCOOKPGKF_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x14F68740)
#define OCOCOOKPGKF_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x14F68220)
#define OCOCOOKPGKF_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x14F688A0)
#define OCOCOOKPGKF_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x14F66E70)
#define OCOCOOKPGKF_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x14F674A0)
#define OCOCOOKPGKF_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x14F676D0)
#define OCOCOOKPGKF__CTOR_OFFSET UNITYSDK_OFFSET(0x14F68640)

inline static constexpr unsigned int OCOCOOKPGKF_TypeDefinitionIndex = 76735;

class OCOCOOKPGKF : public ::HDJJJGCHLEE
{
public:
	::HBIBNDIOKPG* AMADHOKBAGM; // 0x30
	::FOBNALGHPPD_1<::System::Single> LFMPPAJPJJB; // 0x38
	::System::Byte _padding0[0x18];
	::FOBNALGHPPD_1<::System::Single> MMNNLOMMNGL; // 0x58
	::System::Byte _padding1[0x18];
	::FOBNALGHPPD_1<::System::String*> HJKBEIEBCED; // 0x78
	::System::Byte _padding2[0x18];
	::FOBNALGHPPD_1<::System::String*> DFDMBIKNGML; // 0x98
	::System::Byte _padding3[0x18];
	::HBIBNDIOKPG* PBANCBCAMOI; // 0xB8
	::FOBNALGHPPD_1<::System::String*> DCFHFIEOOOA; // 0xC0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCOCOOKPGKF__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCOCOOKPGKF_LBHNEFGNNNB_OFFSET))(this);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + OCOCOOKPGKF_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::HDJJJGCHLEE* DGNAAPGKIPL()
	{
		return ((::HDJJJGCHLEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + OCOCOOKPGKF_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OCOCOOKPGKF_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + OCOCOOKPGKF_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + OCOCOOKPGKF_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + OCOCOOKPGKF_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::OCOCOOKPGKF* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::OCOCOOKPGKF*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + OCOCOOKPGKF_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Void JFLMLBMNFFK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCOCOOKPGKF_JFLMLBMNFFK_OFFSET))(this);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + OCOCOOKPGKF_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::OCOCOOKPGKF* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::OCOCOOKPGKF*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + OCOCOOKPGKF_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}
};
