#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGDIFFICULTYTAGPAIR_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1909BB30)
#define MOLEMOLE_CONFIG_CONFIGDIFFICULTYTAGPAIR_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1909B790)
#define MOLEMOLE_CONFIG_CONFIGDIFFICULTYTAGPAIR_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x1909BB90)
#define MOLEMOLE_CONFIG_CONFIGDIFFICULTYTAGPAIR_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x1909B810)
#define MOLEMOLE_CONFIG_CONFIGDIFFICULTYTAGPAIR__CTOR_OFFSET UNITYSDK_OFFSET(0x1909BE20)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigDifficultyTagPair_TypeDefinitionIndex = 57062;

	class ConfigDifficultyTagPair : public ::System::Object
	{
	public:
		::System::Int32 DifficultyType; // 0x10
		::System::Byte _padding0[0x4];
		::System::String* GameplayTag; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDIFFICULTYTAGPAIR__CTOR_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDIFFICULTYTAGPAIR_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDIFFICULTYTAGPAIR_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
		}

		::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDIFFICULTYTAGPAIR_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
		}

		::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDIFFICULTYTAGPAIR_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
		}
	};
}
