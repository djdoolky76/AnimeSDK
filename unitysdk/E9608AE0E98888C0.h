#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EFC4AEA2121EC272.h"

namespace ABC::UI { class MonoLocalizedTmp; }
namespace ABC::UI { class MonoUIAutoView; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define E9608AE0E98888C0_EC3033C0485522FB_OFFSET UNITYSDK_OFFSET(0x1F65F40)
#define E9608AE0E98888C0_FFE59D93BEA6E2CA_OFFSET UNITYSDK_OFFSET(0x1F65D50)
#define E9608AE0E98888C0__CTOR_OFFSET UNITYSDK_OFFSET(0x16665F0)

inline static constexpr unsigned int E9608AE0E98888C0_TypeDefinitionIndex = 7749;

class E9608AE0E98888C0 : public ::EFC4AEA2121EC272
{
public:
	::ABC::UI::MonoUIAutoView* AE442F7D881522D8; // 0x80
	::ABC::UI::MonoLocalizedTmp* EE925F84EB1792FF; // 0x88
	::ABC::UI::MonoLocalizedTmp* E60161C43838D8FB; // 0x90
	::ABC::UI::MonoLocalizedTmp* E967A14C87BD47C7; // 0x98
	::UnityEngine::GameObject* E7FBF207AE337608; // 0xA0
	::UnityEngine::GameObject* E01721C9D5A521BE; // 0xA8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E9608AE0E98888C0__CTOR_OFFSET))(this);
	}

	::System::Void FFE59D93BEA6E2CA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E9608AE0E98888C0_FFE59D93BEA6E2CA_OFFSET))(this);
	}

	::System::Void EC3033C0485522FB(::System::Int32 A70E5C58B2C7A692, ::System::String* E7F13465F7E064E1, ::System::Boolean FFA00246E8ABA57B)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + E9608AE0E98888C0_EC3033C0485522FB_OFFSET))(this, A70E5C58B2C7A692, E7F13465F7E064E1, FFA00246E8ABA57B);
	}
};
