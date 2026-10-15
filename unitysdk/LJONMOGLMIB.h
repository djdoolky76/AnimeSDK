#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ThreadTaskType.h"
#include "unitysdk/EOOIJAGNMHI.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
namespace RPG::GameCore { class ThreadTaskConfig; }

#define LJONMOGLMIB_COLLECT_OFFSET UNITYSDK_OFFSET(0xB71D400)
#define LJONMOGLMIB_CTOR_OFFSET UNITYSDK_OFFSET(0xB71D0F0)
#define LJONMOGLMIB_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB71D1D0)
#define LJONMOGLMIB_EFKFDDOCCJG_OFFSET UNITYSDK_OFFSET(0xB71D2D0)
#define LJONMOGLMIB_FLUSH_OFFSET UNITYSDK_OFFSET(0xB71D480)
#define LJONMOGLMIB_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0xB71D630)
#define LJONMOGLMIB_IEHOPDKOMMO_OFFSET UNITYSDK_OFFSET(0xB71D320)
#define LJONMOGLMIB_IIFINBAGBDG_OFFSET UNITYSDK_OFFSET(0xB71D170)
#define LJONMOGLMIB_ILMDFBMODDI_OFFSET UNITYSDK_OFFSET(0xB71D5D0)
#define LJONMOGLMIB_LHOGKMNEGGP_OFFSET UNITYSDK_OFFSET(0xB71D3C0)
#define LJONMOGLMIB_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xB71D590)
#define LJONMOGLMIB_ONENABLE_OFFSET UNITYSDK_OFFSET(0xB71D550)
#define LJONMOGLMIB_PBBNMGPIMFM_OFFSET UNITYSDK_OFFSET(0xB71D220)
#define LJONMOGLMIB_SET_CONFIG_OFFSET UNITYSDK_OFFSET(0xB71D640)

inline static constexpr unsigned int LJONMOGLMIB_TypeDefinitionIndex = 71096;

	class LJONMOGLMIB
	{
	public:
		::RPG::GameCore::ThreadTaskConfig* _Config_k__BackingField; // 0x38
		::RPG::GameCore::ThreadTaskType ADBKFDIGBOO; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJONMOGLMIB_CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJONMOGLMIB_DISPOSE_OFFSET))(this);
		}

		::System::Void PBBNMGPIMFM(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LJONMOGLMIB_PBBNMGPIMFM_OFFSET))(this, a1);
		}

		::System::Void EFKFDDOCCJG(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LJONMOGLMIB_EFKFDDOCCJG_OFFSET))(this, a1);
		}

		::System::Void IEHOPDKOMMO(::System::Int32 a1, ::EOOIJAGNMHI a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::EOOIJAGNMHI))((::PBYTE)hIl2Cpp + LJONMOGLMIB_IEHOPDKOMMO_OFFSET))(this, a1, a2);
		}

		::System::Void LHOGKMNEGGP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJONMOGLMIB_LHOGKMNEGGP_OFFSET))(this);
		}

		::System::Void Collect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJONMOGLMIB_COLLECT_OFFSET))(this);
		}

		::System::Void Flush()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJONMOGLMIB_FLUSH_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJONMOGLMIB_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJONMOGLMIB_ONDISABLE_OFFSET))(this);
		}

		::Unity::Collections::NativeArray_1<::EOOIJAGNMHI> ILMDFBMODDI()
		{
			return ((::Unity::Collections::NativeArray_1<::EOOIJAGNMHI>(*)(::PVOID))((::PBYTE)hIl2Cpp + LJONMOGLMIB_ILMDFBMODDI_OFFSET))(this);
		}

		::System::Void IIFINBAGBDG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJONMOGLMIB_IIFINBAGBDG_OFFSET))(this);
		}

		::RPG::GameCore::ThreadTaskConfig* get_Config()
		{
			return ((::RPG::GameCore::ThreadTaskConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + LJONMOGLMIB_GET_CONFIG_OFFSET))(this);
		}

		::System::Void set_Config(::RPG::GameCore::ThreadTaskConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ThreadTaskConfig*))((::PBYTE)hIl2Cpp + LJONMOGLMIB_SET_CONFIG_OFFSET))(this, a1);
		}

	};
