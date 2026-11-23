#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E54D2630FF4009AC.h"

namespace ABC::UI { class MonoUIAutoView; }

#define F0EA6D26FA443195_A54D936318FAF9E3_OFFSET UNITYSDK_OFFSET(0x22D8D00)
#define F0EA6D26FA443195_F6A675B119E39F53_OFFSET UNITYSDK_OFFSET(0x22D8DA0)
#define F0EA6D26FA443195__CTOR_OFFSET UNITYSDK_OFFSET(0x1A75DA0)

inline static constexpr unsigned int F0EA6D26FA443195_TypeDefinitionIndex = 7234;

class F0EA6D26FA443195 : public ::E54D2630FF4009AC
{
public:
	::System::Void F6A675B119E39F53()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F0EA6D26FA443195_F6A675B119E39F53_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F0EA6D26FA443195__CTOR_OFFSET))(this);
	}

	::System::Void A54D936318FAF9E3(::ABC::UI::MonoUIAutoView* AE442F7D881522D8)
	{
		return ((::System::Void(*)(::PVOID, ::ABC::UI::MonoUIAutoView*))((::PBYTE)hIl2Cpp + F0EA6D26FA443195_A54D936318FAF9E3_OFFSET))(this, AE442F7D881522D8);
	}
};
