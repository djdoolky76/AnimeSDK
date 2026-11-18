#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define FOUNDATION_DELEGATEX_CALLSAFELY_1_OFFSET UNITYSDK_OFFSET(0x1F2D5920)
#define FOUNDATION_DELEGATEX_INVOKESAFELY_1_OFFSET UNITYSDK_OFFSET(0x1F2D57A0)
#define FOUNDATION_DELEGATEX_INVOKESAFELY_OFFSET UNITYSDK_OFFSET(0x1F2D55E0)

namespace Foundation
{
	inline static constexpr unsigned int DelegateX_TypeDefinitionIndex = 8344;

	class DelegateX : public ::System::Object
	{
	public:
		static ::System::Void InvokeSafely(::System::Action* action)
		{
			return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + FOUNDATION_DELEGATEX_INVOKESAFELY_OFFSET))(action);
		}

		static ::System::Void InvokeSafely_1(::System::Action_1<::System::Object*>* action, ::System::Object* Parmas)
		{
			return ((::System::Void(*)(::System::Action_1<::System::Object*>*, ::System::Object*))((::PBYTE)hIl2Cpp + FOUNDATION_DELEGATEX_INVOKESAFELY_1_OFFSET))(action, Parmas);
		}

		static ::System::Void CallSafely_1(::System::Action* func)
		{
			return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + FOUNDATION_DELEGATEX_CALLSAFELY_1_OFFSET))(func);
		}
	};
}
