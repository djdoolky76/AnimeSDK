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

#define IFIMBOKCJIO_APKDAEEFOJD_OFFSET UNITYSDK_OFFSET(0x15F0DF30)
#define IFIMBOKCJIO_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x15F0E670)
#define IFIMBOKCJIO_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x15F0E830)
#define IFIMBOKCJIO_BFAJDFBKGAO_OFFSET UNITYSDK_OFFSET(0x15F0E550)
#define IFIMBOKCJIO_CTOR_OFFSET UNITYSDK_OFFSET(0x15F0E9D0)
#define IFIMBOKCJIO_ECOHEIAHIAO_OFFSET UNITYSDK_OFFSET(0x15F0D260)
#define IFIMBOKCJIO_EKGCGIDIFJJ_OFFSET UNITYSDK_OFFSET(0x15F0D8B0)
#define IFIMBOKCJIO_ELCOBPGHAEA_OFFSET UNITYSDK_OFFSET(0x15F0DD70)
#define IFIMBOKCJIO_ENMMPIDIAJF_OFFSET UNITYSDK_OFFSET(0x15F0E160)
#define IFIMBOKCJIO_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x15F0D020)
#define IFIMBOKCJIO_GET_TRANS_OFFSET UNITYSDK_OFFSET(0x15F0D040)
#define IFIMBOKCJIO_GNIINGAJKLF_OFFSET UNITYSDK_OFFSET(0x15F0E310)
#define IFIMBOKCJIO_KFECEIGODPD_OFFSET UNITYSDK_OFFSET(0x15F0E1F0)
#define IFIMBOKCJIO_KGLAIIKJCPB_OFFSET UNITYSDK_OFFSET(0x15F0E270)
#define IFIMBOKCJIO_MBIGODCMBAM_OFFSET UNITYSDK_OFFSET(0x15F0E490)
#define IFIMBOKCJIO_MLHPJCLADPK_OFFSET UNITYSDK_OFFSET(0x15F0E3D0)
#define IFIMBOKCJIO_NEOFNEBLKKL_OFFSET UNITYSDK_OFFSET(0x15F0D420)
#define IFIMBOKCJIO_PACBDGILPHI_OFFSET UNITYSDK_OFFSET(0x15F0DAC0)
#define IFIMBOKCJIO_SET_INDEX_OFFSET UNITYSDK_OFFSET(0x15F0D030)
#define IFIMBOKCJIO__ONBIND_OFFSET UNITYSDK_OFFSET(0x15F0D080)
#define IFIMBOKCJIO__ONTICK_OFFSET UNITYSDK_OFFSET(0x15F0D970)

inline static constexpr unsigned int IFIMBOKCJIO_TypeDefinitionIndex = 72106;

	class IFIMBOKCJIO : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::CanvasGroup* GFJADDHHOII; // 0x60
		::RPG::Client::AnimatorButton* HDPAGPIHAJG; // 0x68
		::UnityEngine::Transform* PEMIMCDDCNP; // 0x70
		::RPG::Client::AnimatorButton* NBBGLIHKLDH; // 0x78
		::UnityEngine::CanvasGroup* KNPDPINAFBG; // 0x80
		::UnityEngine::Transform* COGOPBJHLME; // 0x88
		::UnityEngine::UI::Text* LKICJKJDPAI; // 0x90
		::System::Collections::Generic::Dictionary_2<::RPG::Client::TextID, ::System::Int32>* CPKPPAAJEOJ; // 0x98
		::UnityEngine::Animation* PMOJILOJEPE; // 0xA0
		::RPG::Client::TextID CHMGOIODCMK; // 0xA8
		::System::Int32 JJBOPOPCOCH; // 0xB8
		::System::Int32 _Index_k__BackingField; // 0xBC
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

		::System::Void EKGCGIDIFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIMBOKCJIO_EKGCGIDIFJJ_OFFSET))(this);
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
