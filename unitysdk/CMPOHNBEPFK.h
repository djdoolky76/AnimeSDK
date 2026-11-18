#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define CMPOHNBEPFK_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x1A1BDB10)
#define CMPOHNBEPFK_CHCGMACMJLD_OFFSET UNITYSDK_OFFSET(0x1A1BDE40)
#define CMPOHNBEPFK_CJBFCLMFDOM_OFFSET UNITYSDK_OFFSET(0x1A1BE0E0)
#define CMPOHNBEPFK_GIEBLNKOGON_OFFSET UNITYSDK_OFFSET(0x1A1BDF30)
#define CMPOHNBEPFK_HONMDMHAKNN_OFFSET UNITYSDK_OFFSET(0x1A1BDED0)
#define CMPOHNBEPFK_IIKDJHLGGIL_OFFSET UNITYSDK_OFFSET(0x1A1BDF20)
#define CMPOHNBEPFK_KFNFJGIAJBP_OFFSET UNITYSDK_OFFSET(0x1A1BDE20)
#define CMPOHNBEPFK_LJMIPGJJELP_OFFSET UNITYSDK_OFFSET(0x1A1BDDD0)
#define CMPOHNBEPFK_MBCFJPBPCCN_OFFSET UNITYSDK_OFFSET(0x1A1BDC00)
#define CMPOHNBEPFK_MCBKCFIDAMF_OFFSET UNITYSDK_OFFSET(0x1A1BDE30)
#define CMPOHNBEPFK_PLPONJAKNEB_OFFSET UNITYSDK_OFFSET(0x1A1BDBA0)
#define CMPOHNBEPFK__CTOR_OFFSET UNITYSDK_OFFSET(0x1A1BDF10)

inline static constexpr unsigned int CMPOHNBEPFK_TypeDefinitionIndex = 47733;

class CMPOHNBEPFK : public ::System::Object
{
public:
	::UnityEngine::RectTransform* IAPKABMDJNF; // 0x10
	::UnityEngine::AnimationCurve* ILAALPEONPJ; // 0x18
	::UnityEngine::AnimationCurve* CLNMBBNGPOF; // 0x20
	::System::Action_1<::CMPOHNBEPFK*>* CLEACHHBACL; // 0x28
	::System::Boolean LBOMDICBENI; // 0x30
	::System::Byte _padding0[0x3];
	::System::Single MNDJLHPMNNI; // 0x34
	::System::Single HACJFKBLODH; // 0x38
	::UnityEngine::Vector2 FCGEENALAKL; // 0x3C
	::System::UInt32 LONODJEPPGL; // 0x44
	::UnityEngine::Vector2 JMFFGJMMCAC; // 0x48
	::System::Single ONJIOPEAPNH; // 0x50
	::UnityEngine::Vector2 AIJCPPNKIHO; // 0x54

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMPOHNBEPFK__CTOR_OFFSET))(this);
	}

	::System::Void BBOMJDBNHIC(::UnityEngine::Transform* IAPKABMDJNF)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CMPOHNBEPFK_BBOMJDBNHIC_OFFSET))(this, IAPKABMDJNF);
	}

	::System::Void PLPONJAKNEB(::System::Single PBCAAADNEPK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CMPOHNBEPFK_PLPONJAKNEB_OFFSET))(this, PBCAAADNEPK);
	}

	::System::Void LJMIPGJJELP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMPOHNBEPFK_LJMIPGJJELP_OFFSET))(this);
	}

	::System::UInt32 KFNFJGIAJBP()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CMPOHNBEPFK_KFNFJGIAJBP_OFFSET))(this);
	}

	::System::Void MCBKCFIDAMF(::System::UInt32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CMPOHNBEPFK_MCBKCFIDAMF_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void CHCGMACMJLD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMPOHNBEPFK_CHCGMACMJLD_OFFSET))(this);
	}

	::System::Boolean HONMDMHAKNN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CMPOHNBEPFK_HONMDMHAKNN_OFFSET))(this);
	}

	::System::Void MBCFJPBPCCN(::System::Single PBCAAADNEPK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CMPOHNBEPFK_MBCFJPBPCCN_OFFSET))(this, PBCAAADNEPK);
	}

	::System::Void IIKDJHLGGIL(::UnityEngine::RectTransform* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + CMPOHNBEPFK_IIKDJHLGGIL_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void GIEBLNKOGON(::UnityEngine::Vector2 KLILFBFAELK, ::UnityEngine::Vector2 NDILOFACKHN, ::System::Single ONJIOPEAPNH, ::UnityEngine::Vector2 EOFIEFFEAHO, ::System::Single BCKJIHJHJDE, ::System::String* ODMGLPIEBDH, ::System::String* KPJMOOFDCCE, ::System::Action_1<::CMPOHNBEPFK*>* DIOMMCOEAMP)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Single, ::UnityEngine::Vector2, ::System::Single, ::System::String*, ::System::String*, ::System::Action_1<::CMPOHNBEPFK*>*))((::PBYTE)hIl2Cpp + CMPOHNBEPFK_GIEBLNKOGON_OFFSET))(this, KLILFBFAELK, NDILOFACKHN, ONJIOPEAPNH, EOFIEFFEAHO, BCKJIHJHJDE, ODMGLPIEBDH, KPJMOOFDCCE, DIOMMCOEAMP);
	}

	::UnityEngine::RectTransform* CJBFCLMFDOM()
	{
		return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CMPOHNBEPFK_CJBFCLMFDOM_OFFSET))(this);
	}
};
