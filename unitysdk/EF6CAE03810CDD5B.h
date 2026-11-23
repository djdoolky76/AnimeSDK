#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EFC4AEA2121EC272.h"

class B09CDF0E14325755;
class BF5427325DB1DC4E;
namespace ABC::UI { class MonoLocalizedTmp; }
namespace ABC::UI { class MonoPrefabLoader; }
namespace ABC::UI { class MonoUIAutoView; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class CanvasGroup; }

#define EF6CAE03810CDD5B_A54D936318FAF9E3_OFFSET UNITYSDK_OFFSET(0x1AC6720)
#define EF6CAE03810CDD5B_B4D057761B5BC296_OFFSET UNITYSDK_OFFSET(0x1AC6AB0)
#define EF6CAE03810CDD5B_B950FF9810FC6646_OFFSET UNITYSDK_OFFSET(0x1AC64D0)
#define EF6CAE03810CDD5B_EC3033C0485522FB_OFFSET UNITYSDK_OFFSET(0x1AC6B30)
#define EF6CAE03810CDD5B_F6A675B119E39F53_OFFSET UNITYSDK_OFFSET(0x1AC68B0)
#define EF6CAE03810CDD5B_FCC7443573DD0222_OFFSET UNITYSDK_OFFSET(0x1AC6900)
#define EF6CAE03810CDD5B__CTOR_OFFSET UNITYSDK_OFFSET(0x1AC6BB0)

inline static constexpr unsigned int EF6CAE03810CDD5B_TypeDefinitionIndex = 1957;

class EF6CAE03810CDD5B : public ::EFC4AEA2121EC272
{
public:
	::System::Collections::Generic::List_1<::B09CDF0E14325755*>* EFFF1F153928702F; // 0x80
	::System::Action_1<::BF5427325DB1DC4E*>* FC4F5E1C34D82A5F; // 0x88
	::ABC::UI::MonoPrefabLoader* A3329ACBBBE47979; // 0x90
	::ABC::UI::MonoLocalizedTmp* A565B4C5FC4F42A6; // 0x98
	::UnityEngine::CanvasGroup* A5E6C67626B1C494; // 0xA0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EF6CAE03810CDD5B__CTOR_OFFSET))(this);
	}

	::System::Void B4D057761B5BC296(::BF5427325DB1DC4E* AA56373A845C8012)
	{
		return ((::System::Void(*)(::PVOID, ::BF5427325DB1DC4E*))((::PBYTE)hIl2Cpp + EF6CAE03810CDD5B_B4D057761B5BC296_OFFSET))(this, AA56373A845C8012);
	}

	::System::Void F6A675B119E39F53()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EF6CAE03810CDD5B_F6A675B119E39F53_OFFSET))(this);
	}

	::System::Void EC3033C0485522FB(::System::Action_1<::BF5427325DB1DC4E*>* AC8718160B7470D9)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::BF5427325DB1DC4E*>*))((::PBYTE)hIl2Cpp + EF6CAE03810CDD5B_EC3033C0485522FB_OFFSET))(this, AC8718160B7470D9);
	}

	::System::Void FCC7443573DD0222()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EF6CAE03810CDD5B_FCC7443573DD0222_OFFSET))(this);
	}

	::System::Void B950FF9810FC6646()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EF6CAE03810CDD5B_B950FF9810FC6646_OFFSET))(this);
	}

	::System::Void A54D936318FAF9E3(::ABC::UI::MonoUIAutoView* AE442F7D881522D8)
	{
		return ((::System::Void(*)(::PVOID, ::ABC::UI::MonoUIAutoView*))((::PBYTE)hIl2Cpp + EF6CAE03810CDD5B_A54D936318FAF9E3_OFFSET))(this, AE442F7D881522D8);
	}
};
