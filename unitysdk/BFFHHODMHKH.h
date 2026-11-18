#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class DMOHECEJHAB;
class FKNIEPCILLG;
class FLDPBAPLICI;
class MBAOHJLIJHD;
class NMLEGIGBGKM;
class ODMPIIBDINP;
namespace MoleMole::Config { class ConfigCommonLevelData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BFFHHODMHKH_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x10DD63C0)
#define BFFHHODMHKH_FROMFLX_OFFSET UNITYSDK_OFFSET(0x10DD5790)
#define BFFHHODMHKH_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x10DD6420)
#define BFFHHODMHKH_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x10DD5810)
#define BFFHHODMHKH__CTOR_OFFSET UNITYSDK_OFFSET(0x10DD6930)

inline static constexpr unsigned int BFFHHODMHKH_TypeDefinitionIndex = 81936;

class BFFHHODMHKH : public ::System::Object
{
public:
	::DMOHECEJHAB* NLHHNCBHNDO; // 0x10
	::MBAOHJLIJHD* CNDPBEMPOBF; // 0x18
	::System::Collections::Generic::List_1<::MoleMole::Config::ConfigCommonLevelData*>* EEALNOKDLEP; // 0x20
	::ODMPIIBDINP* IKBLNDDMIPK; // 0x28
	::NMLEGIGBGKM* CJANEABKMCE; // 0x30
	::FLDPBAPLICI* PHPFDLNCJJK; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFFHHODMHKH__CTOR_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + BFFHHODMHKH_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + BFFHHODMHKH_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + BFFHHODMHKH_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + BFFHHODMHKH_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}
};
