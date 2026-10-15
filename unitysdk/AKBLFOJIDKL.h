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

#define AKBLFOJIDKL_ANKFDDMJKDA_OFFSET UNITYSDK_OFFSET(0x12CC4E10)
#define AKBLFOJIDKL_CLFJFNPEDFJ_OFFSET UNITYSDK_OFFSET(0x12CC4DC0)
#define AKBLFOJIDKL_COLLECT_OFFSET UNITYSDK_OFFSET(0x12CC4FD0)
#define AKBLFOJIDKL_CTOR_OFFSET UNITYSDK_OFFSET(0x12CC46A0)
#define AKBLFOJIDKL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12CC4E70)
#define AKBLFOJIDKL_FLUSH_OFFSET UNITYSDK_OFFSET(0x12CC5260)
#define AKBLFOJIDKL_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0x12CC54B0)
#define AKBLFOJIDKL_HGACIJOJEND_OFFSET UNITYSDK_OFFSET(0x12CC4B60)
#define AKBLFOJIDKL_HJKIHKDOJHJ_OFFSET UNITYSDK_OFFSET(0x12CC4A50)
#define AKBLFOJIDKL_HPDIGBHFMPG_OFFSET UNITYSDK_OFFSET(0x12CC4780)
#define AKBLFOJIDKL_IIFINBAGBDG_OFFSET UNITYSDK_OFFSET(0x12CC4720)
#define AKBLFOJIDKL_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x12CC5470)
#define AKBLFOJIDKL_ONENABLE_OFFSET UNITYSDK_OFFSET(0x12CC5430)
#define AKBLFOJIDKL_SET_CONFIG_OFFSET UNITYSDK_OFFSET(0x12CC54C0)

inline static constexpr unsigned int AKBLFOJIDKL_TypeDefinitionIndex = 71092;

	class AKBLFOJIDKL
	{
	public:
		::MEFABEACDHL* JIMMMLLHKAM; // 0x40
		::LJFHKAJPFNE* IMNPNIIDKMF; // 0x48
		::System::Collections::Generic::List_1<::PJPIEKNGCMC>* PEAGOBBPIEK; // 0x50
		::RPG::GameCore::ThreadTaskConfig* _Config_k__BackingField; // 0x58
		::System::Collections::Generic::HashSet_1<::PJPIEKNGCMC>* GDPEKBPKAEI; // 0x60
		::RPG::GameCore::ThreadTaskType ADBKFDIGBOO; // 0x68
		::System::Int32 NGGLDOPKGLM; // 0x6C
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
