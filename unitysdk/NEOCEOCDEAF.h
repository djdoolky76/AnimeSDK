#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TransitType.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace UnityEngine { class AnimationCurve; }

#define NEOCEOCDEAF_ACDDMODKLBJ_OFFSET UNITYSDK_OFFSET(0x1FEEB1C0)
#define NEOCEOCDEAF_AHIPGHDEOOG_OFFSET UNITYSDK_OFFSET(0x1FEEAB70)
#define NEOCEOCDEAF_CKEMMFOENDH_OFFSET UNITYSDK_OFFSET(0x1FEEAAD0)
#define NEOCEOCDEAF_CTOR_OFFSET UNITYSDK_OFFSET(0x1FEEA4E0)
#define NEOCEOCDEAF_EDKEGHBNLML_OFFSET UNITYSDK_OFFSET(0x1FEEB140)
#define NEOCEOCDEAF_FGLKHGGPNAL_OFFSET UNITYSDK_OFFSET(0x1FEEAB20)
#define NEOCEOCDEAF_GCHFDGPOGPB_OFFSET UNITYSDK_OFFSET(0x1FEEB260)
#define NEOCEOCDEAF_GET_ISFINISH_OFFSET UNITYSDK_OFFSET(0x1FEEB240)
#define NEOCEOCDEAF_HDOFEPFEOEB_OFFSET UNITYSDK_OFFSET(0x1FEEAF00)
#define NEOCEOCDEAF_HEKGCMFGPAC_OFFSET UNITYSDK_OFFSET(0x1FEEAD00)
#define NEOCEOCDEAF_HEMNAEHBNIJ_OFFSET UNITYSDK_OFFSET(0x1FEEAFF0)
#define NEOCEOCDEAF_IDGKGCDJFAD_OFFSET UNITYSDK_OFFSET(0x1FEEB0D0)
#define NEOCEOCDEAF_JBIOGKPHKKC_OFFSET UNITYSDK_OFFSET(0x1FEEB270)
#define NEOCEOCDEAF_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x1FEEAF50)
#define NEOCEOCDEAF_KHGIKBFDLFB_1_OFFSET UNITYSDK_OFFSET(0x1FEEA810)
#define NEOCEOCDEAF_KHGIKBFDLFB_2_OFFSET UNITYSDK_OFFSET(0x1FEEA940)
#define NEOCEOCDEAF_KHGIKBFDLFB_3_OFFSET UNITYSDK_OFFSET(0x1FEEA550)
#define NEOCEOCDEAF_KHGIKBFDLFB_4_OFFSET UNITYSDK_OFFSET(0x1FEEA710)
#define NEOCEOCDEAF_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0x1FEEA5C0)
#define NEOCEOCDEAF_LNALOAKNFDM_OFFSET UNITYSDK_OFFSET(0x1FEEAD70)
#define NEOCEOCDEAF_PLFDCONMOKD_OFFSET UNITYSDK_OFFSET(0x1FEEAA80)
#define NEOCEOCDEAF_SET_ISFINISH_OFFSET UNITYSDK_OFFSET(0x1FEEB250)

inline static constexpr unsigned int NEOCEOCDEAF_TypeDefinitionIndex = 36257;

	class NEOCEOCDEAF : public ::System::Object
	{
	public:
		::System::Action* MGJLINFADJK; // 0x10
		::UnityEngine::AnimationCurve* NLIFDJHPHLP; // 0x18
		::System::Single IBICCIBFIAG; // 0x20
		::System::Single JCOOACJICAB; // 0x24
		::System::Single GAFENHHEBPG; // 0x28
		::System::Boolean _IsFinish_k__BackingField; // 0x2C
		::System::Byte _padding0[0x3];
		::System::Single GHFHMNDKFNE; // 0x30
		::System::Single PNJEGPAFNCI; // 0x34
		::System::Single IEHPFADHJFD; // 0x38
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
