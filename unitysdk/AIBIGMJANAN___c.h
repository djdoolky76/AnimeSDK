#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HCBJDLLMJLC;
namespace System { class Action; }
namespace System { class Object; }

#define AIBIGMJANAN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xEB94040)
#define AIBIGMJANAN___C_CTOR_OFFSET UNITYSDK_OFFSET(0xEB94080)
#define AIBIGMJANAN___C__TAKEPROMOTIONREWARD_B__0_0_OFFSET UNITYSDK_OFFSET(0xEB94090)

	class AIBIGMJANAN___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__0_0()
		{
			return (::System::Action**)UnitySDK::FromName("", "<>c")->GetStaticField(0x57810);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x57818);
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
