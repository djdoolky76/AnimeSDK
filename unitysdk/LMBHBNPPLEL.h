#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Entitas { class IEntity; }
namespace RPG::Client::LittleGame::Ability { template <typename T> class ILittleGameAbilityValueGetter_1; }
namespace RPG::GameCore { class BaseLittleGameAbilityValueGetterConfig; }
namespace System { class Object; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LMBHBNPPLEL_BHHABIPDODD_OFFSET UNITYSDK_OFFSET(0xB779A80)
#define LMBHBNPPLEL_CTOR_OFFSET UNITYSDK_OFFSET(0xB7799E0)
#define LMBHBNPPLEL_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB77A1B0)
#define LMBHBNPPLEL_IILMFPPOAKP_OFFSET UNITYSDK_OFFSET(0xB77A250)

inline static constexpr unsigned int LMBHBNPPLEL_TypeDefinitionIndex = 77390;

	class LMBHBNPPLEL : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Object*>* BBCBMBIGEPH; // 0x10
		::System::Boolean LINNHMPNCJG; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMBHBNPPLEL_CTOR_OFFSET))(this);
		}

		::System::Void BHHABIPDODD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMBHBNPPLEL_BHHABIPDODD_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMBHBNPPLEL_DISPOSE_OFFSET))(this);
		}

		::RPG::Client::LittleGame::Ability::ILittleGameAbilityValueGetter_1<::Entitas::IEntity*>* IILMFPPOAKP(::RPG::GameCore::BaseLittleGameAbilityValueGetterConfig* a1)
		{
			return ((::RPG::Client::LittleGame::Ability::ILittleGameAbilityValueGetter_1<::Entitas::IEntity*>*(*)(::PVOID, ::RPG::GameCore::BaseLittleGameAbilityValueGetterConfig*))((::PBYTE)hIl2Cpp + LMBHBNPPLEL_IILMFPPOAKP_OFFSET))(this, a1);
		}

	};
