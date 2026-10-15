#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TransitType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace System { class Action; }
namespace UnityEngine { class AnimationCurve; }

#define CFDGKEDFBJP_ACDDMODKLBJ_OFFSET UNITYSDK_OFFSET(0x1EBFCC00)
#define CFDGKEDFBJP_AHIPGHDEOOG_OFFSET UNITYSDK_OFFSET(0x1EBFBFF0)
#define CFDGKEDFBJP_CKEMMFOENDH_OFFSET UNITYSDK_OFFSET(0x1EBFBDB0)
#define CFDGKEDFBJP_CTOR_OFFSET UNITYSDK_OFFSET(0x1EBFAF20)
#define CFDGKEDFBJP_EDKEGHBNLML_OFFSET UNITYSDK_OFFSET(0x1EBFCB80)
#define CFDGKEDFBJP_FGLKHGGPNAL_OFFSET UNITYSDK_OFFSET(0x1EBFBF90)
#define CFDGKEDFBJP_GCHFDGPOGPB_OFFSET UNITYSDK_OFFSET(0x1EBFCCA0)
#define CFDGKEDFBJP_GET_ISFINISH_OFFSET UNITYSDK_OFFSET(0x1EBFCC80)
#define CFDGKEDFBJP_GET_MAXDELTATIME_OFFSET UNITYSDK_OFFSET(0x1EBFCD50)
#define CFDGKEDFBJP_HDOFEPFEOEB_OFFSET UNITYSDK_OFFSET(0x1EBFC930)
#define CFDGKEDFBJP_HEKGCMFGPAC_OFFSET UNITYSDK_OFFSET(0x1EBFC1D0)
#define CFDGKEDFBJP_JBIOGKPHKKC_OFFSET UNITYSDK_OFFSET(0x1EBFCCB0)
#define CFDGKEDFBJP_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x1EBFC980)
#define CFDGKEDFBJP_KHGIKBFDLFB_1_OFFSET UNITYSDK_OFFSET(0x1EBFB500)
#define CFDGKEDFBJP_KHGIKBFDLFB_2_OFFSET UNITYSDK_OFFSET(0x1EBFB860)
#define CFDGKEDFBJP_KHGIKBFDLFB_3_OFFSET UNITYSDK_OFFSET(0x1EBFB020)
#define CFDGKEDFBJP_KHGIKBFDLFB_4_OFFSET UNITYSDK_OFFSET(0x1EBFB440)
#define CFDGKEDFBJP_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0x1EBFB0A0)
#define CFDGKEDFBJP_LNALOAKNFDM_OFFSET UNITYSDK_OFFSET(0x1EBFC240)
#define CFDGKEDFBJP_OGFMNFKLGNO_OFFSET UNITYSDK_OFFSET(0x1EBFC570)
#define CFDGKEDFBJP_SET_ISFINISH_OFFSET UNITYSDK_OFFSET(0x1EBFCC90)
#define CFDGKEDFBJP_SET_MAXDELTATIME_OFFSET UNITYSDK_OFFSET(0x1EBFCD60)

	class CFDGKEDFBJP : public ::System::Object
	{
	public:
		::System::Action* MGJLINFADJK; // 0x10
		::UnityEngine::Vector3 JCOOACJICAB; // 0x18
		::System::Single IEHPFADHJFD; // 0x24
		::System::Single PNJEGPAFNCI; // 0x28
		::System::Single _MaxDeltaTime_k__BackingField; // 0x2C
		::UnityEngine::Vector3 GHFHMNDKFNE; // 0x30
		::System::Single GAFENHHEBPG; // 0x3C
		::System::Boolean _IsFinish_k__BackingField; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFDGKEDFBJP_CTOR_OFFSET))(this);
		}

		::System::Void KHGIKBFDLFB(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::System::Single a4, ::System::Action* a5)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + CFDGKEDFBJP_KHGIKBFDLFB_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void KHGIKBFDLFB_1(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::System::Action* a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + CFDGKEDFBJP_KHGIKBFDLFB_1_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void KHGIKBFDLFB_2(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CFDGKEDFBJP_KHGIKBFDLFB_2_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void KHGIKBFDLFB_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFDGKEDFBJP_KHGIKBFDLFB_3_OFFSET))(this);
		}

		::System::Void KHGIKBFDLFB_4(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CFDGKEDFBJP_KHGIKBFDLFB_4_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Vector3 CKEMMFOENDH()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CFDGKEDFBJP_CKEMMFOENDH_OFFSET))(this);
		}

		::UnityEngine::Vector3 FGLKHGGPNAL()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CFDGKEDFBJP_FGLKHGGPNAL_OFFSET))(this);
		}

		::UnityEngine::Vector3 AHIPGHDEOOG()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CFDGKEDFBJP_AHIPGHDEOOG_OFFSET))(this);
		}

		::UnityEngine::Vector3 LNALOAKNFDM()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CFDGKEDFBJP_LNALOAKNFDM_OFFSET))(this);
		}

		::System::Single HEKGCMFGPAC()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CFDGKEDFBJP_HEKGCMFGPAC_OFFSET))(this);
		}

		::UnityEngine::Vector3 OGFMNFKLGNO(::UnityEngine::AnimationCurve* a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + CFDGKEDFBJP_OGFMNFKLGNO_OFFSET))(this, a1);
		}

		::System::Single HDOFEPFEOEB()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CFDGKEDFBJP_HDOFEPFEOEB_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CFDGKEDFBJP_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void EDKEGHBNLML(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CFDGKEDFBJP_EDKEGHBNLML_OFFSET))(this, a1);
		}

		::System::Void ACDDMODKLBJ(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CFDGKEDFBJP_ACDDMODKLBJ_OFFSET))(this, a1);
		}

		::System::Boolean get_IsFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CFDGKEDFBJP_GET_ISFINISH_OFFSET))(this);
		}

		::System::Void set_IsFinish(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CFDGKEDFBJP_SET_ISFINISH_OFFSET))(this, a1);
		}

		::System::Boolean GCHFDGPOGPB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CFDGKEDFBJP_GCHFDGPOGPB_OFFSET))(this);
		}

		::RPG::Client::TransitType JBIOGKPHKKC()
		{
			return ((::RPG::Client::TransitType(*)(::PVOID))((::PBYTE)hIl2Cpp + CFDGKEDFBJP_JBIOGKPHKKC_OFFSET))(this);
		}

		::System::Single get_MaxDeltaTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CFDGKEDFBJP_GET_MAXDELTATIME_OFFSET))(this);
		}

		::System::Void set_MaxDeltaTime(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CFDGKEDFBJP_SET_MAXDELTATIME_OFFSET))(this, a1);
		}

	};
