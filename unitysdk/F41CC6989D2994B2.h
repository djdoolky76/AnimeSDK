#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EFC4AEA2121EC272.h"

namespace ABC::UI { class MonoButton; }
namespace ABC::UI { class MonoLocalizedTmp; }
namespace ABC::UI { class MonoUIAutoView; }
namespace System { template <typename T1, typename T2> class Action_2; }
template <typename T> class FCECB52A00C1344E;

#define F41CC6989D2994B2_A47BCAA43ED7396C_OFFSET UNITYSDK_OFFSET(0x1EAA840)
#define F41CC6989D2994B2_A54D936318FAF9E3_OFFSET UNITYSDK_OFFSET(0x1EAA630)
#define F41CC6989D2994B2_B950FF9810FC6646_OFFSET UNITYSDK_OFFSET(0x1EAA570)
#define F41CC6989D2994B2_EC3033C0485522FB_OFFSET UNITYSDK_OFFSET(0x1EAA910)
#define F41CC6989D2994B2_F14BEFCB596EE4D7_OFFSET UNITYSDK_OFFSET(0x1EAA7C0)
#define F41CC6989D2994B2_F6A675B119E39F53_OFFSET UNITYSDK_OFFSET(0x1EAA770)
#define F41CC6989D2994B2__CTOR_OFFSET UNITYSDK_OFFSET(0x16665F0)

inline static constexpr unsigned int F41CC6989D2994B2_TypeDefinitionIndex = 6684;

class F41CC6989D2994B2 : public ::EFC4AEA2121EC272
{
public:
	::ABC::UI::MonoButton* ACF399C742288644; // 0x80
	::ABC::UI::MonoLocalizedTmp* E826BB47D977B5F3; // 0x88
	::System::UInt32 B95E45F2C88219EF; // 0x90
	::System::Byte _padding0[0x4];
	::System::Action_2<::System::UInt32, ::System::Boolean>* E04A060E3B4E7376; // 0x98
	::System::Boolean A93C518F581984D3; // 0xA0

	::System::Void F6A675B119E39F53()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F41CC6989D2994B2_F6A675B119E39F53_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F41CC6989D2994B2__CTOR_OFFSET))(this);
	}

	::System::Void EC3033C0485522FB(::System::UInt32 B28130503AE8B243, ::System::Action_2<::System::UInt32, ::System::Boolean>* B27ED08B9DFA3EE1, ::System::Boolean F1AACB3553F67303)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Action_2<::System::UInt32, ::System::Boolean>*, ::System::Boolean))((::PBYTE)hIl2Cpp + F41CC6989D2994B2_EC3033C0485522FB_OFFSET))(this, B28130503AE8B243, B27ED08B9DFA3EE1, F1AACB3553F67303);
	}

	::System::Void A47BCAA43ED7396C(::FCECB52A00C1344E<::System::UInt32>* AECE6EB399FF65B0)
	{
		return ((::System::Void(*)(::PVOID, ::FCECB52A00C1344E<::System::UInt32>*))((::PBYTE)hIl2Cpp + F41CC6989D2994B2_A47BCAA43ED7396C_OFFSET))(this, AECE6EB399FF65B0);
	}

	::System::Void A54D936318FAF9E3(::ABC::UI::MonoUIAutoView* AE442F7D881522D8)
	{
		return ((::System::Void(*)(::PVOID, ::ABC::UI::MonoUIAutoView*))((::PBYTE)hIl2Cpp + F41CC6989D2994B2_A54D936318FAF9E3_OFFSET))(this, AE442F7D881522D8);
	}

	::System::Void F14BEFCB596EE4D7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F41CC6989D2994B2_F14BEFCB596EE4D7_OFFSET))(this);
	}

	::System::Void B950FF9810FC6646()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F41CC6989D2994B2_B950FF9810FC6646_OFFSET))(this);
	}
};
