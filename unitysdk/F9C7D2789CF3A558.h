#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EFC4AEA2121EC272.h"

namespace ABC::UI { class MonoLocalizedTmp; }
namespace ABC::UI { class MonoUIAutoView; }

#define F9C7D2789CF3A558_A54D936318FAF9E3_OFFSET UNITYSDK_OFFSET(0x1B6D020)
#define F9C7D2789CF3A558_F6A675B119E39F53_OFFSET UNITYSDK_OFFSET(0x1B6D110)
#define F9C7D2789CF3A558__CTOR_OFFSET UNITYSDK_OFFSET(0x16665F0)

inline static constexpr unsigned int F9C7D2789CF3A558_TypeDefinitionIndex = 2221;

class F9C7D2789CF3A558 : public ::EFC4AEA2121EC272
{
public:
	::ABC::UI::MonoLocalizedTmp* BA0665F7914B9387; // 0x80

	::System::Void F6A675B119E39F53()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F9C7D2789CF3A558_F6A675B119E39F53_OFFSET))(this);
	}

	::System::Void A54D936318FAF9E3(::ABC::UI::MonoUIAutoView* AE442F7D881522D8)
	{
		return ((::System::Void(*)(::PVOID, ::ABC::UI::MonoUIAutoView*))((::PBYTE)hIl2Cpp + F9C7D2789CF3A558_A54D936318FAF9E3_OFFSET))(this, AE442F7D881522D8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F9C7D2789CF3A558__CTOR_OFFSET))(this);
	}
};
