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

#define JNPPHBHEECA_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xBABF430)
#define JNPPHBHEECA_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xBABF500)
#define JNPPHBHEECA_CTOR_OFFSET UNITYSDK_OFFSET(0xBABF5A0)
#define JNPPHBHEECA_EMJLEJCLNLP_OFFSET UNITYSDK_OFFSET(0xBABF200)
#define JNPPHBHEECA_HIEIOKHNMPB_OFFSET UNITYSDK_OFFSET(0xBABF1B0)
#define JNPPHBHEECA_KANMCJHEFJJ_OFFSET UNITYSDK_OFFSET(0xBABF140)
#define JNPPHBHEECA_LKHFOAPIEHF_OFFSET UNITYSDK_OFFSET(0xBABF370)
#define JNPPHBHEECA__INITVARONCE_OFFSET UNITYSDK_OFFSET(0xBABEE70)
#define JNPPHBHEECA__ONBIND_OFFSET UNITYSDK_OFFSET(0xBABEC30)
#define JNPPHBHEECA__ONINITPARAMS_OFFSET UNITYSDK_OFFSET(0xBABF000)
#define JNPPHBHEECA__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0xBABF060)

inline static constexpr unsigned int JNPPHBHEECA_TypeDefinitionIndex = 73964;

	class JNPPHBHEECA : public ::FMPCODLIOLG
	{
	public:
		::PMCKIIMPIIA* MOHBBJBMNFF; // 0x60
		::KCEOHCCIPIE* KKPMEGLFAPM; // 0x68
		::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0x70
		::DOBHGKLLBEA* FPGCONDGEHH; // 0x78
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
