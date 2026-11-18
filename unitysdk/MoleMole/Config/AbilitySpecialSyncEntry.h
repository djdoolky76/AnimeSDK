#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_ABILITYSPECIALSYNCENTRY_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x174EA780)
#define MOLEMOLE_CONFIG_ABILITYSPECIALSYNCENTRY_FROMFLX_OFFSET UNITYSDK_OFFSET(0x174EA3A0)
#define MOLEMOLE_CONFIG_ABILITYSPECIALSYNCENTRY_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x174EA7E0)
#define MOLEMOLE_CONFIG_ABILITYSPECIALSYNCENTRY_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x174EA420)
#define MOLEMOLE_CONFIG_ABILITYSPECIALSYNCENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x174EAAB0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AbilitySpecialSyncEntry_TypeDefinitionIndex = 47567;

	class AbilitySpecialSyncEntry : public ::System::Object
	{
	public:
		::System::String* AbilityName; // 0x10
		::System::Collections::Generic::List_1<::System::String*>* AbilitySpecials; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ABILITYSPECIALSYNCENTRY__CTOR_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ABILITYSPECIALSYNCENTRY_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ABILITYSPECIALSYNCENTRY_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
		}

		::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ABILITYSPECIALSYNCENTRY_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
		}

		::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ABILITYSPECIALSYNCENTRY_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
		}
	};
}
