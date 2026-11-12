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

#define NGAGCIKDJGK_AANEHLIHFHE_OFFSET UNITYSDK_OFFSET(0xC477A40)
#define NGAGCIKDJGK_ADDCOGABLFB_OFFSET UNITYSDK_OFFSET(0xC477C10)
#define NGAGCIKDJGK_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xC478A20)
#define NGAGCIKDJGK_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xC478B60)
#define NGAGCIKDJGK_BACDEEMCGHO_OFFSET UNITYSDK_OFFSET(0xC478820)
#define NGAGCIKDJGK_CTOR_OFFSET UNITYSDK_OFFSET(0xC478C80)
#define NGAGCIKDJGK_DANHMEDKGBO_OFFSET UNITYSDK_OFFSET(0xC477F40)
#define NGAGCIKDJGK_DJIIMMDPBGJ_OFFSET UNITYSDK_OFFSET(0xC478710)
#define NGAGCIKDJGK_ECOHEIAHIAO_OFFSET UNITYSDK_OFFSET(0xC477910)
#define NGAGCIKDJGK_FNFEMGIBECE_OFFSET UNITYSDK_OFFSET(0xC477E20)
#define NGAGCIKDJGK_GET_ATMOSPHERETYPE_OFFSET UNITYSDK_OFFSET(0xC4787C0)
#define NGAGCIKDJGK_HBOMKCKIKLH_OFFSET UNITYSDK_OFFSET(0xC478170)
#define NGAGCIKDJGK_LPCNFDDCKEB_OFFSET UNITYSDK_OFFSET(0xC478600)
#define NGAGCIKDJGK_MMFGPCHFDAO_OFFSET UNITYSDK_OFFSET(0xC4788E0)
#define NGAGCIKDJGK_NEOFNEBLKKL_OFFSET UNITYSDK_OFFSET(0xC478030)
#define NGAGCIKDJGK_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0xC477D10)
#define NGAGCIKDJGK_NMIEAEACIIH_OFFSET UNITYSDK_OFFSET(0xC478760)
#define NGAGCIKDJGK_NNHBNMIDOMB_OFFSET UNITYSDK_OFFSET(0xC4786C0)
#define NGAGCIKDJGK_OAAOHHINHPH_OFFSET UNITYSDK_OFFSET(0xC4787E0)
#define NGAGCIKDJGK_OEIBJKKFOBF_OFFSET UNITYSDK_OFFSET(0xC4781F0)
#define NGAGCIKDJGK_OIDLDEDBAAP_OFFSET UNITYSDK_OFFSET(0xC478450)
#define NGAGCIKDJGK_OOCKIJOCADF_OFFSET UNITYSDK_OFFSET(0xC478250)
#define NGAGCIKDJGK_SET_ATMOSPHERETYPE_OFFSET UNITYSDK_OFFSET(0xC4787D0)
#define NGAGCIKDJGK__ONBIND_OFFSET UNITYSDK_OFFSET(0xC4774D0)
#define NGAGCIKDJGK__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0xC477EE0)
#define NGAGCIKDJGK__ONINITPARAMS_OFFSET UNITYSDK_OFFSET(0xC477770)
#define NGAGCIKDJGK__SETUPVIEW_B__10_0_OFFSET UNITYSDK_OFFSET(0xC478CE0)
#define NGAGCIKDJGK__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0xC4779F0)

inline static constexpr unsigned int NGAGCIKDJGK_TypeDefinitionIndex = 74253;

	class NGAGCIKDJGK : public ::FMPCODLIOLG
	{
	public:
		::LNGGBHCLAIG* APPIHABBCGK; // 0x60
		::UnityEngine::Animator* APPGGMLEPLN; // 0x68
		::UnityEngine::Animation* KJPKOIFDJAK; // 0x70
		::RPG::Client::AnimatorButton* AAFGIHCCPOP; // 0x78
		::Spine::Unity::SkeletonGraphic* DKJMKJKCNDK; // 0x80
		::Spine::TrackEntry* OKBCDPHGIOF; // 0x88
		::ADPIJPHHJJF* DNLAAFHMCHA; // 0x90
		::KOAOAKKCCPK* CDMFHPLLFEC; // 0x98
		::RPG::GameCore::ElationTimeAtmosphereType _AtmosphereType_k__BackingField; // 0xA0
		::System::Int32 AHAALAOMMIK; // 0xA4
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
