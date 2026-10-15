#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PJPIEKNGCMC.h"
#include "unitysdk/RPG/GameCore/ThreadTaskType.h"
class LJFHKAJPFNE;
class MEFABEACDHL;
class OIDDJJLHGKO;
namespace RPG::GameCore { class ThreadTaskConfig; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define AKBLFOJIDKL_ANKFDDMJKDA_OFFSET UNITYSDK_OFFSET(0x12CC9970)
#define AKBLFOJIDKL_CLFJFNPEDFJ_OFFSET UNITYSDK_OFFSET(0x12CC9920)
#define AKBLFOJIDKL_COLLECT_OFFSET UNITYSDK_OFFSET(0x12CC9B30)
#define AKBLFOJIDKL_CTOR_OFFSET UNITYSDK_OFFSET(0x12CC9200)
#define AKBLFOJIDKL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12CC99D0)
#define AKBLFOJIDKL_FLUSH_OFFSET UNITYSDK_OFFSET(0x12CC9DC0)
#define AKBLFOJIDKL_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0x12CCA020)
#define AKBLFOJIDKL_HGACIJOJEND_OFFSET UNITYSDK_OFFSET(0x12CC96C0)
#define AKBLFOJIDKL_HJKIHKDOJHJ_OFFSET UNITYSDK_OFFSET(0x12CC95B0)
#define AKBLFOJIDKL_HPDIGBHFMPG_OFFSET UNITYSDK_OFFSET(0x12CC92E0)
#define AKBLFOJIDKL_IIFINBAGBDG_OFFSET UNITYSDK_OFFSET(0x12CC9280)
#define AKBLFOJIDKL_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x12CC9FE0)
#define AKBLFOJIDKL_ONENABLE_OFFSET UNITYSDK_OFFSET(0x12CC9FA0)
#define AKBLFOJIDKL_SET_CONFIG_OFFSET UNITYSDK_OFFSET(0x12CCA030)

	class AKBLFOJIDKL
	{
	public:
		::MEFABEACDHL* JIMMMLLHKAM; // 0x40
		::System::Collections::Generic::HashSet_1<::PJPIEKNGCMC>* GDPEKBPKAEI; // 0x48
		::LJFHKAJPFNE* IMNPNIIDKMF; // 0x50
		::System::Collections::Generic::List_1<::PJPIEKNGCMC>* PEAGOBBPIEK; // 0x58
		::RPG::GameCore::ThreadTaskConfig* _Config_k__BackingField; // 0x60
		::System::Int32 NGGLDOPKGLM; // 0x68
		::RPG::GameCore::ThreadTaskType ADBKFDIGBOO; // 0x6C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKBLFOJIDKL_CTOR_OFFSET))(this);
		}

		::System::Void HPDIGBHFMPG(::LJFHKAJPFNE* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::LJFHKAJPFNE*, ::System::Int32))((::PBYTE)hIl2Cpp + AKBLFOJIDKL_HPDIGBHFMPG_OFFSET))(this, a1, a2);
		}

		::System::Void HJKIHKDOJHJ(::PJPIEKNGCMC a1)
		{
			return ((::System::Void(*)(::PVOID, ::PJPIEKNGCMC))((::PBYTE)hIl2Cpp + AKBLFOJIDKL_HJKIHKDOJHJ_OFFSET))(this, a1);
		}

		::System::Void HGACIJOJEND(::System::Int32 a1, ::System::Int32 a2, ::System::Boolean a3, ::System::Boolean a4, ::OIDDJJLHGKO* a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Boolean, ::OIDDJJLHGKO*))((::PBYTE)hIl2Cpp + AKBLFOJIDKL_HGACIJOJEND_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void ANKFDDMJKDA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKBLFOJIDKL_ANKFDDMJKDA_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKBLFOJIDKL_DISPOSE_OFFSET))(this);
		}

		::System::Void Collect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKBLFOJIDKL_COLLECT_OFFSET))(this);
		}

		::System::Void Flush()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKBLFOJIDKL_FLUSH_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKBLFOJIDKL_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKBLFOJIDKL_ONDISABLE_OFFSET))(this);
		}

		::System::Single CLFJFNPEDFJ()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + AKBLFOJIDKL_CLFJFNPEDFJ_OFFSET))(this);
		}

		::System::Void IIFINBAGBDG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKBLFOJIDKL_IIFINBAGBDG_OFFSET))(this);
		}

		::RPG::GameCore::ThreadTaskConfig* get_Config()
		{
			return ((::RPG::GameCore::ThreadTaskConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKBLFOJIDKL_GET_CONFIG_OFFSET))(this);
		}

		::System::Void set_Config(::RPG::GameCore::ThreadTaskConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ThreadTaskConfig*))((::PBYTE)hIl2Cpp + AKBLFOJIDKL_SET_CONFIG_OFFSET))(this, a1);
		}

	};
