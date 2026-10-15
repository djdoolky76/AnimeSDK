#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AGNAFKDCJLB;
class IDKGOGKFDOB;
namespace RPG::Client::ChenLingBattle { class Soldier; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CGBNMMKEGLF_AEHCENKGEFE_OFFSET UNITYSDK_OFFSET(0xCC85810)
#define CGBNMMKEGLF_AICFDBHDBEM_OFFSET UNITYSDK_OFFSET(0xCC854A0)
#define CGBNMMKEGLF_AKHMOCEMOEE_OFFSET UNITYSDK_OFFSET(0xCC85970)
#define CGBNMMKEGLF_BNPECLKLDFA_OFFSET UNITYSDK_OFFSET(0xCC856E0)
#define CGBNMMKEGLF_CTOR_OFFSET UNITYSDK_OFFSET(0xCC85D80)
#define CGBNMMKEGLF_FNHMKKGNKEO_OFFSET UNITYSDK_OFFSET(0xCC85AE0)
#define CGBNMMKEGLF_GET__MERGINGSOLIDERS_OFFSET UNITYSDK_OFFSET(0xCC85D60)
#define CGBNMMKEGLF_OGCOBLCIINE_OFFSET UNITYSDK_OFFSET(0xCC859B0)
#define CGBNMMKEGLF_SET__MERGINGSOLIDERS_OFFSET UNITYSDK_OFFSET(0xCC85D70)

	class CGBNMMKEGLF : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::AGNAFKDCJLB*>* __MergingSoliders_k__BackingField; // 0x10
		::System::Boolean PBGKDCCEKCL; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGBNMMKEGLF_CTOR_OFFSET))(this);
		}

		::System::Void AICFDBHDBEM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGBNMMKEGLF_AICFDBHDBEM_OFFSET))(this);
		}

		::System::Void BNPECLKLDFA(::System::Collections::Generic::List_1<::RPG::Client::ChenLingBattle::Soldier*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ChenLingBattle::Soldier*>*))((::PBYTE)hIl2Cpp + CGBNMMKEGLF_BNPECLKLDFA_OFFSET))(this, a1);
		}

		::System::Boolean AEHCENKGEFE(::RPG::Client::ChenLingBattle::Soldier* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChenLingBattle::Soldier*))((::PBYTE)hIl2Cpp + CGBNMMKEGLF_AEHCENKGEFE_OFFSET))(this, a1);
		}

		::System::Boolean AKHMOCEMOEE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CGBNMMKEGLF_AKHMOCEMOEE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::IDKGOGKFDOB*>* OGCOBLCIINE(::System::Collections::Generic::List_1<::RPG::Client::ChenLingBattle::Soldier*>* a1)
		{
			return ((::System::Collections::Generic::List_1<::IDKGOGKFDOB*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ChenLingBattle::Soldier*>*))((::PBYTE)hIl2Cpp + CGBNMMKEGLF_OGCOBLCIINE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::IDKGOGKFDOB*>* FNHMKKGNKEO()
		{
			return ((::System::Collections::Generic::List_1<::IDKGOGKFDOB*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CGBNMMKEGLF_FNHMKKGNKEO_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::AGNAFKDCJLB*>* get__MergingSoliders()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::AGNAFKDCJLB*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CGBNMMKEGLF_GET__MERGINGSOLIDERS_OFFSET))(this);
		}

		::System::Void set__MergingSoliders(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::AGNAFKDCJLB*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::AGNAFKDCJLB*>*))((::PBYTE)hIl2Cpp + CGBNMMKEGLF_SET__MERGINGSOLIDERS_OFFSET))(this, a1);
		}

	};
