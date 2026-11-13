#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/IGKFNIEJGLM.h"
class BDOPGBJHDKF;
namespace RPG::Client { class AnimatorButton; }
namespace RPG::Client { class ShowBossInfoParam; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelUIComponent; }
namespace System { class Object; }

#define CLCKKOJBAFO_AKFGMLPHBEO_OFFSET UNITYSDK_OFFSET(0x1AD5C680)
#define CLCKKOJBAFO_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x1AD5C740)
#define CLCKKOJBAFO_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x1AD5C860)
#define CLCKKOJBAFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1AD5C950)
#define CLCKKOJBAFO_ECOHEIAHIAO_OFFSET UNITYSDK_OFFSET(0x1AD5C260)
#define CLCKKOJBAFO_EHEPDFDHDCK_OFFSET UNITYSDK_OFFSET(0x1AD5C390)
#define CLCKKOJBAFO_FNKFKLJFODH_OFFSET UNITYSDK_OFFSET(0x1AD5C450)
#define CLCKKOJBAFO_KANMCJHEFJJ_OFFSET UNITYSDK_OFFSET(0x1AD5BEA0)
#define CLCKKOJBAFO_LOFNKMINKEK_OFFSET UNITYSDK_OFFSET(0x1AD5C580)
#define CLCKKOJBAFO_NEOFNEBLKKL_OFFSET UNITYSDK_OFFSET(0x1AD5C4A0)
#define CLCKKOJBAFO_OIDJJLPLMHK_OFFSET UNITYSDK_OFFSET(0x1AD5BDD0)
#define CLCKKOJBAFO_ONACQUIRE_OFFSET UNITYSDK_OFFSET(0x1AD5BD60)
#define CLCKKOJBAFO_ONRETURN_OFFSET UNITYSDK_OFFSET(0x1AD5BE20)
#define CLCKKOJBAFO__INITVARONCE_OFFSET UNITYSDK_OFFSET(0x1AD5C080)
#define CLCKKOJBAFO__ONBIND_OFFSET UNITYSDK_OFFSET(0x1AD5BFC0)
#define CLCKKOJBAFO__ONINITPARAMS_OFFSET UNITYSDK_OFFSET(0x1AD5C1F0)
#define CLCKKOJBAFO__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x1AD5C340)

inline static constexpr unsigned int CLCKKOJBAFO_TypeDefinitionIndex = 73788;

	class CLCKKOJBAFO : public ::FMPCODLIOLG
	{
	public:
		::BDOPGBJHDKF* JHGMLMIIFCG; // 0x60
		::RPG::Client::AnimatorButton* PFBLCICMBBK; // 0x68
		::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0x70
		::RPG::GameCore::LevelUIComponent* FGCIJADADDA; // 0x78
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLCKKOJBAFO_CTOR_OFFSET))(this);
		}

		::System::Void OnAcquire(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLCKKOJBAFO_ONACQUIRE_OFFSET))(this, a1);
		}

		::System::Void OnReturn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLCKKOJBAFO_ONRETURN_OFFSET))(this);
		}

		::System::Void OIDJJLPLMHK(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLCKKOJBAFO_OIDJJLPLMHK_OFFSET))(this, a1);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLCKKOJBAFO__ONBIND_OFFSET))(this);
		}

		::System::Void _InitVarOnce()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLCKKOJBAFO__INITVARONCE_OFFSET))(this);
		}

		::System::Void _OnInitParams(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + CLCKKOJBAFO__ONINITPARAMS_OFFSET))(this, a1);
		}

		::System::Void ECOHEIAHIAO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLCKKOJBAFO_ECOHEIAHIAO_OFFSET))(this);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLCKKOJBAFO__SETUPVIEW_OFFSET))(this);
		}

		::System::Void EHEPDFDHDCK(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLCKKOJBAFO_EHEPDFDHDCK_OFFSET))(this, a1);
		}

		::System::Void FNKFKLJFODH(::RPG::Client::ShowBossInfoParam* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ShowBossInfoParam*))((::PBYTE)hIl2Cpp + CLCKKOJBAFO_FNKFKLJFODH_OFFSET))(this, a1);
		}

		::System::Void KANMCJHEFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLCKKOJBAFO_KANMCJHEFJJ_OFFSET))(this);
		}

		::System::Void NEOFNEBLKKL(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLCKKOJBAFO_NEOFNEBLKKL_OFFSET))(this, a1);
		}

		::System::Void LOFNKMINKEK(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLCKKOJBAFO_LOFNKMINKEK_OFFSET))(this, a1);
		}

		::System::Void AKFGMLPHBEO(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLCKKOJBAFO_AKFGMLPHBEO_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLCKKOJBAFO_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLCKKOJBAFO_AUTOREMOVECALLBACK_OFFSET))(this);
		}

	};
