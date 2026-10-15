#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UIController.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class ANOMGJFGFLE;
class IEEJKFBDGHN;
class PEPMBAEBOJL;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class IdleLiveUiVisibleData; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine::UI { class Text; }

#define NNLAFMMMEBL_AMKDDILLOHL_OFFSET UNITYSDK_OFFSET(0xBCC25C0)
#define NNLAFMMMEBL_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xBCC3560)
#define NNLAFMMMEBL_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xBCC36A0)
#define NNLAFMMMEBL_BHEFAIAKGAI_OFFSET UNITYSDK_OFFSET(0xBCC2770)
#define NNLAFMMMEBL_CGODLBJDKBI_OFFSET UNITYSDK_OFFSET(0xBCC3320)
#define NNLAFMMMEBL_CMHMFBFKKND_OFFSET UNITYSDK_OFFSET(0xBCC2C50)
#define NNLAFMMMEBL_CTOR_OFFSET UNITYSDK_OFFSET(0xBCC1E90)
#define NNLAFMMMEBL_DDEBPDNPACB_OFFSET UNITYSDK_OFFSET(0xBCC2520)
#define NNLAFMMMEBL_DJPOLHHPJEP_OFFSET UNITYSDK_OFFSET(0xBCC3460)
#define NNLAFMMMEBL_DLFJLIGOLEK_OFFSET UNITYSDK_OFFSET(0xBCC3370)
#define NNLAFMMMEBL_EFOKIGMOKLI_OFFSET UNITYSDK_OFFSET(0xBCC23C0)
#define NNLAFMMMEBL_FOCOJHOAILK_OFFSET UNITYSDK_OFFSET(0xBCC21E0)
#define NNLAFMMMEBL_GDJMHCGFDGN_OFFSET UNITYSDK_OFFSET(0xBCC1FB0)
#define NNLAFMMMEBL_JCELNHCBBIN_OFFSET UNITYSDK_OFFSET(0xBCC3160)
#define NNLAFMMMEBL_KGNAALBPKPM_OFFSET UNITYSDK_OFFSET(0xBCC2F50)
#define NNLAFMMMEBL_LKPEGLPGPOF_OFFSET UNITYSDK_OFFSET(0xBCC2060)
#define NNLAFMMMEBL_OBIHPHLIOLM_OFFSET UNITYSDK_OFFSET(0xBCC3250)
#define NNLAFMMMEBL_PBICOGKGPMP_OFFSET UNITYSDK_OFFSET(0xBCC1F60)
#define NNLAFMMMEBL__CUSTOMBINDVIEW_OFFSET UNITYSDK_OFFSET(0xBCC2830)
#define NNLAFMMMEBL__ONTICK_OFFSET UNITYSDK_OFFSET(0xBCC2BF0)
#define NNLAFMMMEBL__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0xBCC2EE0)

inline static constexpr unsigned int NNLAFMMMEBL_TypeDefinitionIndex = 71733;

	class NNLAFMMMEBL : public ::RPG::Client::UIController
	{
	public:
		::RPG::GameCore::GameEntity* NKIKPPOODKK; // 0x190
		::UnityEngine::UI::Text* EFIIDDHIJMO; // 0x198
		::PEPMBAEBOJL* CGJKDOBMJIB; // 0x1A0
		::IEEJKFBDGHN* JABPKMGLAII; // 0x1A8
		::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Boolean>* OAEABBFMGDP; // 0x1B0
		::ANOMGJFGFLE* MHGBKJGLFBF; // 0x1B8
		::UnityEngine::Vector3 KFEJGBAKKEF; // 0x1C0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNLAFMMMEBL_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* PBICOGKGPMP()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + NNLAFMMMEBL_PBICOGKGPMP_OFFSET))(this);
		}

		::System::Void GDJMHCGFDGN(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + NNLAFMMMEBL_GDJMHCGFDGN_OFFSET))(this, a1);
		}

		::System::Void LKPEGLPGPOF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNLAFMMMEBL_LKPEGLPGPOF_OFFSET))(this);
		}

		::System::Single FOCOJHOAILK()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NNLAFMMMEBL_FOCOJHOAILK_OFFSET))(this);
		}

		::System::Void EFOKIGMOKLI(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + NNLAFMMMEBL_EFOKIGMOKLI_OFFSET))(this, a1);
		}

		::System::Void DDEBPDNPACB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNLAFMMMEBL_DDEBPDNPACB_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* AMKDDILLOHL()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + NNLAFMMMEBL_AMKDDILLOHL_OFFSET))(this);
		}

		::System::Void BHEFAIAKGAI(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + NNLAFMMMEBL_BHEFAIAKGAI_OFFSET))(this, a1);
		}

		::System::Void _CustomBindView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNLAFMMMEBL__CUSTOMBINDVIEW_OFFSET))(this);
		}

		::System::Void _OnTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NNLAFMMMEBL__ONTICK_OFFSET))(this, a1);
		}

		::System::Void CMHMFBFKKND()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNLAFMMMEBL_CMHMFBFKKND_OFFSET))(this);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNLAFMMMEBL__SETUPVIEW_OFFSET))(this);
		}

		::System::Void KGNAALBPKPM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNLAFMMMEBL_KGNAALBPKPM_OFFSET))(this);
		}

		::System::Void JCELNHCBBIN(::RPG::GameCore::IdleLiveUiVisibleData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::IdleLiveUiVisibleData*))((::PBYTE)hIl2Cpp + NNLAFMMMEBL_JCELNHCBBIN_OFFSET))(this, a1);
		}

		::System::Void OBIHPHLIOLM(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NNLAFMMMEBL_OBIHPHLIOLM_OFFSET))(this, a1);
		}

		::ANOMGJFGFLE* CGODLBJDKBI()
		{
			return ((::ANOMGJFGFLE*(*)(::PVOID))((::PBYTE)hIl2Cpp + NNLAFMMMEBL_CGODLBJDKBI_OFFSET))(this);
		}

		::System::Void DLFJLIGOLEK(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NNLAFMMMEBL_DLFJLIGOLEK_OFFSET))(this, a1);
		}

		::System::Void DJPOLHHPJEP(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NNLAFMMMEBL_DJPOLHHPJEP_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNLAFMMMEBL_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNLAFMMMEBL_AUTOREMOVECALLBACK_OFFSET))(this);
		}

	};
