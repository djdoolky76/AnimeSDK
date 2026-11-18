#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class IVideoPlayer; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine::Events { class UnityEvent; }
namespace UnityEngine::Video { class VideoClip; }

#define HGJEMIBOFNI_DNNJOOJBJNB_OFFSET UNITYSDK_OFFSET(0x16F35690)
#define HGJEMIBOFNI_DOCGMAIMGNJ_OFFSET UNITYSDK_OFFSET(0x16F35FD0)
#define HGJEMIBOFNI_ECEBDPJEKNN_OFFSET UNITYSDK_OFFSET(0x16F35720)
#define HGJEMIBOFNI_EMKBCPBNFMH_OFFSET UNITYSDK_OFFSET(0x16F35200)
#define HGJEMIBOFNI_GFNEJOJAMKF_OFFSET UNITYSDK_OFFSET(0x16F36900)
#define HGJEMIBOFNI_JGEKEKBAFAM_OFFSET UNITYSDK_OFFSET(0x16F36660)
#define HGJEMIBOFNI_JKADGKCDMHB_OFFSET UNITYSDK_OFFSET(0x16F35780)
#define HGJEMIBOFNI_KPBMIBNJCCM_OFFSET UNITYSDK_OFFSET(0x16F36470)
#define HGJEMIBOFNI_LCJEELHBNHG_1_OFFSET UNITYSDK_OFFSET(0x16F36030)
#define HGJEMIBOFNI_LCJEELHBNHG_2_OFFSET UNITYSDK_OFFSET(0x16F364D0)
#define HGJEMIBOFNI_LCJEELHBNHG_OFFSET UNITYSDK_OFFSET(0x16F357E0)
#define HGJEMIBOFNI_LJMIPGJJELP_OFFSET UNITYSDK_OFFSET(0x16F353F0)
#define HGJEMIBOFNI_PGHAJOMNDDJ_OFFSET UNITYSDK_OFFSET(0x16F359E0)
#define HGJEMIBOFNI__CCTOR_OFFSET UNITYSDK_OFFSET(0x16F351C0)
#define HGJEMIBOFNI__CTOR_OFFSET UNITYSDK_OFFSET(0x16F35020)

inline static constexpr unsigned int HGJEMIBOFNI_TypeDefinitionIndex = 73667;

class HGJEMIBOFNI : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_OMOFMJEKMFH()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(HGJEMIBOFNI_TypeDefinitionIndex)->GetStaticField(0xE2C0);
	}
	::UnityEngine::Events::UnityEvent* PDHAKPMLEED; // 0x10
	::UnityEngine::Material* OIJKKAAIBAJ; // 0x18
	::UnityEngine::Events::UnityEvent* HKPIJHPONCG; // 0x20
	::MoleMole::IVideoPlayer* CCDMEKCLPPJ; // 0x28
	::UnityEngine::Events::UnityEvent* CLNPAGKEKDL; // 0x30
	::Foundation::AssetRequestHandle OELFBNHPJDO; // 0x38

	::System::Void _ctor(::MoleMole::IVideoPlayer* JGPIGFLIDOJ, ::UnityEngine::Material* AEIHFBNNLBP)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::IVideoPlayer*, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + HGJEMIBOFNI__CTOR_OFFSET))(this, JGPIGFLIDOJ, AEIHFBNNLBP);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HGJEMIBOFNI__CCTOR_OFFSET))();
	}

	::System::Void EMKBCPBNFMH(::System::String* OLOMNNBBHPJ, ::System::Boolean HAFDIMGJBHC, ::System::Action* JNCGLPCKKFL)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + HGJEMIBOFNI_EMKBCPBNFMH_OFFSET))(this, OLOMNNBBHPJ, HAFDIMGJBHC, JNCGLPCKKFL);
	}

	::System::Void LJMIPGJJELP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGJEMIBOFNI_LJMIPGJJELP_OFFSET))(this);
	}

	::System::Void DNNJOOJBJNB(::System::Boolean DJNKACAKCEI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HGJEMIBOFNI_DNNJOOJBJNB_OFFSET))(this, DJNKACAKCEI);
	}

	::System::Void ECEBDPJEKNN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGJEMIBOFNI_ECEBDPJEKNN_OFFSET))(this);
	}

	::System::Void JKADGKCDMHB(::MoleMole::IVideoPlayer* KHGFAKJKDGG, ::System::String* HMMMOCJAEOA)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::IVideoPlayer*, ::System::String*))((::PBYTE)hIl2Cpp + HGJEMIBOFNI_JKADGKCDMHB_OFFSET))(this, KHGFAKJKDGG, HMMMOCJAEOA);
	}

	::System::Void LCJEELHBNHG(::UnityEngine::Video::VideoClip* PHGBOCIDLEI, ::System::Boolean HAFDIMGJBHC)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Video::VideoClip*, ::System::Boolean))((::PBYTE)hIl2Cpp + HGJEMIBOFNI_LCJEELHBNHG_OFFSET))(this, PHGBOCIDLEI, HAFDIMGJBHC);
	}

	::System::Boolean DOCGMAIMGNJ()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HGJEMIBOFNI_DOCGMAIMGNJ_OFFSET))(this);
	}

	::System::Boolean LCJEELHBNHG_1(::System::String* OLOMNNBBHPJ, ::System::Boolean HAFDIMGJBHC, ::System::Action* IHLBALNBGKM, ::System::Action_1<::MoleMole::IVideoPlayer*>* JNCGLPCKKFL)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Action*, ::System::Action_1<::MoleMole::IVideoPlayer*>*))((::PBYTE)hIl2Cpp + HGJEMIBOFNI_LCJEELHBNHG_1_OFFSET))(this, OLOMNNBBHPJ, HAFDIMGJBHC, IHLBALNBGKM, JNCGLPCKKFL);
	}

	::System::Void KPBMIBNJCCM(::MoleMole::IVideoPlayer* KHGFAKJKDGG)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::IVideoPlayer*))((::PBYTE)hIl2Cpp + HGJEMIBOFNI_KPBMIBNJCCM_OFFSET))(this, KHGFAKJKDGG);
	}

	::System::Boolean LCJEELHBNHG_2(::System::Single FOOBONOEPGD, ::System::Action* IHLBALNBGKM)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + HGJEMIBOFNI_LCJEELHBNHG_2_OFFSET))(this, FOOBONOEPGD, IHLBALNBGKM);
	}

	::System::Void PGHAJOMNDDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGJEMIBOFNI_PGHAJOMNDDJ_OFFSET))(this);
	}

	::System::Void JGEKEKBAFAM(::System::Single FOOBONOEPGD, ::System::Action* IHLBALNBGKM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + HGJEMIBOFNI_JGEKEKBAFAM_OFFSET))(this, FOOBONOEPGD, IHLBALNBGKM);
	}

	::System::Void GFNEJOJAMKF(::MoleMole::IVideoPlayer* KHGFAKJKDGG)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::IVideoPlayer*))((::PBYTE)hIl2Cpp + HGJEMIBOFNI_GFNEJOJAMKF_OFFSET))(this, KHGFAKJKDGG);
	}
};
