#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/IGKFNIEJGLM.h"
class HEKAMNMEEOK;
class OJGHGPNOOFL;
namespace RPG::Client { class AnimatorButton; }
namespace RPG::Client { class RPGAnimationEvent; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }

#define BHAKOFNIGMN_ALDHLIEAJCI_OFFSET UNITYSDK_OFFSET(0x151DC4C0)
#define BHAKOFNIGMN_CTOR_OFFSET UNITYSDK_OFFSET(0x151DC5E0)
#define BHAKOFNIGMN_DDPPBKPJGJN_OFFSET UNITYSDK_OFFSET(0x151DC540)
#define BHAKOFNIGMN_DINMEPJKOGP_OFFSET UNITYSDK_OFFSET(0x151DC400)
#define BHAKOFNIGMN_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0x151DC2A0)
#define BHAKOFNIGMN_ONCNALEHHKK_OFFSET UNITYSDK_OFFSET(0x151DC590)
#define BHAKOFNIGMN__ONBIND_OFFSET UNITYSDK_OFFSET(0x151DBEF0)
#define BHAKOFNIGMN__ONINITPARAMS_OFFSET UNITYSDK_OFFSET(0x151DBEA0)
#define BHAKOFNIGMN__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x151DC1A0)

inline static constexpr unsigned int BHAKOFNIGMN_TypeDefinitionIndex = 73248;

	class BHAKOFNIGMN : public ::FMPCODLIOLG
	{
	public:
		::OJGHGPNOOFL* DNAIDBLIPNH; // 0x60
		::RPG::Client::RPGAnimationEvent* MEDGLNFKGDC; // 0x68
		::UnityEngine::Animation* KCOAILOHDND; // 0x70
		::RPG::Client::AnimatorButton* PFBLCICMBBK; // 0x78
		::UnityEngine::UI::Image* MKOCDHEFAME; // 0x80
		::IGKFNIEJGLM PMECLILMEDH; // 0x88
		::UnityEngine::Transform* ENDLNPJJCNO; // 0x90
		::HEKAMNMEEOK* APPIHABBCGK; // 0x98
		// static const ::System::String* FOHFALFBMAP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHAKOFNIGMN_CTOR_OFFSET))(this);
		}

		::System::Void _OnInitParams(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + BHAKOFNIGMN__ONINITPARAMS_OFFSET))(this, a1);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHAKOFNIGMN__ONBIND_OFFSET))(this);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHAKOFNIGMN__SETUPVIEW_OFFSET))(this);
		}

		::System::Void NKPPGDENJAE(::HEKAMNMEEOK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HEKAMNMEEOK*))((::PBYTE)hIl2Cpp + BHAKOFNIGMN_NKPPGDENJAE_OFFSET))(this, a1);
		}

		::System::Void DDPPBKPJGJN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHAKOFNIGMN_DDPPBKPJGJN_OFFSET))(this);
		}

		::System::Void DINMEPJKOGP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHAKOFNIGMN_DINMEPJKOGP_OFFSET))(this);
		}

		::System::Void ALDHLIEAJCI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHAKOFNIGMN_ALDHLIEAJCI_OFFSET))(this);
		}

		::System::Void ONCNALEHHKK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHAKOFNIGMN_ONCNALEHHKK_OFFSET))(this);
		}

	};
