#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/IGKFNIEJGLM.h"
class INNLEDLNDNN;
namespace RPG::GameCore { class BattleEventDataComponent; }
namespace RPG::GameCore { class BattleInstance; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelBattleEventCreate; }
namespace RPG::GameCore { class LevelBattleEventDie; }
namespace RPG::GameCore { class LevelCharacterDie; }
namespace RPG::GameCore { class LevelEntityEscape; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine::UI { class Image; }

#define BPDAPGHPAAC_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x1B5FE450)
#define BPDAPGHPAAC_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x1B5FE890)
#define BPDAPGHPAAC_CFLMMIMOJCE_OFFSET UNITYSDK_OFFSET(0x1B5FD430)
#define BPDAPGHPAAC_CTOR_OFFSET UNITYSDK_OFFSET(0x1B5FEC90)
#define BPDAPGHPAAC_DCODHLFNNGL_OFFSET UNITYSDK_OFFSET(0x1B5FD3B0)
#define BPDAPGHPAAC_EKEABIDBHNK_OFFSET UNITYSDK_OFFSET(0x1B5FE390)
#define BPDAPGHPAAC_EOKIOHGPNIC_OFFSET UNITYSDK_OFFSET(0x1B5FD6F0)
#define BPDAPGHPAAC_EPHIBCEHFHP_OFFSET UNITYSDK_OFFSET(0x1B5FE130)
#define BPDAPGHPAAC_HEBCEFFKJIM_OFFSET UNITYSDK_OFFSET(0x1B5FD5D0)
#define BPDAPGHPAAC_HPFANEEJCBM_OFFSET UNITYSDK_OFFSET(0x1B5FD650)
#define BPDAPGHPAAC_JKJMOGBMCCH_OFFSET UNITYSDK_OFFSET(0x1B5FD480)
#define BPDAPGHPAAC_JPCPIBILKHH_OFFSET UNITYSDK_OFFSET(0x1B5FD4D0)
#define BPDAPGHPAAC_OADFOHCNDOJ_OFFSET UNITYSDK_OFFSET(0x1B5FE080)
#define BPDAPGHPAAC_OANKGOMOLEB_OFFSET UNITYSDK_OFFSET(0x1B5FD9A0)
#define BPDAPGHPAAC_OFDDFDGKNPJ_OFFSET UNITYSDK_OFFSET(0x1B5FD550)
#define BPDAPGHPAAC_OMHEMAHCCNE_OFFSET UNITYSDK_OFFSET(0x1B5FE210)
#define BPDAPGHPAAC_OMJAOCFAEFM_OFFSET UNITYSDK_OFFSET(0x1B5FCC80)
#define BPDAPGHPAAC_ONCHLFHHHDA_OFFSET UNITYSDK_OFFSET(0x1B5FE2D0)
#define BPDAPGHPAAC__INITVARONCE_OFFSET UNITYSDK_OFFSET(0x1B5FCB10)
#define BPDAPGHPAAC__ONBIND_OFFSET UNITYSDK_OFFSET(0x1B5FCA00)
#define BPDAPGHPAAC__ONINITPARAMS_OFFSET UNITYSDK_OFFSET(0x1B5FCAB0)
#define BPDAPGHPAAC__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x1B5FCC30)

inline static constexpr unsigned int BPDAPGHPAAC_TypeDefinitionIndex = 73607;

	class BPDAPGHPAAC : public ::FMPCODLIOLG
	{
	public:
		::RPG::GameCore::GameEntity* ICHEDAEHEBG; // 0x60
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::GameEntity*>* DOPHJDGCECJ; // 0x68
		::UnityEngine::UI::Image* LGIFGDPLKJH; // 0x70
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::INNLEDLNDNN*>* EIKBOFILFGL; // 0x78
		::RPG::GameCore::BattleInstance* CKPCDFOHJIE; // 0x80
		// static const ::System::Object EJEONLGGNBB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPDAPGHPAAC_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPDAPGHPAAC__ONBIND_OFFSET))(this);
		}

		::System::Void _OnInitParams(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + BPDAPGHPAAC__ONINITPARAMS_OFFSET))(this, a1);
		}

		::System::Void _InitVarOnce()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPDAPGHPAAC__INITVARONCE_OFFSET))(this);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPDAPGHPAAC__SETUPVIEW_OFFSET))(this);
		}

		::System::Void DCODHLFNNGL(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + BPDAPGHPAAC_DCODHLFNNGL_OFFSET))(this, a1);
		}

		::System::Void CFLMMIMOJCE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPDAPGHPAAC_CFLMMIMOJCE_OFFSET))(this);
		}

		::System::Void JKJMOGBMCCH(::RPG::GameCore::LevelBattleEventCreate* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelBattleEventCreate*))((::PBYTE)hIl2Cpp + BPDAPGHPAAC_JKJMOGBMCCH_OFFSET))(this, a1);
		}

		::System::Void JPCPIBILKHH(::RPG::GameCore::LevelEntityEscape* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelEntityEscape*))((::PBYTE)hIl2Cpp + BPDAPGHPAAC_JPCPIBILKHH_OFFSET))(this, a1);
		}

		::System::Void OFDDFDGKNPJ(::RPG::GameCore::LevelCharacterDie* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelCharacterDie*))((::PBYTE)hIl2Cpp + BPDAPGHPAAC_OFDDFDGKNPJ_OFFSET))(this, a1);
		}

		::System::Void HEBCEFFKJIM(::RPG::GameCore::LevelBattleEventDie* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelBattleEventDie*))((::PBYTE)hIl2Cpp + BPDAPGHPAAC_HEBCEFFKJIM_OFFSET))(this, a1);
		}

		::System::Void OMJAOCFAEFM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPDAPGHPAAC_OMJAOCFAEFM_OFFSET))(this);
		}

		::System::UInt32 HPFANEEJCBM(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + BPDAPGHPAAC_HPFANEEJCBM_OFFSET))(this, a1);
		}

		::System::Boolean EOKIOHGPNIC(::RPG::GameCore::GameEntity* a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::UInt32))((::PBYTE)hIl2Cpp + BPDAPGHPAAC_EOKIOHGPNIC_OFFSET))(this, a1, a2);
		}

		::System::Void OANKGOMOLEB(::RPG::GameCore::GameEntity* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::UInt32))((::PBYTE)hIl2Cpp + BPDAPGHPAAC_OANKGOMOLEB_OFFSET))(this, a1, a2);
		}

		::System::String* OADFOHCNDOJ(::RPG::GameCore::BattleEventDataComponent* a1)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::GameCore::BattleEventDataComponent*))((::PBYTE)hIl2Cpp + BPDAPGHPAAC_OADFOHCNDOJ_OFFSET))(this, a1);
		}

		::System::Void EPHIBCEHFHP(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BPDAPGHPAAC_EPHIBCEHFHP_OFFSET))(this, a1);
		}

		::System::Void OMHEMAHCCNE(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BPDAPGHPAAC_OMHEMAHCCNE_OFFSET))(this, a1);
		}

		::System::Void ONCHLFHHHDA(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BPDAPGHPAAC_ONCHLFHHHDA_OFFSET))(this, a1);
		}

		::System::Void EKEABIDBHNK(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BPDAPGHPAAC_EKEABIDBHNK_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPDAPGHPAAC_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPDAPGHPAAC_AUTOREMOVECALLBACK_OFFSET))(this);
		}

	};
