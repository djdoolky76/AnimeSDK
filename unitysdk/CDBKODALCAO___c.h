#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define CDBKODALCAO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xD0C9670)
#define CDBKODALCAO___C_CTOR_OFFSET UNITYSDK_OFFSET(0xD0C96B0)
#define CDBKODALCAO___C___SETUPAREA2TEAM_B__9_0_OFFSET UNITYSDK_OFFSET(0xD0C96C0)

inline static constexpr unsigned int CDBKODALCAO___c_TypeDefinitionIndex = 57455;

	class CDBKODALCAO___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::RPG::GameCore::GameEntity*>** StaticGet___9__9_0()
		{
			return (::System::Action_1<::RPG::GameCore::GameEntity*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x739D0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x739D8);
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
