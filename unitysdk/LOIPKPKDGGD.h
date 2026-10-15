#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/RPG/GameCore/BattleScreenEffectType.h"
class HJJEHFCMFIP;
namespace RPG::GameCore { class BattleInstance; }
namespace RPG::GameCore { class ShowBattleScreenEffect; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LOIPKPKDGGD_AMFBKGEOBND_OFFSET UNITYSDK_OFFSET(0xB7FF850)
#define LOIPKPKDGGD_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xB7FF910)
#define LOIPKPKDGGD_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xB7FF9E0)
#define LOIPKPKDGGD_CFGNMLEGOOL_OFFSET UNITYSDK_OFFSET(0xB7FF3E0)
#define LOIPKPKDGGD_CTOR_OFFSET UNITYSDK_OFFSET(0xB7FFA80)
#define LOIPKPKDGGD_KPJKOMEMJAB_OFFSET UNITYSDK_OFFSET(0xB7FF600)
#define LOIPKPKDGGD_NIJJPBOIGBI_OFFSET UNITYSDK_OFFSET(0xB7FF2C0)
#define LOIPKPKDGGD_NOAALDOOBLN_OFFSET UNITYSDK_OFFSET(0xB7FF6B0)

inline static constexpr unsigned int LOIPKPKDGGD_TypeDefinitionIndex = 71853;

	class LOIPKPKDGGD : public ::FMPCODLIOLG
	{
	public:
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::BattleScreenEffectType, ::HJJEHFCMFIP*>* KCNIOEPMBEJ; // 0x60
		::RPG::GameCore::BattleInstance* IFKCCHIFMOC; // 0x68
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOIPKPKDGGD_CTOR_OFFSET))(this);
		}

		::System::Void NIJJPBOIGBI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOIPKPKDGGD_NIJJPBOIGBI_OFFSET))(this);
		}

		::System::Void CFGNMLEGOOL(::RPG::GameCore::ShowBattleScreenEffect* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ShowBattleScreenEffect*))((::PBYTE)hIl2Cpp + LOIPKPKDGGD_CFGNMLEGOOL_OFFSET))(this, a1);
		}

		::HJJEHFCMFIP* KPJKOMEMJAB(::RPG::GameCore::BattleScreenEffectType a1)
		{
			return ((::HJJEHFCMFIP*(*)(::PVOID, ::RPG::GameCore::BattleScreenEffectType))((::PBYTE)hIl2Cpp + LOIPKPKDGGD_KPJKOMEMJAB_OFFSET))(this, a1);
		}

		::HJJEHFCMFIP* NOAALDOOBLN(::RPG::GameCore::BattleScreenEffectType a1)
		{
			return ((::HJJEHFCMFIP*(*)(::PVOID, ::RPG::GameCore::BattleScreenEffectType))((::PBYTE)hIl2Cpp + LOIPKPKDGGD_NOAALDOOBLN_OFFSET))(this, a1);
		}

		::System::Void AMFBKGEOBND(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LOIPKPKDGGD_AMFBKGEOBND_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOIPKPKDGGD_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOIPKPKDGGD_AUTOREMOVECALLBACK_OFFSET))(this);
		}

	};
