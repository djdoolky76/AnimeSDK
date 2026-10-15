#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SkillType.h"
#include "unitysdk/System/Object.h"
class BNPCGCMCEOH;
class EIIJNHOOCOM;
class NHHJIBPNBHN;
namespace RPG::Client { class BattleAlertParam; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HNLOPNDDJNA_CTOR_OFFSET UNITYSDK_OFFSET(0x15D94470)
#define HNLOPNDDJNA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15D93940)
#define HNLOPNDDJNA_GBNGJLBJBMD_OFFSET UNITYSDK_OFFSET(0x15D94280)
#define HNLOPNDDJNA_HBPMHHILMCO_OFFSET UNITYSDK_OFFSET(0x15D93D80)
#define HNLOPNDDJNA_HNHKBFLDBJI_OFFSET UNITYSDK_OFFSET(0x15D93BC0)
#define HNLOPNDDJNA_KCIEEJPFOCM_OFFSET UNITYSDK_OFFSET(0x15D93CA0)
#define HNLOPNDDJNA_LLIKMOMKFEG_OFFSET UNITYSDK_OFFSET(0x15D93FC0)
#define HNLOPNDDJNA_MHKMDIAPPLG_OFFSET UNITYSDK_OFFSET(0x15D93E20)
#define HNLOPNDDJNA_MKAPCNIBODI_OFFSET UNITYSDK_OFFSET(0x15D93EF0)
#define HNLOPNDDJNA_NGBBALHHKFN_OFFSET UNITYSDK_OFFSET(0x15D94020)
#define HNLOPNDDJNA_OPACDFGBMLJ_OFFSET UNITYSDK_OFFSET(0x15D94330)

inline static constexpr unsigned int HNLOPNDDJNA_TypeDefinitionIndex = 71416;

	class HNLOPNDDJNA : public ::System::Object
	{
	public:
		::NHHJIBPNBHN* CPGIIBCLOEA; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::EIIJNHOOCOM*>* KBAMBDNAGHF; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::NHHJIBPNBHN*>* CCGOOIMLGGN; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNLOPNDDJNA_CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNLOPNDDJNA_DISPOSE_OFFSET))(this);
		}

		::System::Void KCIEEJPFOCM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNLOPNDDJNA_KCIEEJPFOCM_OFFSET))(this);
		}

		::EIIJNHOOCOM* HBPMHHILMCO(::RPG::GameCore::GameEntity* a1)
		{
			return ((::EIIJNHOOCOM*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + HNLOPNDDJNA_HBPMHHILMCO_OFFSET))(this, a1);
		}

		::BNPCGCMCEOH* MHKMDIAPPLG(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::SkillType a2)
		{
			return ((::BNPCGCMCEOH*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::SkillType))((::PBYTE)hIl2Cpp + HNLOPNDDJNA_MHKMDIAPPLG_OFFSET))(this, a1, a2);
		}

		::System::Void HNHKBFLDBJI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNLOPNDDJNA_HNHKBFLDBJI_OFFSET))(this);
		}

		::System::Void MKAPCNIBODI(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HNLOPNDDJNA_MKAPCNIBODI_OFFSET))(this, a1);
		}

		::System::Void GBNGJLBJBMD(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HNLOPNDDJNA_GBNGJLBJBMD_OFFSET))(this, a1);
		}

		::System::Void LLIKMOMKFEG(::RPG::Client::BattleAlertParam* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BattleAlertParam*))((::PBYTE)hIl2Cpp + HNLOPNDDJNA_LLIKMOMKFEG_OFFSET))(this, a1);
		}

		::System::Void OPACDFGBMLJ(::RPG::GameCore::GameEntity* a1, ::EIIJNHOOCOM* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::EIIJNHOOCOM*))((::PBYTE)hIl2Cpp + HNLOPNDDJNA_OPACDFGBMLJ_OFFSET))(this, a1, a2);
		}

		::System::Void NGBBALHHKFN(::RPG::GameCore::GameEntity* a1, ::RPG::Client::BattleAlertParam* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::Client::BattleAlertParam*))((::PBYTE)hIl2Cpp + HNLOPNDDJNA_NGBBALHHKFN_OFFSET))(this, a1, a2);
		}

	};
