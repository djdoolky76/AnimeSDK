#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
namespace MoleMole::Config { class ConfigDungeonRegisterRuleBase; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MLPCBKCMEKJ_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1406F570)
#define MLPCBKCMEKJ_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1406F1C0)
#define MLPCBKCMEKJ_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x1406F5D0)
#define MLPCBKCMEKJ_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x1406F240)
#define MLPCBKCMEKJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1406F8B0)

inline static constexpr unsigned int MLPCBKCMEKJ_TypeDefinitionIndex = 39778;

class MLPCBKCMEKJ : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::MoleMole::Config::ConfigDungeonRegisterRuleBase*>* KFADCOMIILM; // 0x10
	::System::Int32 BELNJJKMMJP; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLPCBKCMEKJ__CTOR_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MLPCBKCMEKJ_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MLPCBKCMEKJ_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MLPCBKCMEKJ_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MLPCBKCMEKJ_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}
};
