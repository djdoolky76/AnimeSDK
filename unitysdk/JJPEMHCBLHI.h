#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OIKBIPICGDN.h"
#include "unitysdk/System/Object.h"
class AIALJPDDDKH;
class JDGIIPJCPID;
class JMHDGNNIFCA;
namespace RPG::GameCore { class BattleInstance; }

#define JJPEMHCBLHI_BJANNGKNKOB_OFFSET UNITYSDK_OFFSET(0xB20B150)
#define JJPEMHCBLHI_CTOR_OFFSET UNITYSDK_OFFSET(0xB20A9D0)
#define JJPEMHCBLHI_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB20A9E0)
#define JJPEMHCBLHI_GAGPFKMJHHN_OFFSET UNITYSDK_OFFSET(0xB20AE30)
#define JJPEMHCBLHI_GET_REPLAYDATAINSTANCE_OFFSET UNITYSDK_OFFSET(0xB20BE60)
#define JJPEMHCBLHI_HBGMMMGHIMD_OFFSET UNITYSDK_OFFSET(0xB20AE80)
#define JJPEMHCBLHI_HNEKFNFKGKH_OFFSET UNITYSDK_OFFSET(0xB20BE80)
#define JJPEMHCBLHI_IDJBIEKFHHF_OFFSET UNITYSDK_OFFSET(0xB20B540)
#define JJPEMHCBLHI_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xB20AAF0)
#define JJPEMHCBLHI_KAGMJCEMJFB_OFFSET UNITYSDK_OFFSET(0xB20B070)
#define JJPEMHCBLHI_LKHDJAIMGOE_OFFSET UNITYSDK_OFFSET(0xB20B270)
#define JJPEMHCBLHI_NIFLDAFMMCJ_OFFSET UNITYSDK_OFFSET(0xB20AB40)
#define JJPEMHCBLHI_ONHAEHAFEHE_OFFSET UNITYSDK_OFFSET(0xB20BB80)
#define JJPEMHCBLHI_PNKKDMGDJMH_OFFSET UNITYSDK_OFFSET(0xB20B310)
#define JJPEMHCBLHI_SET_REPLAYDATAINSTANCE_OFFSET UNITYSDK_OFFSET(0xB20BE70)

inline static constexpr unsigned int JJPEMHCBLHI_TypeDefinitionIndex = 58988;

	class JJPEMHCBLHI : public ::System::Object
	{
	public:
		::RPG::GameCore::BattleInstance* IFKCCHIFMOC; // 0x10
		::JDGIIPJCPID* _ReplayDataInstance_k__BackingField; // 0x18
		::AIALJPDDDKH* OKFEGNFJMKM; // 0x20
		::System::Int32 PGJDGJPCDGN; // 0x28
		::System::Boolean GDKONJGBFFM; // 0x2C
		::System::Byte _padding0[0x3];
		::OIKBIPICGDN GGOPGDPFJEJ; // 0x30
		::System::Int32 HJEJOIJFBDK; // 0x34
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJPEMHCBLHI_CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJPEMHCBLHI_DISPOSE_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJPEMHCBLHI_JLANKNHFKCN_OFFSET))(this);
		}

		::System::Void NIFLDAFMMCJ(::JDGIIPJCPID* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::JDGIIPJCPID*, ::System::Boolean))((::PBYTE)hIl2Cpp + JJPEMHCBLHI_NIFLDAFMMCJ_OFFSET))(this, a1, a2);
		}

		::System::Void HBGMMMGHIMD(::JDGIIPJCPID* a1, ::System::UInt32 a2, ::System::Int32 a3, ::OIKBIPICGDN a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::PVOID, ::JDGIIPJCPID*, ::System::UInt32, ::System::Int32, ::OIKBIPICGDN, ::System::Boolean))((::PBYTE)hIl2Cpp + JJPEMHCBLHI_HBGMMMGHIMD_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void GAGPFKMJHHN(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + JJPEMHCBLHI_GAGPFKMJHHN_OFFSET))(this, a1, a2);
		}

		::System::Void KAGMJCEMJFB(::RPG::GameCore::BattleInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleInstance*))((::PBYTE)hIl2Cpp + JJPEMHCBLHI_KAGMJCEMJFB_OFFSET))(this, a1);
		}

		::System::Void BJANNGKNKOB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJPEMHCBLHI_BJANNGKNKOB_OFFSET))(this);
		}

		::System::Void LKHDJAIMGOE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJPEMHCBLHI_LKHDJAIMGOE_OFFSET))(this);
		}

		::System::Void PNKKDMGDJMH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJPEMHCBLHI_PNKKDMGDJMH_OFFSET))(this);
		}

		::System::Void IDJBIEKFHHF(::JMHDGNNIFCA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JMHDGNNIFCA*))((::PBYTE)hIl2Cpp + JJPEMHCBLHI_IDJBIEKFHHF_OFFSET))(this, a1);
		}

		::System::Void ONHAEHAFEHE(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + JJPEMHCBLHI_ONHAEHAFEHE_OFFSET))(this, a1);
		}

		::JDGIIPJCPID* get_ReplayDataInstance()
		{
			return ((::JDGIIPJCPID*(*)(::PVOID))((::PBYTE)hIl2Cpp + JJPEMHCBLHI_GET_REPLAYDATAINSTANCE_OFFSET))(this);
		}

		::System::Void set_ReplayDataInstance(::JDGIIPJCPID* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JDGIIPJCPID*))((::PBYTE)hIl2Cpp + JJPEMHCBLHI_SET_REPLAYDATAINSTANCE_OFFSET))(this, a1);
		}

		::AIALJPDDDKH* HNEKFNFKGKH()
		{
			return ((::AIALJPDDDKH*(*)(::PVOID))((::PBYTE)hIl2Cpp + JJPEMHCBLHI_HNEKFNFKGKH_OFFSET))(this);
		}

	};
