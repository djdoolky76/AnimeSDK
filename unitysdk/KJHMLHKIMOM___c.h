#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::LittleGame::RoadRash { class RoadRashAbilityValueModifer; }
namespace System { class Object; }
namespace System { template <typename T> class Predicate_1; }

#define KJHMLHKIMOM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x19F18890)
#define KJHMLHKIMOM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x19F188D0)
#define KJHMLHKIMOM___C___REMOVEMAXSPEEDMODIFIER_B__9_0_OFFSET UNITYSDK_OFFSET(0x19F188E0)

inline static constexpr unsigned int KJHMLHKIMOM___c_TypeDefinitionIndex = 59683;

	class KJHMLHKIMOM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x583C0);
		}

		static ::System::Predicate_1<::RPG::Client::LittleGame::RoadRash::RoadRashAbilityValueModifer*>** StaticGet___9__9_0()
		{
			return (::System::Predicate_1<::RPG::Client::LittleGame::RoadRash::RoadRashAbilityValueModifer*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x583C8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KJHMLHKIMOM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJHMLHKIMOM___C_CTOR_OFFSET))(this);
		}

		::System::Boolean __RemoveMaxSpeedModifier_b__9_0(::RPG::Client::LittleGame::RoadRash::RoadRashAbilityValueModifer* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LittleGame::RoadRash::RoadRashAbilityValueModifer*))((::PBYTE)hIl2Cpp + KJHMLHKIMOM___C___REMOVEMAXSPEEDMODIFIER_B__9_0_OFFSET))(this, a1);
		}

	};
