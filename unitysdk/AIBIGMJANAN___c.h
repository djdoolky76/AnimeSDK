#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HCBJDLLMJLC;
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define AIBIGMJANAN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xF153C70)
#define AIBIGMJANAN___C_CTOR_OFFSET UNITYSDK_OFFSET(0xF153CB0)
#define AIBIGMJANAN___C__TAKEPROMOTIONREWARD_B__0_0_OFFSET UNITYSDK_OFFSET(0xF153CC0)

inline static constexpr unsigned int AIBIGMJANAN___c_TypeDefinitionIndex = 64222;

	class AIBIGMJANAN___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::HCBJDLLMJLC*>** StaticGet___9__0_0()
		{
			return (::System::Action_1<::HCBJDLLMJLC*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x53030);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x53038);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AIBIGMJANAN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIBIGMJANAN___C_CTOR_OFFSET))(this);
		}

		::System::Void _TakePromotionReward_b__0_0(::HCBJDLLMJLC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HCBJDLLMJLC*))((::PBYTE)hIl2Cpp + AIBIGMJANAN___C__TAKEPROMOTIONREWARD_B__0_0_OFFSET))(this, a1);
		}

	};
