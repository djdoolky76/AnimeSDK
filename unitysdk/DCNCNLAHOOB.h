#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AJEEKBMHJIP.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/RPG/GameCore/BattleUIPanelType.h"
#include "unitysdk/IGKFNIEJGLM.h"
class AFOPMEOBPCM;
class GAEFEBMGIPF;
class OEENEGJBMCO;
class OEJGKNMOABJ;
namespace RPG::Client { class UIStateCtrl; }
namespace RPG::GameCore { class LevelUIComponent; }
namespace System { class Object; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Slider; }
namespace UnityEngine::UI { class Text; }

#define DCNCNLAHOOB_AJPENEHACEG_OFFSET UNITYSDK_OFFSET(0xEE0CE10)
#define DCNCNLAHOOB_CTOR_OFFSET UNITYSDK_OFFSET(0xEE0D340)
#define DCNCNLAHOOB_DMMGBFEFCFP_OFFSET UNITYSDK_OFFSET(0xEE0CFA0)
#define DCNCNLAHOOB_ECOHEIAHIAO_OFFSET UNITYSDK_OFFSET(0xEE0C890)
#define DCNCNLAHOOB_GET_INDEX_OFFSET UNITYSDK_OFFSET(0xEE0C330)
#define DCNCNLAHOOB_GET_TRANS_OFFSET UNITYSDK_OFFSET(0xEE0C350)
#define DCNCNLAHOOB_GICILAMDOJB_OFFSET UNITYSDK_OFFSET(0xEE0CDC0)
#define DCNCNLAHOOB_JIABCJLODJI_OFFSET UNITYSDK_OFFSET(0xEE0CF50)
#define DCNCNLAHOOB_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0xEE0C9D0)
#define DCNCNLAHOOB_PACBDGILPHI_OFFSET UNITYSDK_OFFSET(0xEE0CA50)
#define DCNCNLAHOOB_SET_INDEX_OFFSET UNITYSDK_OFFSET(0xEE0C340)
#define DCNCNLAHOOB__ONBIND_OFFSET UNITYSDK_OFFSET(0xEE0C450)
#define DCNCNLAHOOB__ONINITPARAMS_OFFSET UNITYSDK_OFFSET(0xEE0C390)
#define DCNCNLAHOOB__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0xEE0C970)
#define DCNCNLAHOOB___ONBINDHANDLERS_B__10_0_OFFSET UNITYSDK_OFFSET(0xEE0D380)
#define DCNCNLAHOOB___ONBINDHANDLERS_B__10_1_OFFSET UNITYSDK_OFFSET(0xEE0D390)

inline static constexpr unsigned int DCNCNLAHOOB_TypeDefinitionIndex = 74117;

	class DCNCNLAHOOB : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::UI::Slider* EDLNEDEKKCF; // 0x60
		::UnityEngine::UI::Text* HKDELOGLDEF; // 0x68
		::RPG::GameCore::LevelUIComponent* OMCLLLAHOIP; // 0x70
		::OEJGKNMOABJ* LHNBJBCOOHH; // 0x78
		::GAEFEBMGIPF* KCKANELOJKG; // 0x80
		::GAEFEBMGIPF* HKCKNFHJABP; // 0x88
		::UnityEngine::UI::Text* FPDJKNMJOLP; // 0x90
		::AFOPMEOBPCM* KAGBILCCODL; // 0x98
		::UnityEngine::UI::Slider* DNHDAJDEFBM; // 0xA0
		::OEENEGJBMCO* IPKDEJMHHJG; // 0xA8
		::RPG::Client::UIStateCtrl* JINLLOBAGML; // 0xB0
		::RPG::GameCore::BattleUIPanelType APGLFBAFEOB; // 0xB8
		::System::Byte _padding0[0x4];
		::AJEEKBMHJIP APPIHABBCGK; // 0xC0
		::System::Boolean DIMECBLLOGB; // 0xE0
		::System::Byte _padding1[0x3];
		::System::Int32 _Index_k__BackingField; // 0xE4
		// static const ::System::String* DJCBDJMACFH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCNCNLAHOOB_CTOR_OFFSET))(this);
		}

		::System::Int32 get_Index()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DCNCNLAHOOB_GET_INDEX_OFFSET))(this);
		}

		::System::Void set_Index(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DCNCNLAHOOB_SET_INDEX_OFFSET))(this, a1);
		}

		::UnityEngine::Transform* get_Trans()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + DCNCNLAHOOB_GET_TRANS_OFFSET))(this);
		}

		::System::Void _OnInitParams(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + DCNCNLAHOOB__ONINITPARAMS_OFFSET))(this, a1);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCNCNLAHOOB__ONBIND_OFFSET))(this);
		}

		::System::Void ECOHEIAHIAO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCNCNLAHOOB_ECOHEIAHIAO_OFFSET))(this);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCNCNLAHOOB__SETUPVIEW_OFFSET))(this);
		}

		::System::Void NKPPGDENJAE(::AJEEKBMHJIP a1)
		{
			return ((::System::Void(*)(::PVOID, ::AJEEKBMHJIP))((::PBYTE)hIl2Cpp + DCNCNLAHOOB_NKPPGDENJAE_OFFSET))(this, a1);
		}

		::System::Void GICILAMDOJB(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DCNCNLAHOOB_GICILAMDOJB_OFFSET))(this, a1);
		}

		::System::Void JIABCJLODJI(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DCNCNLAHOOB_JIABCJLODJI_OFFSET))(this, a1);
		}

		::System::Void DMMGBFEFCFP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCNCNLAHOOB_DMMGBFEFCFP_OFFSET))(this);
		}

		::System::Void AJPENEHACEG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCNCNLAHOOB_AJPENEHACEG_OFFSET))(this);
		}

		::System::Void PACBDGILPHI(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DCNCNLAHOOB_PACBDGILPHI_OFFSET))(this, a1);
		}

		::System::Void __OnBindHandlers_b__10_0(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DCNCNLAHOOB___ONBINDHANDLERS_B__10_0_OFFSET))(this, a1);
		}

		::System::Void __OnBindHandlers_b__10_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DCNCNLAHOOB___ONBINDHANDLERS_B__10_1_OFFSET))(this, a1);
		}

	};
