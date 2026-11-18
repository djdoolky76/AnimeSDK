#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
namespace MoleMole::Config { class SuiteWeightEntry; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_DIFFICULTYRANDOMSUITECONFIG_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1641F580)
#define MOLEMOLE_CONFIG_DIFFICULTYRANDOMSUITECONFIG_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1641F1F0)
#define MOLEMOLE_CONFIG_DIFFICULTYRANDOMSUITECONFIG_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x1641F5E0)
#define MOLEMOLE_CONFIG_DIFFICULTYRANDOMSUITECONFIG_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x1641F270)
#define MOLEMOLE_CONFIG_DIFFICULTYRANDOMSUITECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1641F890)

namespace MoleMole::Config
{
	inline static constexpr unsigned int DifficultyRandomSuiteConfig_TypeDefinitionIndex = 89657;

	class DifficultyRandomSuiteConfig : public ::System::Object
	{
	public:
		::System::Int32 Difficulty; // 0x10
		::System::Byte _padding0[0x4];
		::System::Collections::Generic::List_1<::MoleMole::Config::SuiteWeightEntry*>* SuiteWeights; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DIFFICULTYRANDOMSUITECONFIG__CTOR_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DIFFICULTYRANDOMSUITECONFIG_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DIFFICULTYRANDOMSUITECONFIG_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
		}

		::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DIFFICULTYRANDOMSUITECONFIG_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
		}

		::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_DIFFICULTYRANDOMSUITECONFIG_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
		}
	};
}
