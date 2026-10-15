#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace UnityEngine::Events { class UnityAction; }

#define EIDENFJENAJ___C__DISPLAYCLASS2_0_CTOR_OFFSET UNITYSDK_OFFSET(0x154BD390)
#define EIDENFJENAJ___C__DISPLAYCLASS2_0__BINDVIEWCALLBACK_B__0_OFFSET UNITYSDK_OFFSET(0x154BE260)

inline static constexpr unsigned int EIDENFJENAJ___c__DisplayClass2_0_TypeDefinitionIndex = 71357;

	class EIDENFJENAJ___c__DisplayClass2_0 : public ::System::Object
	{
	public:
		::UnityEngine::Events::UnityAction* callback; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIDENFJENAJ___C__DISPLAYCLASS2_0_CTOR_OFFSET))(this);
		}

		::System::Void _BindViewCallback_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIDENFJENAJ___C__DISPLAYCLASS2_0__BINDVIEWCALLBACK_B__0_OFFSET))(this);
		}

	};
