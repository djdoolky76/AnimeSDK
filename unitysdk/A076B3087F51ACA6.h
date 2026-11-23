#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EFC4AEA2121EC272.h"

class E4AA2DCA36C3ACAB;
class F5DC12EC825CCBF6;
namespace ABC::UI { class MonoButton; }
namespace ABC::UI { class MonoPrefabLoader; }
namespace ABC::UI { class MonoUIAutoView; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define A076B3087F51ACA6_A54D936318FAF9E3_OFFSET UNITYSDK_OFFSET(0x176C870)
#define A076B3087F51ACA6_BDD3E08703C1C2A0_OFFSET UNITYSDK_OFFSET(0x176CBA0)
#define A076B3087F51ACA6_EC3033C0485522FB_OFFSET UNITYSDK_OFFSET(0x176CCF0)
#define A076B3087F51ACA6_F6A675B119E39F53_OFFSET UNITYSDK_OFFSET(0x176C9B0)
#define A076B3087F51ACA6_FCC7443573DD0222_OFFSET UNITYSDK_OFFSET(0x176CA00)
#define A076B3087F51ACA6__CTOR_OFFSET UNITYSDK_OFFSET(0x176CEC0)

inline static constexpr unsigned int A076B3087F51ACA6_TypeDefinitionIndex = 837;

class A076B3087F51ACA6 : public ::EFC4AEA2121EC272
{
public:
	::System::Collections::Generic::List_1<::E4AA2DCA36C3ACAB*>* B0B22251E495FEAF; // 0x80
	::ABC::UI::MonoButton* BD0361E53CAB56D3; // 0x88
	::ABC::UI::MonoPrefabLoader* B6B1916EF5AE15FF; // 0x90

	::System::Void A54D936318FAF9E3(::ABC::UI::MonoUIAutoView* AE442F7D881522D8)
	{
		return ((::System::Void(*)(::PVOID, ::ABC::UI::MonoUIAutoView*))((::PBYTE)hIl2Cpp + A076B3087F51ACA6_A54D936318FAF9E3_OFFSET))(this, AE442F7D881522D8);
	}

	::System::Void FCC7443573DD0222()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A076B3087F51ACA6_FCC7443573DD0222_OFFSET))(this);
	}

	::System::Void BDD3E08703C1C2A0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A076B3087F51ACA6_BDD3E08703C1C2A0_OFFSET))(this);
	}

	::System::Void EC3033C0485522FB(::System::Collections::Generic::List_1<::F5DC12EC825CCBF6*>* FC4633197177E7B6)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::F5DC12EC825CCBF6*>*))((::PBYTE)hIl2Cpp + A076B3087F51ACA6_EC3033C0485522FB_OFFSET))(this, FC4633197177E7B6);
	}

	::System::Void F6A675B119E39F53()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A076B3087F51ACA6_F6A675B119E39F53_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A076B3087F51ACA6__CTOR_OFFSET))(this);
	}
};
