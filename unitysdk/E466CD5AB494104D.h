#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EFC4AEA2121EC272.h"

class E6350CA2988BAC74;
namespace ABC::UI { class MonoLocalizedTmp; }
namespace ABC::UI { class MonoUIAutoView; }
namespace UnityEngine::UI { class Image; }

#define E466CD5AB494104D_A54D936318FAF9E3_OFFSET UNITYSDK_OFFSET(0x19F17C0)
#define E466CD5AB494104D_EC3033C0485522FB_OFFSET UNITYSDK_OFFSET(0x19F19F0)
#define E466CD5AB494104D_F6A675B119E39F53_OFFSET UNITYSDK_OFFSET(0x19F1990)
#define E466CD5AB494104D__CTOR_OFFSET UNITYSDK_OFFSET(0x16665F0)

inline static constexpr unsigned int E466CD5AB494104D_TypeDefinitionIndex = 1800;

class E466CD5AB494104D : public ::EFC4AEA2121EC272
{
public:
	::UnityEngine::UI::Image* BE8B00C796036193; // 0x80
	::E6350CA2988BAC74* B254591E42703468; // 0x88
	::ABC::UI::MonoLocalizedTmp* BA0665F7914B9387; // 0x90

	::System::Void F6A675B119E39F53()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E466CD5AB494104D_F6A675B119E39F53_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E466CD5AB494104D__CTOR_OFFSET))(this);
	}

	::System::Void EC3033C0485522FB(::System::UInt32 EAB74E382CAFD347, ::System::UInt32 BAF8A3E3C5E8EAEF)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + E466CD5AB494104D_EC3033C0485522FB_OFFSET))(this, EAB74E382CAFD347, BAF8A3E3C5E8EAEF);
	}

	::System::Void A54D936318FAF9E3(::ABC::UI::MonoUIAutoView* AE442F7D881522D8)
	{
		return ((::System::Void(*)(::PVOID, ::ABC::UI::MonoUIAutoView*))((::PBYTE)hIl2Cpp + E466CD5AB494104D_A54D936318FAF9E3_OFFSET))(this, AE442F7D881522D8);
	}
};
