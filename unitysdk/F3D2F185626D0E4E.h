#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EFC4AEA2121EC272.h"

namespace ABC::UI { class MonoButton; }
namespace ABC::UI { class MonoLocalizedTmp; }
namespace ABC::UI { class MonoUIAutoView; }
namespace System { template <typename T1, typename T2> class Action_2; }
template <typename T> class FCECB52A00C1344E;

#define F3D2F185626D0E4E_A47BCAA43ED7396C_OFFSET UNITYSDK_OFFSET(0x1F99190)
#define F3D2F185626D0E4E_A54D936318FAF9E3_OFFSET UNITYSDK_OFFSET(0x1F98F80)
#define F3D2F185626D0E4E_B950FF9810FC6646_OFFSET UNITYSDK_OFFSET(0x1F98EC0)
#define F3D2F185626D0E4E_F14BEFCB596EE4D7_OFFSET UNITYSDK_OFFSET(0x1F99110)
#define F3D2F185626D0E4E_F6A675B119E39F53_OFFSET UNITYSDK_OFFSET(0x1F990C0)
#define F3D2F185626D0E4E__CTOR_OFFSET UNITYSDK_OFFSET(0x16665F0)

inline static constexpr unsigned int F3D2F185626D0E4E_TypeDefinitionIndex = 7951;

class F3D2F185626D0E4E : public ::EFC4AEA2121EC272
{
public:
	::System::UInt32 E8F3148A854C0045; // 0x80
	::System::Byte _padding0[0x4];
	::System::Action_2<::System::UInt32, ::System::Boolean>* E04A060E3B4E7376; // 0x88
	::System::Boolean A93C518F581984D3; // 0x90
	::System::Byte _padding1[0x7];
	::ABC::UI::MonoButton* ACF399C742288644; // 0x98
	::ABC::UI::MonoLocalizedTmp* E826BB47D977B5F3; // 0xA0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F3D2F185626D0E4E__CTOR_OFFSET))(this);
	}

	::System::Void A47BCAA43ED7396C(::FCECB52A00C1344E<::System::UInt32>* B645FDB00C9EABCC)
	{
		return ((::System::Void(*)(::PVOID, ::FCECB52A00C1344E<::System::UInt32>*))((::PBYTE)hIl2Cpp + F3D2F185626D0E4E_A47BCAA43ED7396C_OFFSET))(this, B645FDB00C9EABCC);
	}

	::System::Void A54D936318FAF9E3(::ABC::UI::MonoUIAutoView* AE442F7D881522D8)
	{
		return ((::System::Void(*)(::PVOID, ::ABC::UI::MonoUIAutoView*))((::PBYTE)hIl2Cpp + F3D2F185626D0E4E_A54D936318FAF9E3_OFFSET))(this, AE442F7D881522D8);
	}

	::System::Void F6A675B119E39F53()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F3D2F185626D0E4E_F6A675B119E39F53_OFFSET))(this);
	}

	::System::Void F14BEFCB596EE4D7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F3D2F185626D0E4E_F14BEFCB596EE4D7_OFFSET))(this);
	}

	::System::Void B950FF9810FC6646()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F3D2F185626D0E4E_B950FF9810FC6646_OFFSET))(this);
	}
};
