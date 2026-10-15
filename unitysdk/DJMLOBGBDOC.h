#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGNHALFCLJB_ReasonType.h"
#include "unitysdk/JEOCDNBFEBF.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
class CGNHALFCLJB;
class DJMLOBGBDOC_LHEAMHHMOFL;
class EEHCJFEEOLF;
class HFCHPMGNMOM;
class IAJGGEMFOMB;
class ILOOAAOHIIG;
namespace R3 { template <typename T> class ReadOnlyReactiveProperty_1; }
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }

#define DJMLOBGBDOC_BHHOIIOGAJK_OFFSET UNITYSDK_OFFSET(0xF240160)
#define DJMLOBGBDOC_CIDMGHLONGD_OFFSET UNITYSDK_OFFSET(0xF23FF90)
#define DJMLOBGBDOC_CLAOMNHNIBC_OFFSET UNITYSDK_OFFSET(0xF23EB40)
#define DJMLOBGBDOC_CTOR_OFFSET UNITYSDK_OFFSET(0xF240280)
#define DJMLOBGBDOC_DCGPFFDAIAE_OFFSET UNITYSDK_OFFSET(0xF23FE70)
#define DJMLOBGBDOC_EELEJNNNJAG_OFFSET UNITYSDK_OFFSET(0xF23E4B0)
#define DJMLOBGBDOC_FHJDNHCILJC_OFFSET UNITYSDK_OFFSET(0xF23E3F0)
#define DJMLOBGBDOC_FLOFKOJBJBO_OFFSET UNITYSDK_OFFSET(0xF23E870)
#define DJMLOBGBDOC_GET_CONTEXT_OFFSET UNITYSDK_OFFSET(0xF23E190)
#define DJMLOBGBDOC_GJIKELKBJCC_OFFSET UNITYSDK_OFFSET(0xF23E5F0)
#define DJMLOBGBDOC_HAJFBKHHNEJ_OFFSET UNITYSDK_OFFSET(0xF23FC90)
#define DJMLOBGBDOC_IFNHGNBIMGK_OFFSET UNITYSDK_OFFSET(0xF23E450)
#define DJMLOBGBDOC_IOKCMGANCOF_OFFSET UNITYSDK_OFFSET(0xF23F610)
#define DJMLOBGBDOC_MFHBOBKCKKP_OFFSET UNITYSDK_OFFSET(0xF23ED20)
#define DJMLOBGBDOC_NGELBBBOMLI_OFFSET UNITYSDK_OFFSET(0xF23F020)
#define DJMLOBGBDOC_NKLDHMFDBBI_OFFSET UNITYSDK_OFFSET(0xF23F200)
#define DJMLOBGBDOC_OEEBBPAJJFB_OFFSET UNITYSDK_OFFSET(0xF23F430)
#define DJMLOBGBDOC_OLPNCONNKNN_OFFSET UNITYSDK_OFFSET(0xF23FB50)
#define DJMLOBGBDOC_PAOLCMEBEDG_OFFSET UNITYSDK_OFFSET(0xF23E1B0)
#define DJMLOBGBDOC_PEAIHAKIKPA_OFFSET UNITYSDK_OFFSET(0xF23E650)
#define DJMLOBGBDOC_PHBGEDAGOLA_OFFSET UNITYSDK_OFFSET(0xF23EA00)
#define DJMLOBGBDOC_SET_CONTEXT_OFFSET UNITYSDK_OFFSET(0xF23E1A0)
#define DJMLOBGBDOC__SAFEHANDLEDRAGEND_B__17_0_OFFSET UNITYSDK_OFFSET(0xF240350)
#define DJMLOBGBDOC__TRYHANDLECANCELDRAG_B__18_0_OFFSET UNITYSDK_OFFSET(0xF240360)
#define DJMLOBGBDOC__TRYHANDLEFINISHDRAG_B__19_0_OFFSET UNITYSDK_OFFSET(0xF240370)

inline static constexpr unsigned int DJMLOBGBDOC_TypeDefinitionIndex = 79508;

	class DJMLOBGBDOC : public ::JEOCDNBFEBF
	{
	public:
		::R3::ReadOnlyReactiveProperty_1<::CGNHALFCLJB*>* KIKKCLIPHEM; // 0x10
		::DJMLOBGBDOC_LHEAMHHMOFL* _Context_k__BackingField; // 0x18
		::EEHCJFEEOLF* GEBDEBBMMBH; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJMLOBGBDOC_CTOR_OFFSET))(this);
		}

		::DJMLOBGBDOC_LHEAMHHMOFL* get_Context()
		{
			return ((::DJMLOBGBDOC_LHEAMHHMOFL*(*)(::PVOID))((::PBYTE)hIl2Cpp + DJMLOBGBDOC_GET_CONTEXT_OFFSET))(this);
		}

		::System::Void set_Context(::DJMLOBGBDOC_LHEAMHHMOFL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DJMLOBGBDOC_LHEAMHHMOFL*))((::PBYTE)hIl2Cpp + DJMLOBGBDOC_SET_CONTEXT_OFFSET))(this, a1);
		}

		::R3::ReadOnlyReactiveProperty_1<::CGNHALFCLJB*>* PAOLCMEBEDG()
		{
			return ((::R3::ReadOnlyReactiveProperty_1<::CGNHALFCLJB*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DJMLOBGBDOC_PAOLCMEBEDG_OFFSET))(this);
		}

		::CGNHALFCLJB* FHJDNHCILJC()
		{
			return ((::CGNHALFCLJB*(*)(::PVOID))((::PBYTE)hIl2Cpp + DJMLOBGBDOC_FHJDNHCILJC_OFFSET))(this);
		}

		::System::Void IFNHGNBIMGK(::HFCHPMGNMOM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HFCHPMGNMOM*))((::PBYTE)hIl2Cpp + DJMLOBGBDOC_IFNHGNBIMGK_OFFSET))(this, a1);
		}

		::System::Void GJIKELKBJCC(::HFCHPMGNMOM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HFCHPMGNMOM*))((::PBYTE)hIl2Cpp + DJMLOBGBDOC_GJIKELKBJCC_OFFSET))(this, a1);
		}

		::System::Void EELEJNNNJAG(::HFCHPMGNMOM* a1, ::CGNHALFCLJB_ReasonType a2)
		{
			return ((::System::Void(*)(::PVOID, ::HFCHPMGNMOM*, ::CGNHALFCLJB_ReasonType))((::PBYTE)hIl2Cpp + DJMLOBGBDOC_EELEJNNNJAG_OFFSET))(this, a1, a2);
		}

		::System::Boolean PEAIHAKIKPA(::HFCHPMGNMOM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HFCHPMGNMOM*))((::PBYTE)hIl2Cpp + DJMLOBGBDOC_PEAIHAKIKPA_OFFSET))(this, a1);
		}

		::System::Boolean FLOFKOJBJBO(::HFCHPMGNMOM* a1, ::HFCHPMGNMOM* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::HFCHPMGNMOM*, ::HFCHPMGNMOM*))((::PBYTE)hIl2Cpp + DJMLOBGBDOC_FLOFKOJBJBO_OFFSET))(this, a1, a2);
		}

		::System::Void PHBGEDAGOLA(::HFCHPMGNMOM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HFCHPMGNMOM*))((::PBYTE)hIl2Cpp + DJMLOBGBDOC_PHBGEDAGOLA_OFFSET))(this, a1);
		}

		::System::Void CLAOMNHNIBC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJMLOBGBDOC_CLAOMNHNIBC_OFFSET))(this);
		}

		::System::Void MFHBOBKCKKP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJMLOBGBDOC_MFHBOBKCKKP_OFFSET))(this);
		}

		::System::Boolean NGELBBBOMLI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DJMLOBGBDOC_NGELBBBOMLI_OFFSET))(this);
		}

		::System::Void NKLDHMFDBBI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJMLOBGBDOC_NKLDHMFDBBI_OFFSET))(this);
		}

		::System::Void OEEBBPAJJFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJMLOBGBDOC_OEEBBPAJJFB_OFFSET))(this);
		}

		::System::Void IOKCMGANCOF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJMLOBGBDOC_IOKCMGANCOF_OFFSET))(this);
		}

		::System::Void OLPNCONNKNN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJMLOBGBDOC_OLPNCONNKNN_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise_1<::System::Boolean>* HAJFBKHHNEJ(::ILOOAAOHIIG* a1, ::System::Nullable_1<::UnityEngine::Vector2Int> a2)
		{
			return ((::RPG::Client::Promises::IPromise_1<::System::Boolean>*(*)(::PVOID, ::ILOOAAOHIIG*, ::System::Nullable_1<::UnityEngine::Vector2Int>))((::PBYTE)hIl2Cpp + DJMLOBGBDOC_HAJFBKHHNEJ_OFFSET))(this, a1, a2);
		}

		::System::Void DCGPFFDAIAE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJMLOBGBDOC_DCGPFFDAIAE_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise_1<::System::Boolean>* CIDMGHLONGD(::IAJGGEMFOMB* a1, ::UnityEngine::Vector2Int a2)
		{
			return ((::RPG::Client::Promises::IPromise_1<::System::Boolean>*(*)(::PVOID, ::IAJGGEMFOMB*, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + DJMLOBGBDOC_CIDMGHLONGD_OFFSET))(this, a1, a2);
		}

		::System::Void BHHOIIOGAJK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJMLOBGBDOC_BHHOIIOGAJK_OFFSET))(this);
		}

		::System::Void _SafeHandleDragEnd_b__17_0(::HFCHPMGNMOM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HFCHPMGNMOM*))((::PBYTE)hIl2Cpp + DJMLOBGBDOC__SAFEHANDLEDRAGEND_B__17_0_OFFSET))(this, a1);
		}

		::System::Void _TryHandleCancelDrag_b__18_0(::HFCHPMGNMOM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HFCHPMGNMOM*))((::PBYTE)hIl2Cpp + DJMLOBGBDOC__TRYHANDLECANCELDRAG_B__18_0_OFFSET))(this, a1);
		}

		::System::Void _TryHandleFinishDrag_b__19_0(::HFCHPMGNMOM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HFCHPMGNMOM*))((::PBYTE)hIl2Cpp + DJMLOBGBDOC__TRYHANDLEFINISHDRAG_B__19_0_OFFSET))(this, a1);
		}

	};
