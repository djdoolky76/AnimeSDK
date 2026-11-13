#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/RPG/Client/TextID.h"
namespace RPG::Client { class AnimatorButton; }
namespace RPG::GameCore { class AddChallengeBossInfoPanelState; }
namespace RPG::GameCore { class RemoveChallengeBossInfoPanelState; }
namespace RPG::GameCore { class SwitchChallengeBossInfoPanelState; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Text; }

#define IFIMBOKCJIO_APKDAEEFOJD_OFFSET UNITYSDK_OFFSET(0x1BC16040)
#define IFIMBOKCJIO_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x1BC16750)
#define IFIMBOKCJIO_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x1BC16910)
#define IFIMBOKCJIO_BFAJDFBKGAO_OFFSET UNITYSDK_OFFSET(0x1BC16640)
#define IFIMBOKCJIO_CTOR_OFFSET UNITYSDK_OFFSET(0x1BC16AB0)
#define IFIMBOKCJIO_ECOHEIAHIAO_OFFSET UNITYSDK_OFFSET(0x1BC15370)
#define IFIMBOKCJIO_ELCOBPGHAEA_OFFSET UNITYSDK_OFFSET(0x1BC15E80)
#define IFIMBOKCJIO_ENMMPIDIAJF_OFFSET UNITYSDK_OFFSET(0x1BC16260)
#define IFIMBOKCJIO_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x1BC14EF0)
#define IFIMBOKCJIO_GET_TRANS_OFFSET UNITYSDK_OFFSET(0x1BC14F10)
#define IFIMBOKCJIO_GNIINGAJKLF_OFFSET UNITYSDK_OFFSET(0x1BC16400)
#define IFIMBOKCJIO_KFECEIGODPD_OFFSET UNITYSDK_OFFSET(0x1BC162E0)
#define IFIMBOKCJIO_KGLAIIKJCPB_OFFSET UNITYSDK_OFFSET(0x1BC16360)
#define IFIMBOKCJIO_MBIGODCMBAM_OFFSET UNITYSDK_OFFSET(0x1BC16580)
#define IFIMBOKCJIO_MLHPJCLADPK_OFFSET UNITYSDK_OFFSET(0x1BC164C0)
#define IFIMBOKCJIO_NEOFNEBLKKL_OFFSET UNITYSDK_OFFSET(0x1BC15530)
#define IFIMBOKCJIO_PACBDGILPHI_OFFSET UNITYSDK_OFFSET(0x1BC15BD0)
#define IFIMBOKCJIO_SET_INDEX_OFFSET UNITYSDK_OFFSET(0x1BC14F00)
#define IFIMBOKCJIO__ONBIND_OFFSET UNITYSDK_OFFSET(0x1BC14F50)
#define IFIMBOKCJIO__ONTICK_OFFSET UNITYSDK_OFFSET(0x1BC15A80)
#define IFIMBOKCJIO__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x1BC159C0)

inline static constexpr unsigned int IFIMBOKCJIO_TypeDefinitionIndex = 74141;

	class IFIMBOKCJIO : public ::FMPCODLIOLG
	{
	public:
		::System::Collections::Generic::Dictionary_2<::RPG::Client::TextID, ::System::Int32>* CPKPPAAJEOJ; // 0x60
		::UnityEngine::Transform* COGOPBJHLME; // 0x68
		::UnityEngine::CanvasGroup* KNPDPINAFBG; // 0x70
		::UnityEngine::Animation* PMOJILOJEPE; // 0x78
		::UnityEngine::CanvasGroup* GFJADDHHOII; // 0x80
		::UnityEngine::UI::Text* LKICJKJDPAI; // 0x88
		::RPG::Client::AnimatorButton* NBBGLIHKLDH; // 0x90
		::RPG::Client::AnimatorButton* HDPAGPIHAJG; // 0x98
		::UnityEngine::Transform* PEMIMCDDCNP; // 0xA0
		::System::Int32 JJBOPOPCOCH; // 0xA8
		::System::Int32 _Index_k__BackingField; // 0xAC
		::RPG::Client::TextID CHMGOIODCMK; // 0xB0
		// static const ::System::String* DJCBDJMACFH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIMBOKCJIO_CTOR_OFFSET))(this);
		}

		::System::Int32 get_Index()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIMBOKCJIO_GET_INDEX_OFFSET))(this);
		}

		::System::Void set_Index(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IFIMBOKCJIO_SET_INDEX_OFFSET))(this, a1);
		}

		::UnityEngine::Transform* get_Trans()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIMBOKCJIO_GET_TRANS_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIMBOKCJIO__ONBIND_OFFSET))(this);
		}

		::System::Void ECOHEIAHIAO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIMBOKCJIO_ECOHEIAHIAO_OFFSET))(this);
		}

		::System::Void NEOFNEBLKKL(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IFIMBOKCJIO_NEOFNEBLKKL_OFFSET))(this, a1);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIMBOKCJIO__SETUPVIEW_OFFSET))(this);
		}

		::System::Void _OnTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IFIMBOKCJIO__ONTICK_OFFSET))(this, a1);
		}

		::System::Void PACBDGILPHI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIMBOKCJIO_PACBDGILPHI_OFFSET))(this);
		}

		::System::Void APKDAEEFOJD(::RPG::GameCore::SwitchChallengeBossInfoPanelState* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SwitchChallengeBossInfoPanelState*))((::PBYTE)hIl2Cpp + IFIMBOKCJIO_APKDAEEFOJD_OFFSET))(this, a1);
		}

		::System::Void ENMMPIDIAJF(::RPG::GameCore::AddChallengeBossInfoPanelState* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AddChallengeBossInfoPanelState*))((::PBYTE)hIl2Cpp + IFIMBOKCJIO_ENMMPIDIAJF_OFFSET))(this, a1);
		}

		::System::Void KFECEIGODPD(::RPG::GameCore::RemoveChallengeBossInfoPanelState* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RemoveChallengeBossInfoPanelState*))((::PBYTE)hIl2Cpp + IFIMBOKCJIO_KFECEIGODPD_OFFSET))(this, a1);
		}

		::System::Void KGLAIIKJCPB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIMBOKCJIO_KGLAIIKJCPB_OFFSET))(this);
		}

		::RPG::Client::TextID ELCOBPGHAEA()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIMBOKCJIO_ELCOBPGHAEA_OFFSET))(this);
		}

		::System::Void GNIINGAJKLF(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IFIMBOKCJIO_GNIINGAJKLF_OFFSET))(this, a1);
		}

		::System::Void MLHPJCLADPK(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IFIMBOKCJIO_MLHPJCLADPK_OFFSET))(this, a1);
		}

		::System::Void MBIGODCMBAM(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IFIMBOKCJIO_MBIGODCMBAM_OFFSET))(this, a1);
		}

		::System::Void BFAJDFBKGAO(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IFIMBOKCJIO_BFAJDFBKGAO_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIMBOKCJIO_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIMBOKCJIO_AUTOREMOVECALLBACK_OFFSET))(this);
		}

	};
