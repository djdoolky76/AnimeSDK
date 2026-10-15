#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntityList; }
namespace RPG::GameCore { class TurnBasedAbilityComponent; }
namespace RPG::GameCore { template <typename T1, typename T2, typename T3> class Triple_3; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define PIIDNAIAHAK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xC2668E0)
#define PIIDNAIAHAK___C_CTOR_OFFSET UNITYSDK_OFFSET(0xC266910)
#define PIIDNAIAHAK___C__TICK_B__4_0_OFFSET UNITYSDK_OFFSET(0xC266920)

inline static constexpr unsigned int PIIDNAIAHAK___c_TypeDefinitionIndex = 55755;

	class PIIDNAIAHAK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6F740);
		}

		static ::System::Func_2<::RPG::GameCore::Triple_3<::System::Boolean, ::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::GameEntityList*>*, ::System::Boolean>** StaticGet___9__4_0()
		{
			return (::System::Func_2<::RPG::GameCore::Triple_3<::System::Boolean, ::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::GameEntityList*>*, ::System::Boolean>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6F748);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PIIDNAIAHAK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIIDNAIAHAK___C_CTOR_OFFSET))(this);
		}

		::System::Boolean _Tick_b__4_0(::RPG::GameCore::Triple_3<::System::Boolean, ::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::GameEntityList*>* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::Triple_3<::System::Boolean, ::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::GameEntityList*>*))((::PBYTE)hIl2Cpp + PIIDNAIAHAK___C__TICK_B__4_0_OFFSET))(this, a1);
		}

	};
