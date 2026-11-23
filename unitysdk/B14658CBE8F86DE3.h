#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EFC4AEA2121EC272.h"
#include "unitysdk/System/Nullable_1.h"

class F63F2E602F035C29;
namespace ABC::UI { class MonoLocalizedTmp; }
namespace ABC::UI { class MonoPrefabLoader; }
namespace ABC::UI { class MonoUIAutoView; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class FCECB52A00C1344E;

#define B14658CBE8F86DE3_A54D936318FAF9E3_OFFSET UNITYSDK_OFFSET(0x1EF5C50)
#define B14658CBE8F86DE3_AA5A2A2A5B2D5C25_OFFSET UNITYSDK_OFFSET(0x1EF5D90)
#define B14658CBE8F86DE3_B86883D7E66746FA_OFFSET UNITYSDK_OFFSET(0x1EF61C0)
#define B14658CBE8F86DE3_E0F49A14684694BC_OFFSET UNITYSDK_OFFSET(0x1EF6390)
#define B14658CBE8F86DE3_E2C6F2285659D216_OFFSET UNITYSDK_OFFSET(0x1EF6590)
#define B14658CBE8F86DE3_EC3033C0485522FB_OFFSET UNITYSDK_OFFSET(0x1EF6670)
#define B14658CBE8F86DE3_F6691C1FDBE16930_OFFSET UNITYSDK_OFFSET(0x1EF6140)
#define B14658CBE8F86DE3_F6A675B119E39F53_OFFSET UNITYSDK_OFFSET(0x1EF5F00)
#define B14658CBE8F86DE3_FCC7443573DD0222_OFFSET UNITYSDK_OFFSET(0x1EF5F50)
#define B14658CBE8F86DE3__CTOR_OFFSET UNITYSDK_OFFSET(0x1EF6A10)

inline static constexpr unsigned int B14658CBE8F86DE3_TypeDefinitionIndex = 7468;

class B14658CBE8F86DE3 : public ::EFC4AEA2121EC272
{
public:
	::FCECB52A00C1344E<::System::UInt32>* EAD757D62106AF5A; // 0x80
	::System::Collections::Generic::List_1<::F63F2E602F035C29*>* F74C76580DA11540; // 0x88
	::System::Action* B27D9E87385C756A; // 0x90
	::ABC::UI::MonoPrefabLoader* FFBB9029549E1020; // 0x98
	::ABC::UI::MonoLocalizedTmp* AE06E252F590B716; // 0xA0

	::System::Void B86883D7E66746FA(::System::Collections::Generic::List_1<::System::UInt32>* A5186934037221CA, ::System::Nullable_1<::System::UInt32> B2C7EFC78EE92D9D)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Nullable_1<::System::UInt32>))((::PBYTE)hIl2Cpp + B14658CBE8F86DE3_B86883D7E66746FA_OFFSET))(this, A5186934037221CA, B2C7EFC78EE92D9D);
	}

	::System::Void A54D936318FAF9E3(::ABC::UI::MonoUIAutoView* AE442F7D881522D8)
	{
		return ((::System::Void(*)(::PVOID, ::ABC::UI::MonoUIAutoView*))((::PBYTE)hIl2Cpp + B14658CBE8F86DE3_A54D936318FAF9E3_OFFSET))(this, AE442F7D881522D8);
	}

	::System::Boolean E2C6F2285659D216(::System::UInt32 F56C01D9DF8308FF)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + B14658CBE8F86DE3_E2C6F2285659D216_OFFSET))(this, F56C01D9DF8308FF);
	}

	::System::Void AA5A2A2A5B2D5C25()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B14658CBE8F86DE3_AA5A2A2A5B2D5C25_OFFSET))(this);
	}

	::System::Void EC3033C0485522FB(::System::Action* EAEBB580C1ACF0EA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + B14658CBE8F86DE3_EC3033C0485522FB_OFFSET))(this, EAEBB580C1ACF0EA);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B14658CBE8F86DE3__CTOR_OFFSET))(this);
	}

	::System::Boolean F6691C1FDBE16930()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + B14658CBE8F86DE3_F6691C1FDBE16930_OFFSET))(this);
	}

	::System::Void FCC7443573DD0222()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B14658CBE8F86DE3_FCC7443573DD0222_OFFSET))(this);
	}

	::System::Void F6A675B119E39F53()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B14658CBE8F86DE3_F6A675B119E39F53_OFFSET))(this);
	}

	::System::Void E0F49A14684694BC(::System::UInt32 B28130503AE8B243, ::System::Boolean F1AACB3553F67303)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + B14658CBE8F86DE3_E0F49A14684694BC_OFFSET))(this, B28130503AE8B243, F1AACB3553F67303);
	}
};
