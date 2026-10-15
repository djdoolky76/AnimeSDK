#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define OKDEEDBBFLO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xBED6870)
#define OKDEEDBBFLO___C_CTOR_OFFSET UNITYSDK_OFFSET(0xBED68A0)
#define OKDEEDBBFLO___C___CREATEMONSTERHUDBUFFPANEL_B__3_0_OFFSET UNITYSDK_OFFSET(0xBED68B0)

inline static constexpr unsigned int OKDEEDBBFLO___c_TypeDefinitionIndex = 71795;

	class OKDEEDBBFLO___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::GameCore::TurnBasedModifierInstance*, ::System::Boolean>** StaticGet___9__3_0()
		{
			return (::System::Func_2<::RPG::GameCore::TurnBasedModifierInstance*, ::System::Boolean>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x54CE0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x54CE8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OKDEEDBBFLO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKDEEDBBFLO___C_CTOR_OFFSET))(this);
		}

		::System::Boolean __CreateMonsterHUDBuffPanel_b__3_0(::RPG::GameCore::TurnBasedModifierInstance* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + OKDEEDBBFLO___C___CREATEMONSTERHUDBUFFPANEL_B__3_0_OFFSET))(this, a1);
		}

	};
