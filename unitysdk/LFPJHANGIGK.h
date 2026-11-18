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

#define LFPJHANGIGK_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x1565AD60)
#define LFPJHANGIGK_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1565B7B0)
#define LFPJHANGIGK_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1565AE70)
#define LFPJHANGIGK_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x1565BE80)
#define LFPJHANGIGK_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x1565AE60)
#define LFPJHANGIGK_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x1565BC90)
#define LFPJHANGIGK_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x1565B810)
#define LFPJHANGIGK_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x1565BDF0)
#define LFPJHANGIGK_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x1565A6B0)
#define LFPJHANGIGK_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x1565ACD0)
#define LFPJHANGIGK_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x1565AEF0)
#define LFPJHANGIGK__CTOR_OFFSET UNITYSDK_OFFSET(0x1565BB90)

inline static constexpr unsigned int LFPJHANGIGK_TypeDefinitionIndex = 38767;

class LFPJHANGIGK : public ::HDJJJGCHLEE
{
public:
	::FOBNALGHPPD_1<::System::Single> MMNNLOMMNGL; // 0x30
	::System::Byte _padding0[0x18];
	::FOBNALGHPPD_1<::System::String*> HJKBEIEBCED; // 0x50
	::System::Byte _padding1[0x18];
	::HBIBNDIOKPG* PBANCBCAMOI; // 0x70
	::FOBNALGHPPD_1<::System::String*> DFDMBIKNGML; // 0x78
	::System::Byte _padding2[0x18];
	::FOBNALGHPPD_1<::System::String*> DCFHFIEOOOA; // 0x98
	::System::Byte _padding3[0x18];
	::FOBNALGHPPD_1<::System::Single> LFMPPAJPJJB; // 0xB8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFPJHANGIGK__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFPJHANGIGK_LBHNEFGNNNB_OFFSET))(this);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + LFPJHANGIGK_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::HDJJJGCHLEE* DGNAAPGKIPL()
	{
		return ((::HDJJJGCHLEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + LFPJHANGIGK_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LFPJHANGIGK_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + LFPJHANGIGK_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + LFPJHANGIGK_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::LFPJHANGIGK* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::LFPJHANGIGK*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + LFPJHANGIGK_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Void JFLMLBMNFFK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFPJHANGIGK_JFLMLBMNFFK_OFFSET))(this);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + LFPJHANGIGK_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::LFPJHANGIGK* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::LFPJHANGIGK*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + LFPJHANGIGK_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + LFPJHANGIGK_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}
};
