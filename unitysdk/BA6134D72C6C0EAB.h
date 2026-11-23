#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EFC4AEA2121EC272.h"

class BDE6248C23D565BF;
namespace ABC::UI { class MonoPrefabLoader; }
namespace ABC::UI { class MonoUIAutoView; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BA6134D72C6C0EAB_A47BCAA43ED7396C_OFFSET UNITYSDK_OFFSET(0x203ED90)
#define BA6134D72C6C0EAB_A54D936318FAF9E3_OFFSET UNITYSDK_OFFSET(0x203EA80)
#define BA6134D72C6C0EAB_EC3033C0485522FB_OFFSET UNITYSDK_OFFSET(0x203EFA0)
#define BA6134D72C6C0EAB_F6A675B119E39F53_OFFSET UNITYSDK_OFFSET(0x203EB70)
#define BA6134D72C6C0EAB_FCC7443573DD0222_OFFSET UNITYSDK_OFFSET(0x203EBC0)
#define BA6134D72C6C0EAB__CTOR_OFFSET UNITYSDK_OFFSET(0x203F0A0)

inline static constexpr unsigned int BA6134D72C6C0EAB_TypeDefinitionIndex = 8310;

class BA6134D72C6C0EAB : public ::EFC4AEA2121EC272
{
public:
	::System::Collections::Generic::List_1<::BDE6248C23D565BF*>* E4CD8FB7F21CD874; // 0x80
	::System::Collections::Generic::List_1<::System::UInt32>* BF04149BF44A1658; // 0x88
	::System::Action_1<::System::UInt32>* A9E47BE49B69E407; // 0x90
	::ABC::UI::MonoPrefabLoader* F02447203AB9266F; // 0x98

	::System::Void FCC7443573DD0222()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BA6134D72C6C0EAB_FCC7443573DD0222_OFFSET))(this);
	}

	::System::Void A47BCAA43ED7396C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BA6134D72C6C0EAB_A47BCAA43ED7396C_OFFSET))(this);
	}

	::System::Void F6A675B119E39F53()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BA6134D72C6C0EAB_F6A675B119E39F53_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BA6134D72C6C0EAB__CTOR_OFFSET))(this);
	}

	::System::Void A54D936318FAF9E3(::ABC::UI::MonoUIAutoView* AE442F7D881522D8)
	{
		return ((::System::Void(*)(::PVOID, ::ABC::UI::MonoUIAutoView*))((::PBYTE)hIl2Cpp + BA6134D72C6C0EAB_A54D936318FAF9E3_OFFSET))(this, AE442F7D881522D8);
	}

	::System::Void EC3033C0485522FB(::System::Collections::Generic::List_1<::System::UInt32>* A170965CDA616DCF, ::System::Action_1<::System::UInt32>* E04D2BE64FCE9814)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Action_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + BA6134D72C6C0EAB_EC3033C0485522FB_OFFSET))(this, A170965CDA616DCF, E04D2BE64FCE9814);
	}
};
