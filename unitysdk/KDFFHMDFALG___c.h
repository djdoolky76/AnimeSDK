#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }
namespace System { template <typename T> class Predicate_1; }

#define KDFFHMDFALG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xB354E70)
#define KDFFHMDFALG___C_CTOR_OFFSET UNITYSDK_OFFSET(0xB354EA0)
#define KDFFHMDFALG___C___UPDATECHARACTERVISIBILITYBYGROUP_B__81_0_OFFSET UNITYSDK_OFFSET(0xB354EB0)

inline static constexpr unsigned int KDFFHMDFALG___c_TypeDefinitionIndex = 60585;

	class KDFFHMDFALG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x39530);
		}

		static ::System::Predicate_1<::RPG::GameCore::GameEntity*>** StaticGet___9__81_0()
		{
			return (::System::Predicate_1<::RPG::GameCore::GameEntity*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x39538);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KDFFHMDFALG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDFFHMDFALG___C_CTOR_OFFSET))(this);
		}

		::System::Boolean __UpdateCharacterVisibilityByGroup_b__81_0(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + KDFFHMDFALG___C___UPDATECHARACTERVISIBILITYBYGROUP_B__81_0_OFFSET))(this, a1);
		}

	};
