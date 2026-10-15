#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FAFFMDBPCGJ_GEMLPEOKCHD.h"
#include "unitysdk/FAFFMDBPCGJ_LJFFHGPDLCE.h"
class FAFFMDBPCGJ_EIGPLIGCGJE;
class FAFFMDBPCGJ_KHMNBOAKIJN;
class FiveDimRenderingItem;
class INMMPMDELKE;
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }

#define FAFFMDBPCGJ_CKFFJDBKBBD_ABMHALPCCFE_OFFSET UNITYSDK_OFFSET(0x15678890)
#define FAFFMDBPCGJ_CKFFJDBKBBD_ABPOLNLIIOO_OFFSET UNITYSDK_OFFSET(0x15676830)
#define FAFFMDBPCGJ_CKFFJDBKBBD_BJODLBFDLHN_OFFSET UNITYSDK_OFFSET(0x15675B80)
#define FAFFMDBPCGJ_CKFFJDBKBBD_BKFIDAJDKHI_OFFSET UNITYSDK_OFFSET(0x15678550)
#define FAFFMDBPCGJ_CKFFJDBKBBD_BNFAFBJCCIK_OFFSET UNITYSDK_OFFSET(0x15675BD0)
#define FAFFMDBPCGJ_CKFFJDBKBBD_CHIKJGLJGPB_OFFSET UNITYSDK_OFFSET(0x15679DF0)
#define FAFFMDBPCGJ_CKFFJDBKBBD_CTOR_OFFSET UNITYSDK_OFFSET(0x1566D670)
#define FAFFMDBPCGJ_CKFFJDBKBBD_DBMKIPBOGAB_OFFSET UNITYSDK_OFFSET(0x15677360)
#define FAFFMDBPCGJ_CKFFJDBKBBD_DMJNKODIBBE_OFFSET UNITYSDK_OFFSET(0x156770F0)
#define FAFFMDBPCGJ_CKFFJDBKBBD_GET_ACTIVEITEMCOUNT_OFFSET UNITYSDK_OFFSET(0x15679B80)
#define FAFFMDBPCGJ_CKFFJDBKBBD_GET_CALCULATIONGENERATION_OFFSET UNITYSDK_OFFSET(0x15679BA0)
#define FAFFMDBPCGJ_CKFFJDBKBBD_GET_DIRECTIONGENERATION_OFFSET UNITYSDK_OFFSET(0x15679BC0)
#define FAFFMDBPCGJ_CKFFJDBKBBD_GHBOPNOBOJC_OFFSET UNITYSDK_OFFSET(0x15676DD0)
#define FAFFMDBPCGJ_CKFFJDBKBBD_GKKPAONAENM_OFFSET UNITYSDK_OFFSET(0x15677940)
#define FAFFMDBPCGJ_CKFFJDBKBBD_GKNLBDBDODG_OFFSET UNITYSDK_OFFSET(0x15679BE0)
#define FAFFMDBPCGJ_CKFFJDBKBBD_HNFEDGAKING_OFFSET UNITYSDK_OFFSET(0x15679EB0)
#define FAFFMDBPCGJ_CKFFJDBKBBD_KEBHGNHMMBP_OFFSET UNITYSDK_OFFSET(0x15676EE0)
#define FAFFMDBPCGJ_CKFFJDBKBBD_KHFDJEGNFMO_OFFSET UNITYSDK_OFFSET(0x156749A0)
#define FAFFMDBPCGJ_CKFFJDBKBBD_NAGADEEMABM_OFFSET UNITYSDK_OFFSET(0x1566ED50)
#define FAFFMDBPCGJ_CKFFJDBKBBD_OGGENAFFDIF_OFFSET UNITYSDK_OFFSET(0x15674C00)
#define FAFFMDBPCGJ_CKFFJDBKBBD_OLALJFOCEBM_OFFSET UNITYSDK_OFFSET(0x15674B00)
#define FAFFMDBPCGJ_CKFFJDBKBBD_PDPBNJDDNFB_OFFSET UNITYSDK_OFFSET(0x156755E0)
#define FAFFMDBPCGJ_CKFFJDBKBBD_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0x1566E0B0)
#define FAFFMDBPCGJ_CKFFJDBKBBD_SET_ACTIVEITEMCOUNT_OFFSET UNITYSDK_OFFSET(0x15679B90)
#define FAFFMDBPCGJ_CKFFJDBKBBD_SET_CALCULATIONGENERATION_OFFSET UNITYSDK_OFFSET(0x15679BB0)
#define FAFFMDBPCGJ_CKFFJDBKBBD_SET_DIRECTIONGENERATION_OFFSET UNITYSDK_OFFSET(0x15679BD0)

	class FAFFMDBPCGJ_CKFFJDBKBBD : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Object*>* GKBMDOMJFFP; // 0x10
		::System::Collections::Generic::Dictionary_2<::FiveDimRenderingItem*, ::System::Object*>* ONNAFNGPDPC; // 0x18
		::System::Collections::Generic::Dictionary_2<::INMMPMDELKE*, ::System::Object*>* CGCCGOIPAKE; // 0x20
		::System::Collections::Generic::List_1<::System::Object*>* GCNPLBDPHLK; // 0x28
		::System::Collections::Generic::Dictionary_2<::FiveDimRenderingItem*, ::System::Object*>* EKFAKJOHBIO; // 0x30
		::System::Collections::Generic::Stack_1<::System::Collections::Generic::List_1<::FiveDimRenderingItem*>*>* BMLAABKEEMN; // 0x38
		::System::Collections::Generic::List_1<::FiveDimRenderingItem*>* NDLBHGMFOAH; // 0x40
		::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Object*>* ANKJKGBOEBC; // 0x48
		::System::UInt32 _CalculationGeneration_k__BackingField; // 0x50
		::System::Int32 _ActiveItemCount_k__BackingField; // 0x54
		::System::UInt32 _DirectionGeneration_k__BackingField; // 0x58
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAFFMDBPCGJ_CKFFJDBKBBD_CTOR_OFFSET))(this);
		}

		::System::Int32 get_ActiveItemCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FAFFMDBPCGJ_CKFFJDBKBBD_GET_ACTIVEITEMCOUNT_OFFSET))(this);
		}

		::System::Void set_ActiveItemCount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FAFFMDBPCGJ_CKFFJDBKBBD_SET_ACTIVEITEMCOUNT_OFFSET))(this, a1);
		}

		::System::UInt32 get_CalculationGeneration()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FAFFMDBPCGJ_CKFFJDBKBBD_GET_CALCULATIONGENERATION_OFFSET))(this);
		}

		::System::Void set_CalculationGeneration(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FAFFMDBPCGJ_CKFFJDBKBBD_SET_CALCULATIONGENERATION_OFFSET))(this, a1);
		}

		::System::UInt32 get_DirectionGeneration()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FAFFMDBPCGJ_CKFFJDBKBBD_GET_DIRECTIONGENERATION_OFFSET))(this);
		}

		::System::Void set_DirectionGeneration(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FAFFMDBPCGJ_CKFFJDBKBBD_SET_DIRECTIONGENERATION_OFFSET))(this, a1);
		}

		::System::Void KHFDJEGNFMO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAFFMDBPCGJ_CKFFJDBKBBD_KHFDJEGNFMO_OFFSET))(this);
		}

		::System::Void BJODLBFDLHN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAFFMDBPCGJ_CKFFJDBKBBD_BJODLBFDLHN_OFFSET))(this);
		}

		::System::Void GHBOPNOBOJC(::FiveDimRenderingItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FiveDimRenderingItem*))((::PBYTE)hIl2Cpp + FAFFMDBPCGJ_CKFFJDBKBBD_GHBOPNOBOJC_OFFSET))(this, a1);
		}

		::FiveDimRenderingItem* BNFAFBJCCIK(::System::Int32 a1)
		{
			return ((::FiveDimRenderingItem*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FAFFMDBPCGJ_CKFFJDBKBBD_BNFAFBJCCIK_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::FiveDimRenderingItem*>* CHIKJGLJGPB()
		{
			return ((::System::Collections::Generic::List_1<::FiveDimRenderingItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FAFFMDBPCGJ_CKFFJDBKBBD_CHIKJGLJGPB_OFFSET))(this);
		}

		::FAFFMDBPCGJ_KHMNBOAKIJN* DMJNKODIBBE(::FAFFMDBPCGJ_GEMLPEOKCHD a1)
		{
			return ((::FAFFMDBPCGJ_KHMNBOAKIJN*(*)(::PVOID, ::FAFFMDBPCGJ_GEMLPEOKCHD))((::PBYTE)hIl2Cpp + FAFFMDBPCGJ_CKFFJDBKBBD_DMJNKODIBBE_OFFSET))(this, a1);
		}

		::System::Boolean DBMKIPBOGAB(::FAFFMDBPCGJ_GEMLPEOKCHD a1, ::FAFFMDBPCGJ_KHMNBOAKIJN* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::FAFFMDBPCGJ_GEMLPEOKCHD, ::FAFFMDBPCGJ_KHMNBOAKIJN*))((::PBYTE)hIl2Cpp + FAFFMDBPCGJ_CKFFJDBKBBD_DBMKIPBOGAB_OFFSET))(this, a1, a2);
		}

		::System::Boolean OLALJFOCEBM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FAFFMDBPCGJ_CKFFJDBKBBD_OLALJFOCEBM_OFFSET))(this);
		}

		::System::Void ABPOLNLIIOO(::FAFFMDBPCGJ_GEMLPEOKCHD a1)
		{
			return ((::System::Void(*)(::PVOID, ::FAFFMDBPCGJ_GEMLPEOKCHD))((::PBYTE)hIl2Cpp + FAFFMDBPCGJ_CKFFJDBKBBD_ABPOLNLIIOO_OFFSET))(this, a1);
		}

		::System::Void PDPBNJDDNFB(::FAFFMDBPCGJ_GEMLPEOKCHD a1)
		{
			return ((::System::Void(*)(::PVOID, ::FAFFMDBPCGJ_GEMLPEOKCHD))((::PBYTE)hIl2Cpp + FAFFMDBPCGJ_CKFFJDBKBBD_PDPBNJDDNFB_OFFSET))(this, a1);
		}

		::System::Boolean KEBHGNHMMBP(::FiveDimRenderingItem* a1, ::FAFFMDBPCGJ_LJFFHGPDLCE a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::FiveDimRenderingItem*, ::FAFFMDBPCGJ_LJFFHGPDLCE))((::PBYTE)hIl2Cpp + FAFFMDBPCGJ_CKFFJDBKBBD_KEBHGNHMMBP_OFFSET))(this, a1, a2);
		}

		::System::Boolean GKKPAONAENM(::FiveDimRenderingItem* a1, ::FAFFMDBPCGJ_EIGPLIGCGJE* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::FiveDimRenderingItem*, ::FAFFMDBPCGJ_EIGPLIGCGJE*))((::PBYTE)hIl2Cpp + FAFFMDBPCGJ_CKFFJDBKBBD_GKKPAONAENM_OFFSET))(this, a1, a2);
		}

		::System::Boolean BKFIDAJDKHI(::INMMPMDELKE* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::INMMPMDELKE*, ::System::Int32))((::PBYTE)hIl2Cpp + FAFFMDBPCGJ_CKFFJDBKBBD_BKFIDAJDKHI_OFFSET))(this, a1, a2);
		}

		::System::Void ABMHALPCCFE(::INMMPMDELKE* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::INMMPMDELKE*, ::System::Int32))((::PBYTE)hIl2Cpp + FAFFMDBPCGJ_CKFFJDBKBBD_ABMHALPCCFE_OFFSET))(this, a1, a2);
		}

		::System::Void NAGADEEMABM(::FiveDimRenderingItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FiveDimRenderingItem*))((::PBYTE)hIl2Cpp + FAFFMDBPCGJ_CKFFJDBKBBD_NAGADEEMABM_OFFSET))(this, a1);
		}

		::System::Void OGGENAFFDIF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAFFMDBPCGJ_CKFFJDBKBBD_OGGENAFFDIF_OFFSET))(this);
		}

		::System::Void PJPFIHFAHGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAFFMDBPCGJ_CKFFJDBKBBD_PJPFIHFAHGO_OFFSET))(this);
		}

		::System::Void GKNLBDBDODG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAFFMDBPCGJ_CKFFJDBKBBD_GKNLBDBDODG_OFFSET))(this);
		}

		::System::Void HNFEDGAKING(::FAFFMDBPCGJ_KHMNBOAKIJN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FAFFMDBPCGJ_KHMNBOAKIJN*))((::PBYTE)hIl2Cpp + FAFFMDBPCGJ_CKFFJDBKBBD_HNFEDGAKING_OFFSET))(this, a1);
		}

	};
