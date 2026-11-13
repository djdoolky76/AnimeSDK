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

#define DCNCNLAHOOB_AJPENEHACEG_OFFSET UNITYSDK_OFFSET(0x17724500)
#define DCNCNLAHOOB_CTOR_OFFSET UNITYSDK_OFFSET(0x17724A30)
#define DCNCNLAHOOB_DMMGBFEFCFP_OFFSET UNITYSDK_OFFSET(0x17724690)
#define DCNCNLAHOOB_ECOHEIAHIAO_OFFSET UNITYSDK_OFFSET(0x17723F90)
#define DCNCNLAHOOB_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x17723A40)
#define DCNCNLAHOOB_GET_TRANS_OFFSET UNITYSDK_OFFSET(0x17723A60)
#define DCNCNLAHOOB_GICILAMDOJB_OFFSET UNITYSDK_OFFSET(0x177244B0)
#define DCNCNLAHOOB_JIABCJLODJI_OFFSET UNITYSDK_OFFSET(0x17724640)
#define DCNCNLAHOOB_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0x177240D0)
#define DCNCNLAHOOB_PACBDGILPHI_OFFSET UNITYSDK_OFFSET(0x17724150)
#define DCNCNLAHOOB_SET_INDEX_OFFSET UNITYSDK_OFFSET(0x17723A50)
#define DCNCNLAHOOB__ONBIND_OFFSET UNITYSDK_OFFSET(0x17723B50)
#define DCNCNLAHOOB__ONINITPARAMS_OFFSET UNITYSDK_OFFSET(0x17723AA0)
#define DCNCNLAHOOB__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x17724070)
#define DCNCNLAHOOB___ONBINDHANDLERS_B__10_0_OFFSET UNITYSDK_OFFSET(0x17724A70)
#define DCNCNLAHOOB___ONBINDHANDLERS_B__10_1_OFFSET UNITYSDK_OFFSET(0x17724A80)

inline static constexpr unsigned int DCNCNLAHOOB_TypeDefinitionIndex = 74116;

	class DCNCNLAHOOB : public ::FMPCODLIOLG
	{
	public:
		::RPG::GameCore::LevelUIComponent* OMCLLLAHOIP; // 0x60
		::GAEFEBMGIPF* KCKANELOJKG; // 0x68
		::UnityEngine::UI::Text* HKDELOGLDEF; // 0x70
		::RPG::Client::UIStateCtrl* JINLLOBAGML; // 0x78
		::UnityEngine::UI::Text* FPDJKNMJOLP; // 0x80
		::UnityEngine::UI::Slider* DNHDAJDEFBM; // 0x88
		::AFOPMEOBPCM* KAGBILCCODL; // 0x90
		::OEENEGJBMCO* IPKDEJMHHJG; // 0x98
		::OEJGKNMOABJ* LHNBJBCOOHH; // 0xA0
		::GAEFEBMGIPF* HKCKNFHJABP; // 0xA8
		::UnityEngine::UI::Slider* EDLNEDEKKCF; // 0xB0
		::System::Int32 _Index_k__BackingField; // 0xB8
		::System::Boolean DIMECBLLOGB; // 0xBC
		::System::Byte _padding0[0x3];
		::RPG::GameCore::BattleUIPanelType APGLFBAFEOB; // 0xC0
		::System::Byte _padding1[0x4];
		::AJEEKBMHJIP APPIHABBCGK; // 0xC8
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
