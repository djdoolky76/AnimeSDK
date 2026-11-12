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

#define BHAKOFNIGMN_ALDHLIEAJCI_OFFSET UNITYSDK_OFFSET(0xBB26E90)
#define BHAKOFNIGMN_CTOR_OFFSET UNITYSDK_OFFSET(0xBB26FB0)
#define BHAKOFNIGMN_DDPPBKPJGJN_OFFSET UNITYSDK_OFFSET(0xBB26F10)
#define BHAKOFNIGMN_DINMEPJKOGP_OFFSET UNITYSDK_OFFSET(0xBB26DD0)
#define BHAKOFNIGMN_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0xBB26C80)
#define BHAKOFNIGMN_ONCNALEHHKK_OFFSET UNITYSDK_OFFSET(0xBB26F60)
#define BHAKOFNIGMN__ONBIND_OFFSET UNITYSDK_OFFSET(0xBB268D0)
#define BHAKOFNIGMN__ONINITPARAMS_OFFSET UNITYSDK_OFFSET(0xBB26880)
#define BHAKOFNIGMN__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0xBB26B80)

inline static constexpr unsigned int BHAKOFNIGMN_TypeDefinitionIndex = 73249;

	class BHAKOFNIGMN : public ::FMPCODLIOLG
	{
	public:
		::IGKFNIEJGLM PMECLILMEDH; // 0x60
		::HEKAMNMEEOK* APPIHABBCGK; // 0x68
		::UnityEngine::Animation* KCOAILOHDND; // 0x70
		::OJGHGPNOOFL* DNAIDBLIPNH; // 0x78
		::UnityEngine::Transform* ENDLNPJJCNO; // 0x80
		::RPG::Client::RPGAnimationEvent* MEDGLNFKGDC; // 0x88
		::RPG::Client::AnimatorButton* PFBLCICMBBK; // 0x90
		::UnityEngine::UI::Image* MKOCDHEFAME; // 0x98
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
