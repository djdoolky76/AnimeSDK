#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TransitType.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace UnityEngine { class AnimationCurve; }

#define NEOCEOCDEAF_ACDDMODKLBJ_OFFSET UNITYSDK_OFFSET(0x1EC3A700)
#define NEOCEOCDEAF_AHIPGHDEOOG_OFFSET UNITYSDK_OFFSET(0x1EC3A0B0)
#define NEOCEOCDEAF_CKEMMFOENDH_OFFSET UNITYSDK_OFFSET(0x1EC3A010)
#define NEOCEOCDEAF_CTOR_OFFSET UNITYSDK_OFFSET(0x1EC39A50)
#define NEOCEOCDEAF_EDKEGHBNLML_OFFSET UNITYSDK_OFFSET(0x1EC3A680)
#define NEOCEOCDEAF_FGLKHGGPNAL_OFFSET UNITYSDK_OFFSET(0x1EC3A060)
#define NEOCEOCDEAF_GCHFDGPOGPB_OFFSET UNITYSDK_OFFSET(0x1EC3A7A0)
#define NEOCEOCDEAF_GET_ISFINISH_OFFSET UNITYSDK_OFFSET(0x1EC3A780)
#define NEOCEOCDEAF_HDOFEPFEOEB_OFFSET UNITYSDK_OFFSET(0x1EC3A440)
#define NEOCEOCDEAF_HEKGCMFGPAC_OFFSET UNITYSDK_OFFSET(0x1EC3A240)
#define NEOCEOCDEAF_HEMNAEHBNIJ_OFFSET UNITYSDK_OFFSET(0x1EC3A530)
#define NEOCEOCDEAF_IDGKGCDJFAD_OFFSET UNITYSDK_OFFSET(0x1EC3A610)
#define NEOCEOCDEAF_JBIOGKPHKKC_OFFSET UNITYSDK_OFFSET(0x1EC3A7B0)
#define NEOCEOCDEAF_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x1EC3A490)
#define NEOCEOCDEAF_KHGIKBFDLFB_1_OFFSET UNITYSDK_OFFSET(0x1EC39D60)
#define NEOCEOCDEAF_KHGIKBFDLFB_2_OFFSET UNITYSDK_OFFSET(0x1EC39E80)
#define NEOCEOCDEAF_KHGIKBFDLFB_3_OFFSET UNITYSDK_OFFSET(0x1EC39AB0)
#define NEOCEOCDEAF_KHGIKBFDLFB_4_OFFSET UNITYSDK_OFFSET(0x1EC39C60)
#define NEOCEOCDEAF_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0x1EC39B10)
#define NEOCEOCDEAF_LNALOAKNFDM_OFFSET UNITYSDK_OFFSET(0x1EC3A2B0)
#define NEOCEOCDEAF_PLFDCONMOKD_OFFSET UNITYSDK_OFFSET(0x1EC39FC0)
#define NEOCEOCDEAF_SET_ISFINISH_OFFSET UNITYSDK_OFFSET(0x1EC3A790)

inline static constexpr unsigned int NEOCEOCDEAF_TypeDefinitionIndex = 35329;

	class NEOCEOCDEAF : public ::System::Object
	{
	public:
		::System::Action* MGJLINFADJK; // 0x10
		::UnityEngine::AnimationCurve* NLIFDJHPHLP; // 0x18
		::System::Single GHFHMNDKFNE; // 0x20
		::System::Single IBICCIBFIAG; // 0x24
		::System::Single GAFENHHEBPG; // 0x28
		::System::Single JCOOACJICAB; // 0x2C
		::System::Single IEHPFADHJFD; // 0x30
		::System::Boolean _IsFinish_k__BackingField; // 0x34
		::System::Byte _padding0[0x3];
		::System::Single PNJEGPAFNCI; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEOCEOCDEAF_CTOR_OFFSET))(this);
		}

		::System::Void KHGIKBFDLFB(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Action* a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + NEOCEOCDEAF_KHGIKBFDLFB_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void KHGIKBFDLFB_1(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Action* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + NEOCEOCDEAF_KHGIKBFDLFB_1_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void KHGIKBFDLFB_2(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + NEOCEOCDEAF_KHGIKBFDLFB_2_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void KHGIKBFDLFB_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEOCEOCDEAF_KHGIKBFDLFB_3_OFFSET))(this);
		}

		::System::Void KHGIKBFDLFB_4(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + NEOCEOCDEAF_KHGIKBFDLFB_4_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void PLFDCONMOKD(::UnityEngine::AnimationCurve* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + NEOCEOCDEAF_PLFDCONMOKD_OFFSET))(this, a1);
		}

		::System::Single CKEMMFOENDH()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NEOCEOCDEAF_CKEMMFOENDH_OFFSET))(this);
		}

		::System::Single FGLKHGGPNAL()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NEOCEOCDEAF_FGLKHGGPNAL_OFFSET))(this);
		}

		::System::Single AHIPGHDEOOG()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NEOCEOCDEAF_AHIPGHDEOOG_OFFSET))(this);
		}

		::System::Single LNALOAKNFDM()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NEOCEOCDEAF_LNALOAKNFDM_OFFSET))(this);
		}

		::System::Single HEKGCMFGPAC()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NEOCEOCDEAF_HEKGCMFGPAC_OFFSET))(this);
		}

		::System::Single HDOFEPFEOEB()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NEOCEOCDEAF_HDOFEPFEOEB_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NEOCEOCDEAF_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void HEMNAEHBNIJ(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NEOCEOCDEAF_HEMNAEHBNIJ_OFFSET))(this, a1);
		}

		::System::Void IDGKGCDJFAD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEOCEOCDEAF_IDGKGCDJFAD_OFFSET))(this);
		}

		::System::Void EDKEGHBNLML(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NEOCEOCDEAF_EDKEGHBNLML_OFFSET))(this, a1);
		}

		::System::Void ACDDMODKLBJ(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NEOCEOCDEAF_ACDDMODKLBJ_OFFSET))(this, a1);
		}

		::System::Boolean get_IsFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEOCEOCDEAF_GET_ISFINISH_OFFSET))(this);
		}

		::System::Void set_IsFinish(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NEOCEOCDEAF_SET_ISFINISH_OFFSET))(this, a1);
		}

		::System::Boolean GCHFDGPOGPB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEOCEOCDEAF_GCHFDGPOGPB_OFFSET))(this);
		}

		::RPG::Client::TransitType JBIOGKPHKKC()
		{
			return ((::RPG::Client::TransitType(*)(::PVOID))((::PBYTE)hIl2Cpp + NEOCEOCDEAF_JBIOGKPHKKC_OFFSET))(this);
		}

	};
