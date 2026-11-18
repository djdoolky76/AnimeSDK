#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MJHDNMKGLBJ.h"
#include "unitysdk/OECBDEANICM_LKOOALEBCEJ.h"

namespace MoleMole { class MonoEffectPluginFade; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }

#define OECBDEANICM_AAAFDDNBLOL_OFFSET UNITYSDK_OFFSET(0x129244B0)
#define OECBDEANICM_AFBPNDFGDPO_OFFSET UNITYSDK_OFFSET(0x129247F0)
#define OECBDEANICM_DPIHOJBBGLA_OFFSET UNITYSDK_OFFSET(0x12924E50)
#define OECBDEANICM_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x12924B20)
#define OECBDEANICM_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x12924D30)
#define OECBDEANICM_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0x12924CA0)
#define OECBDEANICM_NIOGMJFDLBP_OFFSET UNITYSDK_OFFSET(0x12924970)
#define OECBDEANICM_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x12923FB0)
#define OECBDEANICM_PCNFIFPDFON_OFFSET UNITYSDK_OFFSET(0x12924650)
#define OECBDEANICM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x12924060)
#define OECBDEANICM__CCTOR_OFFSET UNITYSDK_OFFSET(0x12924B70)
#define OECBDEANICM__CTOR_OFFSET UNITYSDK_OFFSET(0x12924BF0)

inline static constexpr unsigned int OECBDEANICM_TypeDefinitionIndex = 71234;

class OECBDEANICM : public ::MJHDNMKGLBJ
{
public:
	// static const ::System::Int32 IPAPPCOIEIF = 0x6D; // 0x0
	::System::Collections::Generic::List_1<::System::Object*>* JBFFFPMHPJO; // 0x48
	::MoleMole::MonoEffectPluginFade* GBGMIPNOMNP; // 0x50
	::UnityEngine::AnimationCurve* CBDANHPAAKA; // 0x58
	::System::Boolean EFAFMINMMEN; // 0x60
	::System::Boolean KLGKGLPKPGP; // 0x61
	::System::Boolean JIPJAGOKBLO; // 0x62
	::System::Byte _padding0[0x1];
	::System::Single PHILNBEPLBD; // 0x64
	::OECBDEANICM_LKOOALEBCEJ BAOLMLOHBIH; // 0x68
	::System::Boolean DICLDBNPPOD; // 0x6C
	::System::Boolean FDIJLFEHNGD; // 0x6D
	::System::Byte _padding1[0x2];
	::System::Single DKMOMBMMFPI; // 0x70
	::System::Single EPLFEHLIMGN; // 0x74
	::System::Single NBCCAKKDIFI; // 0x78
	::System::Single LOEECBAKNDM; // 0x7C
	::System::Single NBELILLDCCC; // 0x80

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OECBDEANICM__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OECBDEANICM__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OECBDEANICM_ONCLEAN_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OECBDEANICM_TOSTRING_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OECBDEANICM_GETCLASSID_OFFSET))(this);
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OECBDEANICM_MEFBHFEOKGH_OFFSET))(this);
	}

	::UnityEngine::AnimationCurve* AFBPNDFGDPO()
	{
		return ((::UnityEngine::AnimationCurve*(*)(::PVOID))((::PBYTE)hIl2Cpp + OECBDEANICM_AFBPNDFGDPO_OFFSET))(this);
	}

	::System::Single PCNFIFPDFON()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + OECBDEANICM_PCNFIFPDFON_OFFSET))(this);
	}

	static ::OECBDEANICM* JFDOOELFAOA()
	{
		return ((::OECBDEANICM*(*)())((::PBYTE)hIl2Cpp + OECBDEANICM_JFDOOELFAOA_OFFSET))();
	}

	::System::Single NIOGMJFDLBP()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + OECBDEANICM_NIOGMJFDLBP_OFFSET))(this);
	}

	::System::String* DPIHOJBBGLA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OECBDEANICM_DPIHOJBBGLA_OFFSET))(this);
	}

	::System::Single AAAFDDNBLOL()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + OECBDEANICM_AAAFDDNBLOL_OFFSET))(this);
	}
};
