#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EFC4AEA2121EC272.h"
#include "unitysdk/System/Nullable_1.h"

class E683E26F7B46CAD1;
namespace ABC::UI { class MonoLocalizedTmp; }
namespace ABC::UI { class MonoPrefabLoader; }
namespace ABC::UI { class MonoUIAutoView; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class FCECB52A00C1344E;

#define AC02B15736614D35_A54D936318FAF9E3_OFFSET UNITYSDK_OFFSET(0x1F6F120)
#define AC02B15736614D35_AA5A2A2A5B2D5C25_OFFSET UNITYSDK_OFFSET(0x1F6F260)
#define AC02B15736614D35_B86883D7E66746FA_OFFSET UNITYSDK_OFFSET(0x1F6F690)
#define AC02B15736614D35_E0F49A14684694BC_OFFSET UNITYSDK_OFFSET(0x1F6F860)
#define AC02B15736614D35_E2C6F2285659D216_OFFSET UNITYSDK_OFFSET(0x1F6FA60)
#define AC02B15736614D35_EC3033C0485522FB_OFFSET UNITYSDK_OFFSET(0x1F6FB90)
#define AC02B15736614D35_F6691C1FDBE16930_OFFSET UNITYSDK_OFFSET(0x1F6F610)
#define AC02B15736614D35_F6A675B119E39F53_OFFSET UNITYSDK_OFFSET(0x1F6F3D0)
#define AC02B15736614D35_FCC7443573DD0222_OFFSET UNITYSDK_OFFSET(0x1F6F420)
#define AC02B15736614D35__CTOR_OFFSET UNITYSDK_OFFSET(0x1F6FF50)

inline static constexpr unsigned int AC02B15736614D35_TypeDefinitionIndex = 7860;

class AC02B15736614D35 : public ::EFC4AEA2121EC272
{
public:
	::FCECB52A00C1344E<::System::UInt32>* F7A2A79881988139; // 0x80
	::System::Action* B27D9E87385C756A; // 0x88
	::System::Collections::Generic::List_1<::E683E26F7B46CAD1*>* F74C76580DA11540; // 0x90
	::ABC::UI::MonoPrefabLoader* B85C8B96DFA71786; // 0x98
	::ABC::UI::MonoLocalizedTmp* AE06E252F590B716; // 0xA0

	::System::Boolean E2C6F2285659D216(::System::UInt32 F56C01D9DF8308FF)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AC02B15736614D35_E2C6F2285659D216_OFFSET))(this, F56C01D9DF8308FF);
	}

	::System::Void FCC7443573DD0222()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AC02B15736614D35_FCC7443573DD0222_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AC02B15736614D35__CTOR_OFFSET))(this);
	}

	::System::Void E0F49A14684694BC(::System::UInt32 AE57FF5179B75168, ::System::Boolean F1AACB3553F67303)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + AC02B15736614D35_E0F49A14684694BC_OFFSET))(this, AE57FF5179B75168, F1AACB3553F67303);
	}

	::System::Void A54D936318FAF9E3(::ABC::UI::MonoUIAutoView* AE442F7D881522D8)
	{
		return ((::System::Void(*)(::PVOID, ::ABC::UI::MonoUIAutoView*))((::PBYTE)hIl2Cpp + AC02B15736614D35_A54D936318FAF9E3_OFFSET))(this, AE442F7D881522D8);
	}

	::System::Void EC3033C0485522FB(::System::Action* EAEBB580C1ACF0EA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + AC02B15736614D35_EC3033C0485522FB_OFFSET))(this, EAEBB580C1ACF0EA);
	}

	::System::Boolean F6691C1FDBE16930()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AC02B15736614D35_F6691C1FDBE16930_OFFSET))(this);
	}

	::System::Void B86883D7E66746FA(::System::Collections::Generic::List_1<::System::UInt32>* A5186934037221CA, ::System::Nullable_1<::System::UInt32> B2C7EFC78EE92D9D)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Nullable_1<::System::UInt32>))((::PBYTE)hIl2Cpp + AC02B15736614D35_B86883D7E66746FA_OFFSET))(this, A5186934037221CA, B2C7EFC78EE92D9D);
	}

	::System::Void AA5A2A2A5B2D5C25()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AC02B15736614D35_AA5A2A2A5B2D5C25_OFFSET))(this);
	}

	::System::Void F6A675B119E39F53()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AC02B15736614D35_F6A675B119E39F53_OFFSET))(this);
	}
};
