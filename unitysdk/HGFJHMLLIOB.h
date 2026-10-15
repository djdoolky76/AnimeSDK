#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AliveState.h"
#include "unitysdk/System/Object.h"
class FJKALHFIOHD;
class IAPDBOKPNGL;
class JHOLJJOHPDN;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameWorld; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HGFJHMLLIOB_CTOR_OFFSET UNITYSDK_OFFSET(0x15C98F10)
#define HGFJHMLLIOB_GCMKLJMJACF_OFFSET UNITYSDK_OFFSET(0x15C98820)
#define HGFJHMLLIOB_GET_SNAPSHOTPROCESSOR_OFFSET UNITYSDK_OFFSET(0x15C98EF0)
#define HGFJHMLLIOB_HNNAKMDPCIN_OFFSET UNITYSDK_OFFSET(0x15C98C20)
#define HGFJHMLLIOB_IFJNKKGMNEL_OFFSET UNITYSDK_OFFSET(0x15C98E80)
#define HGFJHMLLIOB_LAEHGNCPNCI_OFFSET UNITYSDK_OFFSET(0x15C98B80)
#define HGFJHMLLIOB_LPJDDGKPEHK_OFFSET UNITYSDK_OFFSET(0x15C989A0)
#define HGFJHMLLIOB_NFNCHOJAFEF_OFFSET UNITYSDK_OFFSET(0x15C98630)
#define HGFJHMLLIOB_OADLABMHFHK_OFFSET UNITYSDK_OFFSET(0x15C98510)
#define HGFJHMLLIOB_ONPLUGININIT_OFFSET UNITYSDK_OFFSET(0x15C98310)
#define HGFJHMLLIOB_ONPLUGINUNINIT_OFFSET UNITYSDK_OFFSET(0x15C98410)
#define HGFJHMLLIOB_SET_SNAPSHOTPROCESSOR_OFFSET UNITYSDK_OFFSET(0x15C98F00)

	class HGFJHMLLIOB : public ::System::Object
	{
	public:
		::RPG::GameCore::GameWorld* IMMBMILPPFB; // 0x10
		::FJKALHFIOHD* _SnapshotProcessor_k__BackingField; // 0x18
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GameEntity*, ::JHOLJJOHPDN*>* CNMPKHNBCFE; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGFJHMLLIOB_CTOR_OFFSET))(this);
		}

		::System::Void OnPluginInit(::RPG::GameCore::GameWorld* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameWorld*))((::PBYTE)hIl2Cpp + HGFJHMLLIOB_ONPLUGININIT_OFFSET))(this, a1);
		}

		::System::Void OnPluginUninit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGFJHMLLIOB_ONPLUGINUNINIT_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* OADLABMHFHK(::RPG::GameCore::GameEntity* a1)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + HGFJHMLLIOB_OADLABMHFHK_OFFSET))(this, a1);
		}

		::RPG::GameCore::GameEntity* NFNCHOJAFEF(::RPG::GameCore::GameEntity* a1, ::IAPDBOKPNGL* a2)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::IAPDBOKPNGL*))((::PBYTE)hIl2Cpp + HGFJHMLLIOB_NFNCHOJAFEF_OFFSET))(this, a1, a2);
		}

		::System::Void LPJDDGKPEHK(::RPG::GameCore::GameEntity* a1, ::IAPDBOKPNGL* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::IAPDBOKPNGL*))((::PBYTE)hIl2Cpp + HGFJHMLLIOB_LPJDDGKPEHK_OFFSET))(this, a1, a2);
		}

		::System::Void LAEHGNCPNCI(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + HGFJHMLLIOB_LAEHGNCPNCI_OFFSET))(this, a1);
		}

		::JHOLJJOHPDN* GCMKLJMJACF(::RPG::GameCore::GameEntity* a1)
		{
			return ((::JHOLJJOHPDN*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + HGFJHMLLIOB_GCMKLJMJACF_OFFSET))(this, a1);
		}

		::System::Void HNNAKMDPCIN(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::AliveState a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::AliveState))((::PBYTE)hIl2Cpp + HGFJHMLLIOB_HNNAKMDPCIN_OFFSET))(this, a1, a2, a3);
		}

		static ::RPG::GameCore::GameEntity* IFJNKKGMNEL(::RPG::GameCore::GameEntity* a1)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + HGFJHMLLIOB_IFJNKKGMNEL_OFFSET))(a1);
		}

		::FJKALHFIOHD* get_SnapshotProcessor()
		{
			return ((::FJKALHFIOHD*(*)(::PVOID))((::PBYTE)hIl2Cpp + HGFJHMLLIOB_GET_SNAPSHOTPROCESSOR_OFFSET))(this);
		}

		::System::Void set_SnapshotProcessor(::FJKALHFIOHD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FJKALHFIOHD*))((::PBYTE)hIl2Cpp + HGFJHMLLIOB_SET_SNAPSHOTPROCESSOR_OFFSET))(this, a1);
		}

	};
