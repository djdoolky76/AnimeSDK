#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
class FIOECFGECLB;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelCharacterRevive; }
namespace RPG::GameCore { class LevelEntityEscape; }
namespace RPG::GameCore { class LevelEntityTeamFormationStateChange; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }

#define AIJJFGJJKIG_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x12D7FFD0)
#define AIJJFGJJKIG_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x12D802F0)
#define AIJJFGJJKIG_CBFGIAJEBHG_OFFSET UNITYSDK_OFFSET(0x12D7FB80)
#define AIJJFGJJKIG_CCNBECBJOAN_OFFSET UNITYSDK_OFFSET(0x12D7FC90)
#define AIJJFGJJKIG_CLMKMIBDDMO_OFFSET UNITYSDK_OFFSET(0x12D7F400)
#define AIJJFGJJKIG_CTOR_OFFSET UNITYSDK_OFFSET(0x12D805D0)
#define AIJJFGJJKIG_DJDONLHHKCI_OFFSET UNITYSDK_OFFSET(0x12D7FA00)
#define AIJJFGJJKIG_FAEHNJHEPBO_OFFSET UNITYSDK_OFFSET(0x12D7FF10)
#define AIJJFGJJKIG_FNMAFAJCMLC_OFFSET UNITYSDK_OFFSET(0x12D7F880)
#define AIJJFGJJKIG_GLJHJIDOJKG_OFFSET UNITYSDK_OFFSET(0x12D7F8D0)
#define AIJJFGJJKIG_GNNLGCPMHBM_OFFSET UNITYSDK_OFFSET(0x12D7FE10)
#define AIJJFGJJKIG_HJCAKPONCOL_OFFSET UNITYSDK_OFFSET(0x12D7FA70)
#define AIJJFGJJKIG_JFDHJADPLED_OFFSET UNITYSDK_OFFSET(0x12D7FAE0)
#define AIJJFGJJKIG_JMNFOCENFLP_OFFSET UNITYSDK_OFFSET(0x12D7F670)
#define AIJJFGJJKIG_LJBBHDAAMKC_OFFSET UNITYSDK_OFFSET(0x12D7F5E0)
#define AIJJFGJJKIG_NFGONCCEFJJ_OFFSET UNITYSDK_OFFSET(0x12D7F780)
#define AIJJFGJJKIG_OEHPIOOIJDN_OFFSET UNITYSDK_OFFSET(0x12D7FD50)
#define AIJJFGJJKIG__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x12D7F250)

inline static constexpr unsigned int AIJJFGJJKIG_TypeDefinitionIndex = 73514;

	class AIJJFGJJKIG : public ::FMPCODLIOLG
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::FIOECFGECLB*>* MOGKLHFEJMF; // 0x60
		::System::Collections::Generic::Stack_1<::FIOECFGECLB*>* DHMIBIBBOML; // 0x68
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIJJFGJJKIG_CTOR_OFFSET))(this);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIJJFGJJKIG__SETUPVIEW_OFFSET))(this);
		}

		::System::Void LJBBHDAAMKC(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + AIJJFGJJKIG_LJBBHDAAMKC_OFFSET))(this, a1);
		}

		::System::Void JMNFOCENFLP(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + AIJJFGJJKIG_JMNFOCENFLP_OFFSET))(this, a1);
		}

		::System::Void FNMAFAJCMLC(::RPG::GameCore::LevelCharacterRevive* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelCharacterRevive*))((::PBYTE)hIl2Cpp + AIJJFGJJKIG_FNMAFAJCMLC_OFFSET))(this, a1);
		}

		::System::Void GLJHJIDOJKG(::RPG::GameCore::LevelEntityEscape* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelEntityEscape*))((::PBYTE)hIl2Cpp + AIJJFGJJKIG_GLJHJIDOJKG_OFFSET))(this, a1);
		}

		::System::Void DJDONLHHKCI(::RPG::GameCore::LevelEntityTeamFormationStateChange* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelEntityTeamFormationStateChange*))((::PBYTE)hIl2Cpp + AIJJFGJJKIG_DJDONLHHKCI_OFFSET))(this, a1);
		}

		::System::Void CLMKMIBDDMO(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + AIJJFGJJKIG_CLMKMIBDDMO_OFFSET))(this, a1);
		}

		::FIOECFGECLB* HJCAKPONCOL()
		{
			return ((::FIOECFGECLB*(*)(::PVOID))((::PBYTE)hIl2Cpp + AIJJFGJJKIG_HJCAKPONCOL_OFFSET))(this);
		}

		::System::Void NFGONCCEFJJ(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + AIJJFGJJKIG_NFGONCCEFJJ_OFFSET))(this, a1);
		}

		::FIOECFGECLB* JFDHJADPLED(::RPG::GameCore::GameEntity* a1)
		{
			return ((::FIOECFGECLB*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + AIJJFGJJKIG_JFDHJADPLED_OFFSET))(this, a1);
		}

		::System::Void CBFGIAJEBHG(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AIJJFGJJKIG_CBFGIAJEBHG_OFFSET))(this, a1);
		}

		::System::Void CCNBECBJOAN(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AIJJFGJJKIG_CCNBECBJOAN_OFFSET))(this, a1);
		}

		::System::Void OEHPIOOIJDN(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AIJJFGJJKIG_OEHPIOOIJDN_OFFSET))(this, a1);
		}

		::System::Void GNNLGCPMHBM(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AIJJFGJJKIG_GNNLGCPMHBM_OFFSET))(this, a1);
		}

		::System::Void FAEHNJHEPBO(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AIJJFGJJKIG_FAEHNJHEPBO_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIJJFGJJKIG_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIJJFGJJKIG_AUTOREMOVECALLBACK_OFFSET))(this);
		}

	};
