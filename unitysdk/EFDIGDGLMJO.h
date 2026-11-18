#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MJHDNMKGLBJ.h"

namespace MoleMole { class ScreenPlayer; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Renderer; }

#define EFDIGDGLMJO_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x14A873D0)
#define EFDIGDGLMJO_JAOGJPLODNM_OFFSET UNITYSDK_OFFSET(0x14A875E0)
#define EFDIGDGLMJO_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x14A874B0)
#define EFDIGDGLMJO_JGKPFCMBANH_OFFSET UNITYSDK_OFFSET(0x14A875D0)
#define EFDIGDGLMJO_LBPBABLHGBJ_OFFSET UNITYSDK_OFFSET(0x14A87530)
#define EFDIGDGLMJO_MBDAEGLKPHL_OFFSET UNITYSDK_OFFSET(0x14A875F0)
#define EFDIGDGLMJO_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0x14A87540)
#define EFDIGDGLMJO_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x14A871A0)
#define EFDIGDGLMJO__CCTOR_OFFSET UNITYSDK_OFFSET(0x14A87420)
#define EFDIGDGLMJO__CTOR_OFFSET UNITYSDK_OFFSET(0x14A874A0)

inline static constexpr unsigned int EFDIGDGLMJO_TypeDefinitionIndex = 43635;

class EFDIGDGLMJO : public ::MJHDNMKGLBJ
{
public:
	// static const ::System::Int32 IPAPPCOIEIF = 0xB0; // 0x0
	::UnityEngine::Renderer* _BBACGAJKNDG_k__BackingField; // 0x48
	::System::String* HPPOCGHOAIF; // 0x50
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::MoleMole::ScreenPlayer*>*>* ADPINCIJNFB; // 0x58
	::System::Boolean _OEFHDABHBIL_k__BackingField; // 0x60
	::System::Byte _padding0[0x3];
	::System::UInt32 HEACMEPEPIE; // 0x64

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EFDIGDGLMJO__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFDIGDGLMJO__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFDIGDGLMJO_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EFDIGDGLMJO_GETCLASSID_OFFSET))(this);
	}

	static ::EFDIGDGLMJO* JFDOOELFAOA()
	{
		return ((::EFDIGDGLMJO*(*)())((::PBYTE)hIl2Cpp + EFDIGDGLMJO_JFDOOELFAOA_OFFSET))();
	}

	::UnityEngine::Renderer* LBPBABLHGBJ()
	{
		return ((::UnityEngine::Renderer*(*)(::PVOID))((::PBYTE)hIl2Cpp + EFDIGDGLMJO_LBPBABLHGBJ_OFFSET))(this);
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EFDIGDGLMJO_MEFBHFEOKGH_OFFSET))(this);
	}

	::System::Void JGKPFCMBANH(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EFDIGDGLMJO_JGKPFCMBANH_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean JAOGJPLODNM()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EFDIGDGLMJO_JAOGJPLODNM_OFFSET))(this);
	}

	::System::Void MBDAEGLKPHL(::UnityEngine::Renderer* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + EFDIGDGLMJO_MBDAEGLKPHL_OFFSET))(this, EGEGIMGMJHN);
	}
};
