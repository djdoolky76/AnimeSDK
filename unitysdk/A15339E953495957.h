#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/B42D73816B670D02.h"
#include "unitysdk/BC98B5DEA770214F.h"

namespace ABC::UI { class MonoLocalizedTmp; }
namespace UnityEngine::UI { class Image; }

#define A15339E953495957_EC3033C0485522FB_OFFSET UNITYSDK_OFFSET(0x22654D0)
#define A15339E953495957_FFE59D93BEA6E2CA_OFFSET UNITYSDK_OFFSET(0x22653B0)
#define A15339E953495957__CTOR_OFFSET UNITYSDK_OFFSET(0x16572C0)

inline static constexpr unsigned int A15339E953495957_TypeDefinitionIndex = 9231;

class A15339E953495957 : public ::B42D73816B670D02
{
public:
	::UnityEngine::UI::Image* B778B4120BF3AD52; // 0xC0
	::ABC::UI::MonoLocalizedTmp* B5E9268446365054; // 0xC8

	::System::Void FFE59D93BEA6E2CA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A15339E953495957_FFE59D93BEA6E2CA_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A15339E953495957__CTOR_OFFSET))(this);
	}

	::System::Void EC3033C0485522FB(::BC98B5DEA770214F F88C66681A3E2719, ::System::Int32 B48C66E5FB2449C6)
	{
		return ((::System::Void(*)(::PVOID, ::BC98B5DEA770214F, ::System::Int32))((::PBYTE)hIl2Cpp + A15339E953495957_EC3033C0485522FB_OFFSET))(this, F88C66681A3E2719, B48C66E5FB2449C6);
	}
};
