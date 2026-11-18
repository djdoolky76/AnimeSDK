#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NBPDEIFHNBF_AIDNDDDOOKG.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class Action; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class RectTransform; }

#define NBPDEIFHNBF_BJHHAGABJJL_OFFSET UNITYSDK_OFFSET(0x18FAE130)
#define NBPDEIFHNBF_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x18FADE50)
#define NBPDEIFHNBF_EJAEPNEDENJ_OFFSET UNITYSDK_OFFSET(0x18FAE190)
#define NBPDEIFHNBF_HADFEEAEHKH_OFFSET UNITYSDK_OFFSET(0x18FADFF0)
#define NBPDEIFHNBF_HDLNACDEFIH_OFFSET UNITYSDK_OFFSET(0x18FADEF0)
#define NBPDEIFHNBF_HONMDMHAKNN_OFFSET UNITYSDK_OFFSET(0x18FAE1D0)
#define NBPDEIFHNBF_LCJEELHBNHG_OFFSET UNITYSDK_OFFSET(0x18FADDD0)
#define NBPDEIFHNBF_NFPABGMGNFN_OFFSET UNITYSDK_OFFSET(0x18FAE0D0)
#define NBPDEIFHNBF_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x18FAE210)
#define NBPDEIFHNBF_OKJCHFGIKBH_OFFSET UNITYSDK_OFFSET(0x18FAE260)
#define NBPDEIFHNBF__CTOR_OFFSET UNITYSDK_OFFSET(0x18FADDC0)

inline static constexpr unsigned int NBPDEIFHNBF_TypeDefinitionIndex = 73112;

class NBPDEIFHNBF : public ::System::Object
{
public:
	::System::Action* NOHAMNDLOCF; // 0x10
	::UnityEngine::RectTransform* GLLFPAFGMFO; // 0x18
	::System::Action* MGAKJHJAGJI; // 0x20
	::UnityEngine::AnimationCurve* FAJHPKBELMF; // 0x28
	::NBPDEIFHNBF_AIDNDDDOOKG JBCNPOHMGPE; // 0x30
	::System::Boolean HPINBCPMHJE; // 0x31
	::System::Boolean CKDKBJEAKLD; // 0x32
	::System::Boolean LBOMDICBENI; // 0x33
	::System::Single HLAEIHDFOLI; // 0x34
	::UnityEngine::Vector2 DIOALJECJCB; // 0x38
	::System::Single MEOINJJHICE; // 0x40
	::System::Single HACJFKBLODH; // 0x44
	::System::Single MDPPNMIPDMP; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBPDEIFHNBF__CTOR_OFFSET))(this);
	}

	::System::Void LCJEELHBNHG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBPDEIFHNBF_LCJEELHBNHG_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::UnityEngine::RectTransform* MGOFOAFCFIJ, ::System::Single HLAEIHDFOLI, ::System::Single BCKJIHJHJDE, ::UnityEngine::AnimationCurve* NCMHBELBOHM)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*, ::System::Single, ::System::Single, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + NBPDEIFHNBF_CNHBDOMKKDE_OFFSET))(this, MGOFOAFCFIJ, HLAEIHDFOLI, BCKJIHJHJDE, NCMHBELBOHM);
	}

	::System::Void HDLNACDEFIH(::System::Single FNIOPKPHDEH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NBPDEIFHNBF_HDLNACDEFIH_OFFSET))(this, FNIOPKPHDEH);
	}

	::System::Void NFPABGMGNFN(::System::Single FDBPBNPHBMK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NBPDEIFHNBF_NFPABGMGNFN_OFFSET))(this, FDBPBNPHBMK);
	}

	::System::Void BJHHAGABJJL(::System::Boolean FIEDPDAJPBB)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NBPDEIFHNBF_BJHHAGABJJL_OFFSET))(this, FIEDPDAJPBB);
	}

	::System::Void HADFEEAEHKH(::System::Single EJAOAGGJHHA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NBPDEIFHNBF_HADFEEAEHKH_OFFSET))(this, EJAOAGGJHHA);
	}

	::System::Boolean EJAEPNEDENJ()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NBPDEIFHNBF_EJAEPNEDENJ_OFFSET))(this);
	}

	::System::Boolean HONMDMHAKNN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NBPDEIFHNBF_HONMDMHAKNN_OFFSET))(this);
	}

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBPDEIFHNBF_NPOLNFDBOOD_OFFSET))(this);
	}

	::System::Void OKJCHFGIKBH(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NBPDEIFHNBF_OKJCHFGIKBH_OFFSET))(this, PMNLNNGEIFM);
	}
};
