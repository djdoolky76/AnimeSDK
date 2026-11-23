#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/B39AAAD1233537D7/F3E61D3D9727F15D.h"
#include "unitysdk/EFC4AEA2121EC272.h"

class ACE1786504C3FA25;
class E4C274ED2F9D2BED;
namespace ABC::UI { class MonoLocalizedTmp; }
namespace ABC::UI { class MonoPrefabLoader; }
namespace ABC::UI { class MonoUIAutoView; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define F468581F0F31ABDD_A02AA783DBFCEC9E_OFFSET UNITYSDK_OFFSET(0x19F04F0)
#define F468581F0F31ABDD_A54D936318FAF9E3_OFFSET UNITYSDK_OFFSET(0x19EFC10)
#define F468581F0F31ABDD_ADEA7CA25EA99936_OFFSET UNITYSDK_OFFSET(0x19EFFC0)
#define F468581F0F31ABDD_EC3033C0485522FB_OFFSET UNITYSDK_OFFSET(0x19F0A20)
#define F468581F0F31ABDD_F560A9C380B074B6_OFFSET UNITYSDK_OFFSET(0x19F0BA0)
#define F468581F0F31ABDD_F6A675B119E39F53_OFFSET UNITYSDK_OFFSET(0x19EFE00)
#define F468581F0F31ABDD_FCC7443573DD0222_OFFSET UNITYSDK_OFFSET(0x19EFE50)
#define F468581F0F31ABDD__CTOR_OFFSET UNITYSDK_OFFSET(0x19F0E40)

inline static constexpr unsigned int F468581F0F31ABDD_TypeDefinitionIndex = 1734;

class F468581F0F31ABDD : public ::EFC4AEA2121EC272
{
public:
	::System::Collections::Generic::List_1<::E4C274ED2F9D2BED*>* A405410B5E1838E3; // 0x80
	::System::Collections::Generic::List_1<::ACE1786504C3FA25*>* BE1E8D8F857AD500; // 0x88
	::B39AAAD1233537D7::F3E61D3D9727F15D F3E04BB19F04FC60; // 0x90
	::System::Byte _padding0[0x4];
	::ABC::UI::MonoPrefabLoader* EAD67E19C0575E8E; // 0x98
	::ABC::UI::MonoPrefabLoader* F317358E0709DC00; // 0xA0
	::ABC::UI::MonoPrefabLoader* A962C52FF0639C0E; // 0xA8
	::ABC::UI::MonoPrefabLoader* B3C973CA7AE1DC2B; // 0xB0
	::ABC::UI::MonoLocalizedTmp* E2DD755B74A05F57; // 0xB8

	::UnityEngine::GameObject* F560A9C380B074B6(::System::UInt32 EA3C9D11E469EAA2)
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + F468581F0F31ABDD_F560A9C380B074B6_OFFSET))(this, EA3C9D11E469EAA2);
	}

	::System::Void A54D936318FAF9E3(::ABC::UI::MonoUIAutoView* AE442F7D881522D8)
	{
		return ((::System::Void(*)(::PVOID, ::ABC::UI::MonoUIAutoView*))((::PBYTE)hIl2Cpp + F468581F0F31ABDD_A54D936318FAF9E3_OFFSET))(this, AE442F7D881522D8);
	}

	::System::Void ADEA7CA25EA99936(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>* B6DFF589C575C159, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* BB3895B240C6C9E6)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>*))((::PBYTE)hIl2Cpp + F468581F0F31ABDD_ADEA7CA25EA99936_OFFSET))(this, B6DFF589C575C159, BB3895B240C6C9E6);
	}

	::System::Void FCC7443573DD0222()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F468581F0F31ABDD_FCC7443573DD0222_OFFSET))(this);
	}

	::System::Void A02AA783DBFCEC9E(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>* B6DFF589C575C159, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* BB3895B240C6C9E6)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>*))((::PBYTE)hIl2Cpp + F468581F0F31ABDD_A02AA783DBFCEC9E_OFFSET))(this, B6DFF589C575C159, BB3895B240C6C9E6);
	}

	::System::Void EC3033C0485522FB(::B39AAAD1233537D7::F3E61D3D9727F15D E3F8E4C2C3AF75BE, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>* B6DFF589C575C159, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* BB3895B240C6C9E6)
	{
		return ((::System::Void(*)(::PVOID, ::B39AAAD1233537D7::F3E61D3D9727F15D, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>*))((::PBYTE)hIl2Cpp + F468581F0F31ABDD_EC3033C0485522FB_OFFSET))(this, E3F8E4C2C3AF75BE, B6DFF589C575C159, BB3895B240C6C9E6);
	}

	::System::Void F6A675B119E39F53()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F468581F0F31ABDD_F6A675B119E39F53_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F468581F0F31ABDD__CTOR_OFFSET))(this);
	}
};
