#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TriggerEffectCallbackParams.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class MonoEffect; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Action_2; }

#define NLNAALOKGJD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xBC76030)
#define NLNAALOKGJD___C_CTOR_OFFSET UNITYSDK_OFFSET(0xBC76060)
#define NLNAALOKGJD___C___CREATEPHONE_B__3_0_OFFSET UNITYSDK_OFFSET(0xBC76070)

inline static constexpr unsigned int NLNAALOKGJD___c_TypeDefinitionIndex = 58054;

	class NLNAALOKGJD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4CE90);
		}

		static ::System::Action_2<::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams>** StaticGet___9__3_0()
		{
			return (::System::Action_2<::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4CE98);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NLNAALOKGJD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLNAALOKGJD___C_CTOR_OFFSET))(this);
		}

		::System::Void __CreatePhone_b__3_0(::RPG::Client::MonoEffect* a1, ::RPG::Client::TriggerEffectCallbackParams a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams))((::PBYTE)hIl2Cpp + NLNAALOKGJD___C___CREATEPHONE_B__3_0_OFFSET))(this, a1, a2);
		}

	};
