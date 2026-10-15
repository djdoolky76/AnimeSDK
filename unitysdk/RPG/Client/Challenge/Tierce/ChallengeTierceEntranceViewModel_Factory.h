#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HKJEGBONDGA;
class NHCHDKJLNBJ;
namespace RPG::Client::Challenge::Tierce { class ChallengeTierceEntranceViewModel; }

#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEENTRANCEVIEWMODEL_FACTORY_CREATE_OFFSET UNITYSDK_OFFSET(0xC9462E0)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEENTRANCEVIEWMODEL_FACTORY_CTOR_OFFSET UNITYSDK_OFFSET(0xC9462D0)

namespace RPG::Client::Challenge::Tierce
{
	inline static constexpr unsigned int ChallengeTierceEntranceViewModel_Factory_TypeDefinitionIndex = 81588;

	class ChallengeTierceEntranceViewModel_Factory : public ::System::Object
	{
	public:
		::NHCHDKJLNBJ* _Repository; // 0x10
		::HKJEGBONDGA* _SwitchService; // 0x18
		::System::Void _ctor(::NHCHDKJLNBJ* a1, ::HKJEGBONDGA* a2)
		{
			return ((::System::Void(*)(::PVOID, ::NHCHDKJLNBJ*, ::HKJEGBONDGA*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEENTRANCEVIEWMODEL_FACTORY_CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::Client::Challenge::Tierce::ChallengeTierceEntranceViewModel* Create(::System::UInt32 a1)
		{
			return ((::RPG::Client::Challenge::Tierce::ChallengeTierceEntranceViewModel*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEENTRANCEVIEWMODEL_FACTORY_CREATE_OFFSET))(this, a1);
		}

	};
}
