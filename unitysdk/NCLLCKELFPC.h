#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class IOGNBKGNPFD;
class LMBHBNPPLEL;
namespace Entitas { class IEntity; }
namespace RPG::Client::LittleGame::Ability { template <typename T> class ILittleGameAbilityValueGetter_1; }
namespace RPG::GameCore { class BaseLittleGameAbilityValueGetterConfig; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NCLLCKELFPC_CTOR_OFFSET UNITYSDK_OFFSET(0xBB0F650)
#define NCLLCKELFPC_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBB0F5B0)
#define NCLLCKELFPC_HIHHHKGJAKO_OFFSET UNITYSDK_OFFSET(0xBB0F410)
#define NCLLCKELFPC_MNGGAOFNGIP_OFFSET UNITYSDK_OFFSET(0xBB0F160)

inline static constexpr unsigned int NCLLCKELFPC_TypeDefinitionIndex = 77392;

	class NCLLCKELFPC : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Type*, ::RPG::Client::LittleGame::Ability::ILittleGameAbilityValueGetter_1<::Entitas::IEntity*>*>* BKFGHBBALAL; // 0x10
		::LMBHBNPPLEL* CEFLLELKFOP; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCLLCKELFPC_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint MNGGAOFNGIP(::IOGNBKGNPFD* a1, ::RPG::GameCore::BaseLittleGameAbilityValueGetterConfig* a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::IOGNBKGNPFD*, ::RPG::GameCore::BaseLittleGameAbilityValueGetterConfig*))((::PBYTE)hIl2Cpp + NCLLCKELFPC_MNGGAOFNGIP_OFFSET))(this, a1, a2);
		}

		::RPG::Client::LittleGame::Ability::ILittleGameAbilityValueGetter_1<::Entitas::IEntity*>* HIHHHKGJAKO(::RPG::GameCore::BaseLittleGameAbilityValueGetterConfig* a1)
		{
			return ((::RPG::Client::LittleGame::Ability::ILittleGameAbilityValueGetter_1<::Entitas::IEntity*>*(*)(::PVOID, ::RPG::GameCore::BaseLittleGameAbilityValueGetterConfig*))((::PBYTE)hIl2Cpp + NCLLCKELFPC_HIHHHKGJAKO_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCLLCKELFPC_DISPOSE_OFFSET))(this);
		}

	};
