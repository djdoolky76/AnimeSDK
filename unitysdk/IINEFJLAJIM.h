#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"
class IINEFJLAJIM;
class KDOJKNPADNC;
class MACJPMIDFNL;
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define IINEFJLAJIM_AHDBLFGENOF_OFFSET UNITYSDK_OFFSET(0x164458D0)
#define IINEFJLAJIM_AKOJHBDFOPN_OFFSET UNITYSDK_OFFSET(0x16445C60)
#define IINEFJLAJIM_BEFCGMHDBOP_OFFSET UNITYSDK_OFFSET(0x16446120)
#define IINEFJLAJIM_CTOR_OFFSET UNITYSDK_OFFSET(0x16446530)
#define IINEFJLAJIM_DCDHODCAMGL_OFFSET UNITYSDK_OFFSET(0x164457A0)
#define IINEFJLAJIM_DIPADOPIAGJ_OFFSET UNITYSDK_OFFSET(0x16445DD0)
#define IINEFJLAJIM_GET_ISPAUSE_OFFSET UNITYSDK_OFFSET(0x16446490)
#define IINEFJLAJIM_GGBLHEHJBDO_OFFSET UNITYSDK_OFFSET(0x164464B0)
#define IINEFJLAJIM_GPOLBDHKLCI_OFFSET UNITYSDK_OFFSET(0x164462E0)
#define IINEFJLAJIM_INADNJLCMKH_OFFSET UNITYSDK_OFFSET(0x16445AC0)
#define IINEFJLAJIM_JDDAGHGHPGP_OFFSET UNITYSDK_OFFSET(0x16446050)
#define IINEFJLAJIM_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x16445650)
#define IINEFJLAJIM_JMMIPPDNFOC_OFFSET UNITYSDK_OFFSET(0x16445370)
#define IINEFJLAJIM_KOEAIIEENCF_OFFSET UNITYSDK_OFFSET(0x16445B80)
#define IINEFJLAJIM_LBHAEHPPPOC_OFFSET UNITYSDK_OFFSET(0x16445A00)
#define IINEFJLAJIM_LKFBHLBHPDI_OFFSET UNITYSDK_OFFSET(0x16445160)
#define IINEFJLAJIM_NFDDNMDDIFA_OFFSET UNITYSDK_OFFSET(0x16445D40)
#define IINEFJLAJIM_NFIKODJDGCF_OFFSET UNITYSDK_OFFSET(0x16445F80)
#define IINEFJLAJIM_SET_ISPAUSE_OFFSET UNITYSDK_OFFSET(0x164464A0)
#define IINEFJLAJIM__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x16445080)

inline static constexpr unsigned int IINEFJLAJIM_TypeDefinitionIndex = 64238;

	class IINEFJLAJIM : public ::RPG::Client::BaseModule
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::MACJPMIDFNL*>* KIKILAIHAPF; // 0x10
		::System::Int32 NJIBJJCKLOL; // 0x18
		::System::Boolean _IsPause_k__BackingField; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IINEFJLAJIM_CTOR_OFFSET))(this);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IINEFJLAJIM__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void LKFBHLBHPDI(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IINEFJLAJIM_LKFBHLBHPDI_OFFSET))(this, a1);
		}

		::System::Void JMMIPPDNFOC(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IINEFJLAJIM_JMMIPPDNFOC_OFFSET))(this, a1);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IINEFJLAJIM_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void DCDHODCAMGL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IINEFJLAJIM_DCDHODCAMGL_OFFSET))(this);
		}

		::System::Void AHDBLFGENOF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IINEFJLAJIM_AHDBLFGENOF_OFFSET))(this);
		}

		::System::Void LBHAEHPPPOC(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IINEFJLAJIM_LBHAEHPPPOC_OFFSET))(this, a1);
		}

		::System::Void INADNJLCMKH(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IINEFJLAJIM_INADNJLCMKH_OFFSET))(this, a1);
		}

		::System::Void KOEAIIEENCF(::System::UInt32 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Single))((::PBYTE)hIl2Cpp + IINEFJLAJIM_KOEAIIEENCF_OFFSET))(this, a1, a2);
		}

		::System::Void AKOJHBDFOPN(::System::UInt32 a1, ::System::UInt32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + IINEFJLAJIM_AKOJHBDFOPN_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean NFDDNMDDIFA(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IINEFJLAJIM_NFDDNMDDIFA_OFFSET))(this, a1);
		}

		::MACJPMIDFNL* DIPADOPIAGJ(::System::UInt32 a1, ::Il2CppArray<::System::UInt32>* a2, ::Il2CppArray<::System::UInt32>* a3, ::System::Single a4, ::System::Int32 a5, ::System::Single a6, ::System::Int32 a7)
		{
			return ((::MACJPMIDFNL*(*)(::PVOID, ::System::UInt32, ::Il2CppArray<::System::UInt32>*, ::Il2CppArray<::System::UInt32>*, ::System::Single, ::System::Int32, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + IINEFJLAJIM_DIPADOPIAGJ_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Boolean NFIKODJDGCF(::System::UInt32 a1, ::KDOJKNPADNC* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::KDOJKNPADNC*))((::PBYTE)hIl2Cpp + IINEFJLAJIM_NFIKODJDGCF_OFFSET))(this, a1, a2);
		}

		::System::Void JDDAGHGHPGP(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + IINEFJLAJIM_JDDAGHGHPGP_OFFSET))(this, a1, a2);
		}

		::System::Void BEFCGMHDBOP(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + IINEFJLAJIM_BEFCGMHDBOP_OFFSET))(this, a1);
		}

		::System::Void GPOLBDHKLCI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IINEFJLAJIM_GPOLBDHKLCI_OFFSET))(this);
		}

		::System::Boolean get_IsPause()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IINEFJLAJIM_GET_ISPAUSE_OFFSET))(this);
		}

		::System::Void set_IsPause(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IINEFJLAJIM_SET_ISPAUSE_OFFSET))(this, a1);
		}

		static ::IINEFJLAJIM* GGBLHEHJBDO()
		{
			return ((::IINEFJLAJIM*(*)())((::PBYTE)hIl2Cpp + IINEFJLAJIM_GGBLHEHJBDO_OFFSET))();
		}

	};
