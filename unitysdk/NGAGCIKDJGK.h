#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/RPG/GameCore/ElationTimeAtmosphereType.h"
#include "unitysdk/IGKFNIEJGLM.h"
class ADPIJPHHJJF;
class FMPCODLIOLG;
class KOAOAKKCCPK;
class LNGGBHCLAIG;
namespace RPG::Client { class AnimatorButton; }
namespace Spine { class TrackEntry; }
namespace Spine::Unity { class SkeletonGraphic; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Animator; }

#define NGAGCIKDJGK_AANEHLIHFHE_OFFSET UNITYSDK_OFFSET(0x18E7FDB0)
#define NGAGCIKDJGK_ADDCOGABLFB_OFFSET UNITYSDK_OFFSET(0x18E7FF80)
#define NGAGCIKDJGK_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x18E80D80)
#define NGAGCIKDJGK_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x18E80EC0)
#define NGAGCIKDJGK_BACDEEMCGHO_OFFSET UNITYSDK_OFFSET(0x18E80B80)
#define NGAGCIKDJGK_CTOR_OFFSET UNITYSDK_OFFSET(0x18E80FE0)
#define NGAGCIKDJGK_DANHMEDKGBO_OFFSET UNITYSDK_OFFSET(0x18E802B0)
#define NGAGCIKDJGK_DJIIMMDPBGJ_OFFSET UNITYSDK_OFFSET(0x18E80A70)
#define NGAGCIKDJGK_ECOHEIAHIAO_OFFSET UNITYSDK_OFFSET(0x18E7FC80)
#define NGAGCIKDJGK_FNFEMGIBECE_OFFSET UNITYSDK_OFFSET(0x18E80190)
#define NGAGCIKDJGK_GET_ATMOSPHERETYPE_OFFSET UNITYSDK_OFFSET(0x18E80B20)
#define NGAGCIKDJGK_HBOMKCKIKLH_OFFSET UNITYSDK_OFFSET(0x18E804E0)
#define NGAGCIKDJGK_LPCNFDDCKEB_OFFSET UNITYSDK_OFFSET(0x18E80970)
#define NGAGCIKDJGK_MMFGPCHFDAO_OFFSET UNITYSDK_OFFSET(0x18E80C40)
#define NGAGCIKDJGK_NEOFNEBLKKL_OFFSET UNITYSDK_OFFSET(0x18E803A0)
#define NGAGCIKDJGK_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0x18E80080)
#define NGAGCIKDJGK_NMIEAEACIIH_OFFSET UNITYSDK_OFFSET(0x18E80AC0)
#define NGAGCIKDJGK_NNHBNMIDOMB_OFFSET UNITYSDK_OFFSET(0x18E80A20)
#define NGAGCIKDJGK_OAAOHHINHPH_OFFSET UNITYSDK_OFFSET(0x18E80B40)
#define NGAGCIKDJGK_OEIBJKKFOBF_OFFSET UNITYSDK_OFFSET(0x18E80560)
#define NGAGCIKDJGK_OIDLDEDBAAP_OFFSET UNITYSDK_OFFSET(0x18E807C0)
#define NGAGCIKDJGK_OOCKIJOCADF_OFFSET UNITYSDK_OFFSET(0x18E805C0)
#define NGAGCIKDJGK_SET_ATMOSPHERETYPE_OFFSET UNITYSDK_OFFSET(0x18E80B30)
#define NGAGCIKDJGK__ONBIND_OFFSET UNITYSDK_OFFSET(0x18E7F830)
#define NGAGCIKDJGK__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x18E80250)
#define NGAGCIKDJGK__ONINITPARAMS_OFFSET UNITYSDK_OFFSET(0x18E7FAE0)
#define NGAGCIKDJGK__SETUPVIEW_B__10_0_OFFSET UNITYSDK_OFFSET(0x18E81040)
#define NGAGCIKDJGK__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x18E7FD60)

inline static constexpr unsigned int NGAGCIKDJGK_TypeDefinitionIndex = 74252;

	class NGAGCIKDJGK : public ::FMPCODLIOLG
	{
	public:
		::Spine::Unity::SkeletonGraphic* DKJMKJKCNDK; // 0x60
		::KOAOAKKCCPK* CDMFHPLLFEC; // 0x68
		::RPG::Client::AnimatorButton* AAFGIHCCPOP; // 0x70
		::ADPIJPHHJJF* DNLAAFHMCHA; // 0x78
		::UnityEngine::Animator* APPGGMLEPLN; // 0x80
		::LNGGBHCLAIG* APPIHABBCGK; // 0x88
		::Spine::TrackEntry* OKBCDPHGIOF; // 0x90
		::UnityEngine::Animation* KJPKOIFDJAK; // 0x98
		::System::Int32 AHAALAOMMIK; // 0xA0
		::RPG::GameCore::ElationTimeAtmosphereType _AtmosphereType_k__BackingField; // 0xA4
		// static const ::System::String* DHHBMNFDPMK; // 0x0
		// static const ::System::String* NOJIDBNAPEM; // 0x0
		// static const ::System::String* HAENFHCDFHF; // 0x0
		// static const ::System::String* BLLCNKNPKKH; // 0x0
		// static const ::System::Object KPNBHAGPAGG; // 0x0
		// static const ::System::Object BKFHNMADDCA; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGAGCIKDJGK_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGAGCIKDJGK__ONBIND_OFFSET))(this);
		}

		::System::Void _OnInitParams(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + NGAGCIKDJGK__ONINITPARAMS_OFFSET))(this, a1);
		}

		::System::Void ECOHEIAHIAO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGAGCIKDJGK_ECOHEIAHIAO_OFFSET))(this);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGAGCIKDJGK__SETUPVIEW_OFFSET))(this);
		}

		::System::Void NKPPGDENJAE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGAGCIKDJGK_NKPPGDENJAE_OFFSET))(this);
		}

		::System::Void FNFEMGIBECE(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + NGAGCIKDJGK_FNFEMGIBECE_OFFSET))(this, a1);
		}

		::System::Void _OnDispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGAGCIKDJGK__ONDISPOSE_OFFSET))(this);
		}

		::System::Void NEOFNEBLKKL(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NGAGCIKDJGK_NEOFNEBLKKL_OFFSET))(this, a1);
		}

		::System::Void AANEHLIHFHE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGAGCIKDJGK_AANEHLIHFHE_OFFSET))(this);
		}

		::System::Void OOCKIJOCADF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGAGCIKDJGK_OOCKIJOCADF_OFFSET))(this);
		}

		::System::Void LPCNFDDCKEB(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NGAGCIKDJGK_LPCNFDDCKEB_OFFSET))(this, a1);
		}

		::System::Void OIDLDEDBAAP(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + NGAGCIKDJGK_OIDLDEDBAAP_OFFSET))(this, a1, a2);
		}

		::System::Void NNHBNMIDOMB(::Spine::TrackEntry* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::TrackEntry*))((::PBYTE)hIl2Cpp + NGAGCIKDJGK_NNHBNMIDOMB_OFFSET))(this, a1);
		}

		::System::Void DANHMEDKGBO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGAGCIKDJGK_DANHMEDKGBO_OFFSET))(this);
		}

		::System::Void DJIIMMDPBGJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGAGCIKDJGK_DJIIMMDPBGJ_OFFSET))(this);
		}

		::System::Void NMIEAEACIIH(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NGAGCIKDJGK_NMIEAEACIIH_OFFSET))(this, a1);
		}

		::System::Void ADDCOGABLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGAGCIKDJGK_ADDCOGABLFB_OFFSET))(this);
		}

		::RPG::GameCore::ElationTimeAtmosphereType get_AtmosphereType()
		{
			return ((::RPG::GameCore::ElationTimeAtmosphereType(*)(::PVOID))((::PBYTE)hIl2Cpp + NGAGCIKDJGK_GET_ATMOSPHERETYPE_OFFSET))(this);
		}

		::System::Void set_AtmosphereType(::RPG::GameCore::ElationTimeAtmosphereType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ElationTimeAtmosphereType))((::PBYTE)hIl2Cpp + NGAGCIKDJGK_SET_ATMOSPHERETYPE_OFFSET))(this, a1);
		}

		::FMPCODLIOLG* OAAOHHINHPH()
		{
			return ((::FMPCODLIOLG*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGAGCIKDJGK_OAAOHHINHPH_OFFSET))(this);
		}

		::System::Boolean HBOMKCKIKLH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NGAGCIKDJGK_HBOMKCKIKLH_OFFSET))(this);
		}

		::System::Void OEIBJKKFOBF(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NGAGCIKDJGK_OEIBJKKFOBF_OFFSET))(this, a1);
		}

		::System::Void BACDEEMCGHO(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NGAGCIKDJGK_BACDEEMCGHO_OFFSET))(this, a1);
		}

		::System::Void MMFGPCHFDAO(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NGAGCIKDJGK_MMFGPCHFDAO_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGAGCIKDJGK_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGAGCIKDJGK_AUTOREMOVECALLBACK_OFFSET))(this);
		}

		::System::Void _SetupView_b__10_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGAGCIKDJGK__SETUPVIEW_B__10_0_OFFSET))(this);
		}

	};
