#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/IGKFNIEJGLM.h"
class DOBHGKLLBEA;
class KCEOHCCIPIE;
class PMCKIIMPIIA;
namespace RPG::Client { class BattleSilverWolf999CustomUIData; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }

#define JNPPHBHEECA_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x1B4CED60)
#define JNPPHBHEECA_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x1B4CEE30)
#define JNPPHBHEECA_CTOR_OFFSET UNITYSDK_OFFSET(0x1B4CEED0)
#define JNPPHBHEECA_EMJLEJCLNLP_OFFSET UNITYSDK_OFFSET(0x1B4CEB30)
#define JNPPHBHEECA_HIEIOKHNMPB_OFFSET UNITYSDK_OFFSET(0x1B4CEAE0)
#define JNPPHBHEECA_KANMCJHEFJJ_OFFSET UNITYSDK_OFFSET(0x1B4CEA70)
#define JNPPHBHEECA_LKHFOAPIEHF_OFFSET UNITYSDK_OFFSET(0x1B4CECA0)
#define JNPPHBHEECA__INITVARONCE_OFFSET UNITYSDK_OFFSET(0x1B4CE7A0)
#define JNPPHBHEECA__ONBIND_OFFSET UNITYSDK_OFFSET(0x1B4CE560)
#define JNPPHBHEECA__ONINITPARAMS_OFFSET UNITYSDK_OFFSET(0x1B4CE930)
#define JNPPHBHEECA__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x1B4CE990)

inline static constexpr unsigned int JNPPHBHEECA_TypeDefinitionIndex = 73963;

	class JNPPHBHEECA : public ::FMPCODLIOLG
	{
	public:
		::DOBHGKLLBEA* FPGCONDGEHH; // 0x60
		::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0x68
		::PMCKIIMPIIA* MOHBBJBMNFF; // 0x70
		::KCEOHCCIPIE* KKPMEGLFAPM; // 0x78
		::RPG::Client::BattleSilverWolf999CustomUIData* APPIHABBCGK; // 0x80
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNPPHBHEECA_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNPPHBHEECA__ONBIND_OFFSET))(this);
		}

		::System::Void _InitVarOnce()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNPPHBHEECA__INITVARONCE_OFFSET))(this);
		}

		::System::Void _OnInitParams(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + JNPPHBHEECA__ONINITPARAMS_OFFSET))(this, a1);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNPPHBHEECA__SETUPVIEW_OFFSET))(this);
		}

		::System::Void KANMCJHEFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNPPHBHEECA_KANMCJHEFJJ_OFFSET))(this);
		}

		::System::Void HIEIOKHNMPB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNPPHBHEECA_HIEIOKHNMPB_OFFSET))(this);
		}

		::System::Void EMJLEJCLNLP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNPPHBHEECA_EMJLEJCLNLP_OFFSET))(this);
		}

		::System::Void LKHFOAPIEHF(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JNPPHBHEECA_LKHFOAPIEHF_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNPPHBHEECA_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNPPHBHEECA_AUTOREMOVECALLBACK_OFFSET))(this);
		}

	};
