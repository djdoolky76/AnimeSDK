#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntity; }
namespace System { class Action; }
namespace System { class Object; }

#define CDBKODALCAO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xC760AF0)
#define CDBKODALCAO___C_CTOR_OFFSET UNITYSDK_OFFSET(0xC760B30)
#define CDBKODALCAO___C___SETUPAREA2TEAM_B__9_0_OFFSET UNITYSDK_OFFSET(0xC760B40)

inline static constexpr unsigned int CDBKODALCAO___c_TypeDefinitionIndex = 56241;

	class CDBKODALCAO___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__9_0()
		{
			return (::System::Action**)UnitySDK::FromName("", "<>c")->GetStaticField(0x15D50);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x15D58);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CDBKODALCAO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDBKODALCAO___C_CTOR_OFFSET))(this);
		}

		::System::Void __SetupArea2Team_b__9_0(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CDBKODALCAO___C___SETUPAREA2TEAM_B__9_0_OFFSET))(this, a1);
		}

	};
