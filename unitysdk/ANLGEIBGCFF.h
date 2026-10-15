#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ANLGEIBGCFF_ECoverImgState.h"
#include "unitysdk/System/Object.h"
class LGPGJCMAMMM;
namespace System { class Random; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define ANLGEIBGCFF_BKKNMALBAOO_OFFSET UNITYSDK_OFFSET(0x1588E0A0)
#define ANLGEIBGCFF_CBOKAIGJIBL_OFFSET UNITYSDK_OFFSET(0x1588E3F0)
#define ANLGEIBGCFF_CTOR_OFFSET UNITYSDK_OFFSET(0x1588D620)
#define ANLGEIBGCFF_ELCNIIMKPHO_OFFSET UNITYSDK_OFFSET(0x1588E0F0)
#define ANLGEIBGCFF_FEAOGEMGHAP_OFFSET UNITYSDK_OFFSET(0x1588D6B0)
#define ANLGEIBGCFF_GET_DEBUGHOLDSECONDS_OFFSET UNITYSDK_OFFSET(0x1588E5B0)
#define ANLGEIBGCFF_GET_DEBUGPHASEREMAINSECONDS_OFFSET UNITYSDK_OFFSET(0x1588E590)
#define ANLGEIBGCFF_HKLKIPIKNCK_OFFSET UNITYSDK_OFFSET(0x1588D870)
#define ANLGEIBGCFF_HPDOEILDLKC_OFFSET UNITYSDK_OFFSET(0x1588DF60)
#define ANLGEIBGCFF_IBCGIINEDLO_OFFSET UNITYSDK_OFFSET(0x1588E020)
#define ANLGEIBGCFF_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x1588DDE0)
#define ANLGEIBGCFF_KBLCFMOKHIG_OFFSET UNITYSDK_OFFSET(0x1588DA70)
#define ANLGEIBGCFF_KKNOMHMKECA_OFFSET UNITYSDK_OFFSET(0x1588E480)
#define ANLGEIBGCFF_MOLJFIPDMBL_OFFSET UNITYSDK_OFFSET(0x1588DC30)
#define ANLGEIBGCFF_NHPJKCAOCJO_OFFSET UNITYSDK_OFFSET(0x1588DB40)
#define ANLGEIBGCFF_OLPFPJJHDKD_OFFSET UNITYSDK_OFFSET(0x1588E210)
#define ANLGEIBGCFF_PBIBIGBIKIL_OFFSET UNITYSDK_OFFSET(0x1588DEF0)
#define ANLGEIBGCFF_SET_DEBUGHOLDSECONDS_OFFSET UNITYSDK_OFFSET(0x1588E5C0)
#define ANLGEIBGCFF_SET_DEBUGPHASEREMAINSECONDS_OFFSET UNITYSDK_OFFSET(0x1588E5A0)

inline static constexpr unsigned int ANLGEIBGCFF_TypeDefinitionIndex = 81872;

	class ANLGEIBGCFF : public ::System::Object
	{
	public:
		::System::Random* OLEEIPHBJKB; // 0x10
		::System::String* FKIDFLIMFGM; // 0x18
		::LGPGJCMAMMM* NHJIMBADBEN; // 0x20
		::UnityEngine::Transform* ONEECBFKDFP; // 0x28
		::UnityEngine::RectTransform* ANKEBBNJMGK; // 0x30
		::UnityEngine::Animation* CJDNFGANEKG; // 0x38
		::System::Single _DebugHoldSeconds_k__BackingField; // 0x40
		::System::Single _DebugPhaseRemainSeconds_k__BackingField; // 0x44
		::ANLGEIBGCFF_ECoverImgState DLNIGFGLPLJ; // 0x48
		::System::Boolean NIDMGGBEGNH; // 0x4C
		// static const ::System::String* IAIIGBOEBEL; // 0x0
		// static const ::System::String* NJMCMEFNGKB; // 0x0
		// static const ::System::Object NPHGJBKKANA; // 0x0
		// static const ::System::Object ADBGENNIIDF; // 0x0
		// static const ::System::Object NJNACJNMHAA; // 0x0
		// static const ::System::Object LJBFBGNLBID; // 0x0
		// static const ::System::Object EGBEJCFEKAP; // 0x0
		// static const ::System::Object PNBJLHBEADP; // 0x0
		::System::Void _ctor(::UnityEngine::Transform* a1, ::UnityEngine::RectTransform* a2, ::UnityEngine::Animation* a3, ::LGPGJCMAMMM* a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::RectTransform*, ::UnityEngine::Animation*, ::LGPGJCMAMMM*))((::PBYTE)hIl2Cpp + ANLGEIBGCFF_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void FEAOGEMGHAP(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ANLGEIBGCFF_FEAOGEMGHAP_OFFSET))(this, a1);
		}

		::System::Void MOLJFIPDMBL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANLGEIBGCFF_MOLJFIPDMBL_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ANLGEIBGCFF_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void IBCGIINEDLO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANLGEIBGCFF_IBCGIINEDLO_OFFSET))(this);
		}

		::System::Void BKKNMALBAOO(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ANLGEIBGCFF_BKKNMALBAOO_OFFSET))(this, a1);
		}

		::System::Void HKLKIPIKNCK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANLGEIBGCFF_HKLKIPIKNCK_OFFSET))(this);
		}

		::System::Single ELCNIIMKPHO(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + ANLGEIBGCFF_ELCNIIMKPHO_OFFSET))(this, a1, a2);
		}

		::System::Void KBLCFMOKHIG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANLGEIBGCFF_KBLCFMOKHIG_OFFSET))(this);
		}

		::System::Void PBIBIGBIKIL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANLGEIBGCFF_PBIBIGBIKIL_OFFSET))(this);
		}

		::System::Void HPDOEILDLKC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANLGEIBGCFF_HPDOEILDLKC_OFFSET))(this);
		}

		::System::Void CBOKAIGJIBL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANLGEIBGCFF_CBOKAIGJIBL_OFFSET))(this);
		}

		::System::Boolean OLPFPJJHDKD(::System::String* a1, ::ANLGEIBGCFF_ECoverImgState a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::ANLGEIBGCFF_ECoverImgState))((::PBYTE)hIl2Cpp + ANLGEIBGCFF_OLPFPJJHDKD_OFFSET))(this, a1, a2);
		}

		::System::Void NHPJKCAOCJO(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ANLGEIBGCFF_NHPJKCAOCJO_OFFSET))(this, a1);
		}

		::System::String* KKNOMHMKECA()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANLGEIBGCFF_KKNOMHMKECA_OFFSET))(this);
		}

		::System::Single get_DebugPhaseRemainSeconds()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ANLGEIBGCFF_GET_DEBUGPHASEREMAINSECONDS_OFFSET))(this);
		}

		::System::Void set_DebugPhaseRemainSeconds(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ANLGEIBGCFF_SET_DEBUGPHASEREMAINSECONDS_OFFSET))(this, a1);
		}

		::System::Single get_DebugHoldSeconds()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ANLGEIBGCFF_GET_DEBUGHOLDSECONDS_OFFSET))(this);
		}

		::System::Void set_DebugHoldSeconds(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ANLGEIBGCFF_SET_DEBUGHOLDSECONDS_OFFSET))(this, a1);
		}

	};
