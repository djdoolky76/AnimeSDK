#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class ANOMGJFGFLE;
class IEEJKFBDGHN;
class PEPMBAEBOJL;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class IdleLiveUiVisibleData; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine::UI { class Text; }

#define OBAFGJPCDOL_AMKDDILLOHL_OFFSET UNITYSDK_OFFSET(0xBD30D90)
#define OBAFGJPCDOL_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xBD31CB0)
#define OBAFGJPCDOL_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xBD31DF0)
#define OBAFGJPCDOL_BHEFAIAKGAI_OFFSET UNITYSDK_OFFSET(0xBD30F40)
#define OBAFGJPCDOL_CGODLBJDKBI_OFFSET UNITYSDK_OFFSET(0xBD307D0)
#define OBAFGJPCDOL_CMHMFBFKKND_OFFSET UNITYSDK_OFFSET(0xBD31350)
#define OBAFGJPCDOL_CTOR_OFFSET UNITYSDK_OFFSET(0xBD31F10)
#define OBAFGJPCDOL_DDEBPDNPACB_OFFSET UNITYSDK_OFFSET(0xBD30C80)
#define OBAFGJPCDOL_DJPOLHHPJEP_OFFSET UNITYSDK_OFFSET(0xBD31BB0)
#define OBAFGJPCDOL_DLFJLIGOLEK_OFFSET UNITYSDK_OFFSET(0xBD31AC0)
#define OBAFGJPCDOL_EFOKIGMOKLI_OFFSET UNITYSDK_OFFSET(0xBD30B40)
#define OBAFGJPCDOL_EKGCGIDIFJJ_OFFSET UNITYSDK_OFFSET(0xBD31300)
#define OBAFGJPCDOL_FOCOJHOAILK_OFFSET UNITYSDK_OFFSET(0xBD30970)
#define OBAFGJPCDOL_GDJMHCGFDGN_OFFSET UNITYSDK_OFFSET(0xBD30820)
#define OBAFGJPCDOL_JCELNHCBBIN_OFFSET UNITYSDK_OFFSET(0xBD31910)
#define OBAFGJPCDOL_KGNAALBPKPM_OFFSET UNITYSDK_OFFSET(0xBD316D0)
#define OBAFGJPCDOL_LKPEGLPGPOF_OFFSET UNITYSDK_OFFSET(0xBD30910)
#define OBAFGJPCDOL_OBIHPHLIOLM_OFFSET UNITYSDK_OFFSET(0xBD31A00)
#define OBAFGJPCDOL_PBICOGKGPMP_OFFSET UNITYSDK_OFFSET(0xBD30790)
#define OBAFGJPCDOL__INITBERSERKPANEL_B__17_0_OFFSET UNITYSDK_OFFSET(0xBD31FC0)
#define OBAFGJPCDOL__ONBIND_OFFSET UNITYSDK_OFFSET(0xBD31000)
#define OBAFGJPCDOL__ONTICK_OFFSET UNITYSDK_OFFSET(0xBD31670)

inline static constexpr unsigned int OBAFGJPCDOL_TypeDefinitionIndex = 71736;

	class OBAFGJPCDOL : public ::FMPCODLIOLG
	{
	public:
		::RPG::GameCore::GameEntity* NKIKPPOODKK; // 0x60
		::IEEJKFBDGHN* JABPKMGLAII; // 0x68
		::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Boolean>* OAEABBFMGDP; // 0x70
		::UnityEngine::UI::Text* EFIIDDHIJMO; // 0x78
		::PEPMBAEBOJL* CGJKDOBMJIB; // 0x80
		::ANOMGJFGFLE* MHGBKJGLFBF; // 0x88
		::UnityEngine::Vector3 KFEJGBAKKEF; // 0x90
		// static const ::System::String* DJCBDJMACFH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBAFGJPCDOL_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* PBICOGKGPMP()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + OBAFGJPCDOL_PBICOGKGPMP_OFFSET))(this);
		}

		::ANOMGJFGFLE* CGODLBJDKBI()
		{
			return ((::ANOMGJFGFLE*(*)(::PVOID))((::PBYTE)hIl2Cpp + OBAFGJPCDOL_CGODLBJDKBI_OFFSET))(this);
		}

		::System::Void GDJMHCGFDGN(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + OBAFGJPCDOL_GDJMHCGFDGN_OFFSET))(this, a1);
		}

		::System::Void LKPEGLPGPOF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBAFGJPCDOL_LKPEGLPGPOF_OFFSET))(this);
		}

		::System::String* FOCOJHOAILK()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OBAFGJPCDOL_FOCOJHOAILK_OFFSET))(this);
		}

		::System::Void EFOKIGMOKLI(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + OBAFGJPCDOL_EFOKIGMOKLI_OFFSET))(this, a1);
		}

		::System::Void DDEBPDNPACB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBAFGJPCDOL_DDEBPDNPACB_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* AMKDDILLOHL()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + OBAFGJPCDOL_AMKDDILLOHL_OFFSET))(this);
		}

		::System::Void BHEFAIAKGAI(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + OBAFGJPCDOL_BHEFAIAKGAI_OFFSET))(this, a1);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBAFGJPCDOL__ONBIND_OFFSET))(this);
		}

		::System::Void EKGCGIDIFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBAFGJPCDOL_EKGCGIDIFJJ_OFFSET))(this);
		}

		::System::Void _OnTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OBAFGJPCDOL__ONTICK_OFFSET))(this, a1);
		}

		::System::Void CMHMFBFKKND()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBAFGJPCDOL_CMHMFBFKKND_OFFSET))(this);
		}

		::System::Void KGNAALBPKPM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBAFGJPCDOL_KGNAALBPKPM_OFFSET))(this);
		}

		::System::Void JCELNHCBBIN(::RPG::GameCore::IdleLiveUiVisibleData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::IdleLiveUiVisibleData*))((::PBYTE)hIl2Cpp + OBAFGJPCDOL_JCELNHCBBIN_OFFSET))(this, a1);
		}

		::System::Void OBIHPHLIOLM(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OBAFGJPCDOL_OBIHPHLIOLM_OFFSET))(this, a1);
		}

		::System::Void DLFJLIGOLEK(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OBAFGJPCDOL_DLFJLIGOLEK_OFFSET))(this, a1);
		}

		::System::Void DJPOLHHPJEP(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OBAFGJPCDOL_DJPOLHHPJEP_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBAFGJPCDOL_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBAFGJPCDOL_AUTOREMOVECALLBACK_OFFSET))(this);
		}

		::System::Void _InitBerserkPanel_b__17_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBAFGJPCDOL__INITBERSERKPANEL_B__17_0_OFFSET))(this);
		}

	};
