#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ACCGBEKMHNF.h"
#include "unitysdk/RPG/GameCore/Match3/BombType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
class BOMFGKDLHIB;
class CAKNHIMMBOM;
class EFHNDMENDHI;
class KNGIFBLLIBB;
class KPCPIMINKPL;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define LMNNKEACHLL_AJEGOJKOKCH_OFFSET UNITYSDK_OFFSET(0x1C8ED540)
#define LMNNKEACHLL_CCONACIOOOO_OFFSET UNITYSDK_OFFSET(0x1C8ED8D0)
#define LMNNKEACHLL_CDEMCEAIJON_OFFSET UNITYSDK_OFFSET(0x1C8E7860)
#define LMNNKEACHLL_CLCOPBIIKEK_OFFSET UNITYSDK_OFFSET(0x1C8E5FE0)
#define LMNNKEACHLL_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C8E5E60)
#define LMNNKEACHLL_CNIFPEPEPHG_OFFSET UNITYSDK_OFFSET(0x1C8E7730)
#define LMNNKEACHLL_CTOR_OFFSET UNITYSDK_OFFSET(0x1C8EDBC0)
#define LMNNKEACHLL_EKNHKGGEKKM_OFFSET UNITYSDK_OFFSET(0x1C8ED260)
#define LMNNKEACHLL_ENILOANMDEM_OFFSET UNITYSDK_OFFSET(0x1C8E9D90)
#define LMNNKEACHLL_GAIKMBIBMLB_OFFSET UNITYSDK_OFFSET(0x1C8EA5D0)
#define LMNNKEACHLL_HIKBAMOFAOG_OFFSET UNITYSDK_OFFSET(0x1C8EDA80)
#define LMNNKEACHLL_HJECJMMALNP_OFFSET UNITYSDK_OFFSET(0x1C8E9750)
#define LMNNKEACHLL_IMCGMEHJFHP_OFFSET UNITYSDK_OFFSET(0x1C8ED300)
#define LMNNKEACHLL_IMMOAIBHBMG_OFFSET UNITYSDK_OFFSET(0x1C8EA1D0)
#define LMNNKEACHLL_INNEAKHIENE_1_OFFSET UNITYSDK_OFFSET(0x1C8E76C0)
#define LMNNKEACHLL_INNEAKHIENE_OFFSET UNITYSDK_OFFSET(0x1C8E73F0)
#define LMNNKEACHLL_KHNHMHLKBOI_OFFSET UNITYSDK_OFFSET(0x1C8E82B0)
#define LMNNKEACHLL_KIONJAKPPIG_OFFSET UNITYSDK_OFFSET(0x1C8ED940)
#define LMNNKEACHLL_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x1C8E5F40)
#define LMNNKEACHLL_NONMFOLKOFN_OFFSET UNITYSDK_OFFSET(0x1C8E90E0)
#define LMNNKEACHLL_PIILIAFHODM_OFFSET UNITYSDK_OFFSET(0x1C8EDB10)

inline static constexpr unsigned int LMNNKEACHLL_TypeDefinitionIndex = 43028;

	class LMNNKEACHLL : public ::System::Object
	{
	public:
		::KNGIFBLLIBB* CPIKJMEMAIE; // 0x10
		::BOMFGKDLHIB* PDENFEFCAGN; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::CAKNHIMMBOM*>* HIJPJBGAADF; // 0x20
		::System::Collections::Generic::Queue_1<::ACCGBEKMHNF>* MIFOMLHKECG; // 0x28
		::System::Collections::Generic::List_1<::KPCPIMINKPL*>* MENOBJEFELB; // 0x30
		::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>* KLEIMNLINEE; // 0x38
		// static const ::System::Object GNIMLHBALEP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMNNKEACHLL_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMNNKEACHLL_CLEAR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::BOMFGKDLHIB* a1, ::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>* a2, ::System::Collections::Generic::List_1<::KPCPIMINKPL*>* a3, ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::CAKNHIMMBOM*>* a4, ::KNGIFBLLIBB* a5)
		{
			return ((::System::Void(*)(::PVOID, ::BOMFGKDLHIB*, ::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>*, ::System::Collections::Generic::List_1<::KPCPIMINKPL*>*, ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::CAKNHIMMBOM*>*, ::KNGIFBLLIBB*))((::PBYTE)hIl2Cpp + LMNNKEACHLL_KPJGDHLENIP_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Boolean CLCOPBIIKEK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LMNNKEACHLL_CLCOPBIIKEK_OFFSET))(this);
		}

		::System::Boolean CDEMCEAIJON(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + LMNNKEACHLL_CDEMCEAIJON_OFFSET))(this, a1, a2);
		}

		::System::Boolean KHNHMHLKBOI(::System::Boolean a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LMNNKEACHLL_KHNHMHLKBOI_OFFSET))(this, a1);
		}

		::System::Boolean NONMFOLKOFN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LMNNKEACHLL_NONMFOLKOFN_OFFSET))(this);
		}

		::System::Boolean HJECJMMALNP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LMNNKEACHLL_HJECJMMALNP_OFFSET))(this);
		}

		::System::Boolean ENILOANMDEM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LMNNKEACHLL_ENILOANMDEM_OFFSET))(this);
		}

		::System::Boolean IMMOAIBHBMG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LMNNKEACHLL_IMMOAIBHBMG_OFFSET))(this);
		}

		::System::Boolean GAIKMBIBMLB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LMNNKEACHLL_GAIKMBIBMLB_OFFSET))(this);
		}

		::System::Void AJEGOJKOKCH(::CAKNHIMMBOM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CAKNHIMMBOM*))((::PBYTE)hIl2Cpp + LMNNKEACHLL_AJEGOJKOKCH_OFFSET))(this, a1);
		}

		::System::Void IMCGMEHJFHP(::System::ValueTuple_2<::System::UInt32, ::System::UInt32> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>))((::PBYTE)hIl2Cpp + LMNNKEACHLL_IMCGMEHJFHP_OFFSET))(this, a1);
		}

		::CAKNHIMMBOM* INNEAKHIENE(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::CAKNHIMMBOM*(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + LMNNKEACHLL_INNEAKHIENE_OFFSET))(this, a1, a2, a3);
		}

		::CAKNHIMMBOM* INNEAKHIENE_1(::System::ValueTuple_2<::System::UInt32, ::System::UInt32> a1, ::System::UInt32 a2)
		{
			return ((::CAKNHIMMBOM*(*)(::PVOID, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::System::UInt32))((::PBYTE)hIl2Cpp + LMNNKEACHLL_INNEAKHIENE_1_OFFSET))(this, a1, a2);
		}

		::KPCPIMINKPL* CNIFPEPEPHG(::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>* a1)
		{
			return ((::KPCPIMINKPL*(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>*))((::PBYTE)hIl2Cpp + LMNNKEACHLL_CNIFPEPEPHG_OFFSET))(this, a1);
		}

		::System::Boolean EKNHKGGEKKM(::CAKNHIMMBOM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CAKNHIMMBOM*))((::PBYTE)hIl2Cpp + LMNNKEACHLL_EKNHKGGEKKM_OFFSET))(this, a1);
		}

		::System::Boolean CCONACIOOOO(::CAKNHIMMBOM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CAKNHIMMBOM*))((::PBYTE)hIl2Cpp + LMNNKEACHLL_CCONACIOOOO_OFFSET))(this, a1);
		}

		::System::Boolean KIONJAKPPIG(::EFHNDMENDHI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EFHNDMENDHI*))((::PBYTE)hIl2Cpp + LMNNKEACHLL_KIONJAKPPIG_OFFSET))(this, a1);
		}

		::System::UInt32 HIKBAMOFAOG(::RPG::GameCore::Match3::BombType a1, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32> a2, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32> a3)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::Match3::BombType, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>))((::PBYTE)hIl2Cpp + LMNNKEACHLL_HIKBAMOFAOG_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 PIILIAFHODM(::EFHNDMENDHI* a1, ::EFHNDMENDHI* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::EFHNDMENDHI*, ::EFHNDMENDHI*))((::PBYTE)hIl2Cpp + LMNNKEACHLL_PIILIAFHODM_OFFSET))(this, a1, a2);
		}

	};
