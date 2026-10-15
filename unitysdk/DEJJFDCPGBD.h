#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PJPIEKNGCMC.h"
#include "unitysdk/RPG/GameCore/ThreadTaskType.h"
class LJFHKAJPFNE;
class OIDDJJLHGKO;
namespace RPG::GameCore { class ThreadTaskConfig; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DEJJFDCPGBD_CLFJFNPEDFJ_OFFSET UNITYSDK_OFFSET(0xE50EBB0)
#define DEJJFDCPGBD_COLLECT_OFFSET UNITYSDK_OFFSET(0xE50EC50)
#define DEJJFDCPGBD_CTOR_OFFSET UNITYSDK_OFFSET(0xE50E6C0)
#define DEJJFDCPGBD_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE50EC00)
#define DEJJFDCPGBD_FLUSH_OFFSET UNITYSDK_OFFSET(0xE50EFD0)
#define DEJJFDCPGBD_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0xE50F110)
#define DEJJFDCPGBD_HGACIJOJEND_OFFSET UNITYSDK_OFFSET(0xE50E9F0)
#define DEJJFDCPGBD_HJKIHKDOJHJ_OFFSET UNITYSDK_OFFSET(0xE50E8B0)
#define DEJJFDCPGBD_HPDIGBHFMPG_OFFSET UNITYSDK_OFFSET(0xE50E7A0)
#define DEJJFDCPGBD_IIFINBAGBDG_OFFSET UNITYSDK_OFFSET(0xE50E740)
#define DEJJFDCPGBD_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xE50F0D0)
#define DEJJFDCPGBD_ONENABLE_OFFSET UNITYSDK_OFFSET(0xE50F090)
#define DEJJFDCPGBD_SET_CONFIG_OFFSET UNITYSDK_OFFSET(0xE50F120)

inline static constexpr unsigned int DEJJFDCPGBD_TypeDefinitionIndex = 71094;

	class DEJJFDCPGBD
	{
	public:
		::LJFHKAJPFNE* IMNPNIIDKMF; // 0x40
		::System::Collections::Generic::List_1<::PJPIEKNGCMC>* PEAGOBBPIEK; // 0x48
		::RPG::GameCore::ThreadTaskConfig* _Config_k__BackingField; // 0x50
		::System::Collections::Generic::HashSet_1<::PJPIEKNGCMC>* GDPEKBPKAEI; // 0x58
		::RPG::GameCore::ThreadTaskType ADBKFDIGBOO; // 0x60
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEJJFDCPGBD_CTOR_OFFSET))(this);
		}

		::System::Void HPDIGBHFMPG(::LJFHKAJPFNE* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::LJFHKAJPFNE*, ::System::Int32))((::PBYTE)hIl2Cpp + DEJJFDCPGBD_HPDIGBHFMPG_OFFSET))(this, a1, a2);
		}

		::System::Void HJKIHKDOJHJ(::PJPIEKNGCMC a1)
		{
			return ((::System::Void(*)(::PVOID, ::PJPIEKNGCMC))((::PBYTE)hIl2Cpp + DEJJFDCPGBD_HJKIHKDOJHJ_OFFSET))(this, a1);
		}

		::System::Void HGACIJOJEND(::OIDDJJLHGKO* a1, ::PJPIEKNGCMC a2)
		{
			return ((::System::Void(*)(::PVOID, ::OIDDJJLHGKO*, ::PJPIEKNGCMC))((::PBYTE)hIl2Cpp + DEJJFDCPGBD_HGACIJOJEND_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEJJFDCPGBD_DISPOSE_OFFSET))(this);
		}

		::System::Void Collect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEJJFDCPGBD_COLLECT_OFFSET))(this);
		}

		::System::Void Flush()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEJJFDCPGBD_FLUSH_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEJJFDCPGBD_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEJJFDCPGBD_ONDISABLE_OFFSET))(this);
		}

		::System::Single CLFJFNPEDFJ()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + DEJJFDCPGBD_CLFJFNPEDFJ_OFFSET))(this);
		}

		::System::Void IIFINBAGBDG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEJJFDCPGBD_IIFINBAGBDG_OFFSET))(this);
		}

		::RPG::GameCore::ThreadTaskConfig* get_Config()
		{
			return ((::RPG::GameCore::ThreadTaskConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + DEJJFDCPGBD_GET_CONFIG_OFFSET))(this);
		}

		::System::Void set_Config(::RPG::GameCore::ThreadTaskConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ThreadTaskConfig*))((::PBYTE)hIl2Cpp + DEJJFDCPGBD_SET_CONFIG_OFFSET))(this, a1);
		}

	};
