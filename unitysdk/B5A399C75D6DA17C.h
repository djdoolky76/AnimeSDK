#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EFC4AEA2121EC272.h"

namespace ABC::UI { class MonoLocalizedTmp; }
namespace ABC::UI { class MonoUIAutoView; }

#define B5A399C75D6DA17C_A54D936318FAF9E3_OFFSET UNITYSDK_OFFSET(0x21A2410)
#define B5A399C75D6DA17C_EC3033C0485522FB_OFFSET UNITYSDK_OFFSET(0x21A2550)
#define B5A399C75D6DA17C_F6A675B119E39F53_OFFSET UNITYSDK_OFFSET(0x21A2500)
#define B5A399C75D6DA17C__CTOR_OFFSET UNITYSDK_OFFSET(0x16665F0)

inline static constexpr unsigned int B5A399C75D6DA17C_TypeDefinitionIndex = 8797;

class B5A399C75D6DA17C : public ::EFC4AEA2121EC272
{
public:
	::ABC::UI::MonoLocalizedTmp* BF89383F36B809C2; // 0x80

	::System::Void EC3033C0485522FB(::System::UInt32 BEEDB621A39338DB)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + B5A399C75D6DA17C_EC3033C0485522FB_OFFSET))(this, BEEDB621A39338DB);
	}

	::System::Void F6A675B119E39F53()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B5A399C75D6DA17C_F6A675B119E39F53_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B5A399C75D6DA17C__CTOR_OFFSET))(this);
	}

	::System::Void A54D936318FAF9E3(::ABC::UI::MonoUIAutoView* AE442F7D881522D8)
	{
		return ((::System::Void(*)(::PVOID, ::ABC::UI::MonoUIAutoView*))((::PBYTE)hIl2Cpp + B5A399C75D6DA17C_A54D936318FAF9E3_OFFSET))(this, AE442F7D881522D8);
	}
};
