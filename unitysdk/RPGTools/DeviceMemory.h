#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPGTools/RUsage.h"
#include "unitysdk/RPGTools/TaskVmInfo.h"
namespace System { template <typename T> class Func_1; }
namespace System::Threading::Tasks { template <typename T> class Task_1; }

#define RPGTOOLS_DEVICEMEMORY_ASYNCGETMEMORYSIZEIMPL_OFFSET UNITYSDK_OFFSET(0x1CF2A100)
#define RPGTOOLS_DEVICEMEMORY_ASYNCGETMEMORYSIZE_OFFSET UNITYSDK_OFFSET(0x1CF2A190)
#define RPGTOOLS_DEVICEMEMORY_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CF2A2A0)
#define RPGTOOLS_DEVICEMEMORY_GETAPPMEMORYINKB_OFFSET UNITYSDK_OFFSET(0x1CF2A020)
#define RPGTOOLS_DEVICEMEMORY_GETAPPMEMORY_OFFSET UNITYSDK_OFFSET(0x1CF25B00)
#define RPGTOOLS_DEVICEMEMORY_GETCOMPRESSEDMEM_OFFSET UNITYSDK_OFFSET(0x1CF29FD0)
#define RPGTOOLS_DEVICEMEMORY_GETEXTERNALMEM_OFFSET UNITYSDK_OFFSET(0x1CF29FB0)
#define RPGTOOLS_DEVICEMEMORY_GETINTERNALMEM_OFFSET UNITYSDK_OFFSET(0x1CF29FA0)
#define RPGTOOLS_DEVICEMEMORY_GETOOMADJ_OFFSET UNITYSDK_OFFSET(0x1CF2A210)
#define RPGTOOLS_DEVICEMEMORY_GETOOMSCOREADJ_OFFSET UNITYSDK_OFFSET(0x1CF2A240)
#define RPGTOOLS_DEVICEMEMORY_GETOOMSCORE_OFFSET UNITYSDK_OFFSET(0x1CF2A1E0)
#define RPGTOOLS_DEVICEMEMORY_GETPHYSFOOTPRINTMEM_OFFSET UNITYSDK_OFFSET(0x1CF27980)
#define RPGTOOLS_DEVICEMEMORY_GETPURGEABLEVOLATILEMEM_OFFSET UNITYSDK_OFFSET(0x1CF29FE0)
#define RPGTOOLS_DEVICEMEMORY_GETRESIDENTMEM_OFFSET UNITYSDK_OFFSET(0x1CF29FC0)
#define RPGTOOLS_DEVICEMEMORY_GETRUSAGE_OFFSET UNITYSDK_OFFSET(0x1CF29FF0)
#define RPGTOOLS_DEVICEMEMORY_GETTASKVMINFO_OFFSET UNITYSDK_OFFSET(0x1CF2A270)
#define RPGTOOLS_DEVICEMEMORY_SETGCFREESPACEDIVISOR_OFFSET UNITYSDK_OFFSET(0x1CF2A0F0)
#define RPGTOOLS_DEVICEMEMORY_UPDATEIOSVMINFO_OFFSET UNITYSDK_OFFSET(0x1CF2A0E0)

namespace RPGTools
{
	inline static constexpr unsigned int DeviceMemory_TypeDefinitionIndex = 47955;

	class DeviceMemory : public ::System::Object
	{
	public:
		static ::System::Func_1<::System::Int32>** StaticGet__asyncGetMemoryDelegate()
		{
			return (::System::Func_1<::System::Int32>**)UnitySDK::FromName("RPGTools", "DeviceMemory")->GetStaticField(0x2EC60);
		}

		static ::System::Int32* StaticGet_oom_score()
		{
			return (::System::Int32*)UnitySDK::FromName("RPGTools", "DeviceMemory")->GetStaticField(0x9490);
		}

		static ::System::Int32* StaticGet_oom_score_adj()
		{
			return (::System::Int32*)UnitySDK::FromName("RPGTools", "DeviceMemory")->GetStaticField(0x9494);
		}

		static ::System::Int32* StaticGet_currentFrame()
		{
			return (::System::Int32*)UnitySDK::FromName("RPGTools", "DeviceMemory")->GetStaticField(0x9498);
		}

		static ::System::Int32* StaticGet_oom_adj()
		{
			return (::System::Int32*)UnitySDK::FromName("RPGTools", "DeviceMemory")->GetStaticField(0x949C);
		}

		static ::System::Boolean* StaticGet_DisableRecordMemory()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPGTools", "DeviceMemory")->GetStaticField(0x94A0);
		}

		static ::System::Int32* StaticGet_GetMode()
		{
			return (::System::Int32*)UnitySDK::FromName("RPGTools", "DeviceMemory")->GetStaticField(0x94A4);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPGTOOLS_DEVICEMEMORY_CCTOR_OFFSET))();
		}

		static ::System::Int32 GetInternalMem(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPGTOOLS_DEVICEMEMORY_GETINTERNALMEM_OFFSET))(a1);
		}

		static ::System::Int32 GetExternalMem(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPGTOOLS_DEVICEMEMORY_GETEXTERNALMEM_OFFSET))(a1);
		}

		static ::System::Int32 GetPhysFootPrintMem(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPGTOOLS_DEVICEMEMORY_GETPHYSFOOTPRINTMEM_OFFSET))(a1);
		}

		static ::System::Int32 GetResidentMem()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + RPGTOOLS_DEVICEMEMORY_GETRESIDENTMEM_OFFSET))();
		}

		static ::System::Int32 GetCompressedMem(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPGTOOLS_DEVICEMEMORY_GETCOMPRESSEDMEM_OFFSET))(a1);
		}

		static ::System::Int32 GetPurgeableVolatileMem(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPGTOOLS_DEVICEMEMORY_GETPURGEABLEVOLATILEMEM_OFFSET))(a1);
		}

		static ::RPGTools::RUsage GetRUsage(::System::Int32 a1)
		{
			return ((::RPGTools::RUsage(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPGTOOLS_DEVICEMEMORY_GETRUSAGE_OFFSET))(a1);
		}

		static ::System::Int32 GetAppMemory()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + RPGTOOLS_DEVICEMEMORY_GETAPPMEMORY_OFFSET))();
		}

		static ::System::IntPtr UpdateIosVmInfo()
		{
			return ((::System::IntPtr(*)())((::PBYTE)hIl2Cpp + RPGTOOLS_DEVICEMEMORY_UPDATEIOSVMINFO_OFFSET))();
		}

		static ::System::Int32 GetAppMemoryInKB()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + RPGTOOLS_DEVICEMEMORY_GETAPPMEMORYINKB_OFFSET))();
		}

		static ::System::Void SetGCFreeSpaceDivisor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPGTOOLS_DEVICEMEMORY_SETGCFREESPACEDIVISOR_OFFSET))(a1);
		}

		static ::System::Int32 AsyncGetMemorySizeImpl()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + RPGTOOLS_DEVICEMEMORY_ASYNCGETMEMORYSIZEIMPL_OFFSET))();
		}

		static ::System::Threading::Tasks::Task_1<::System::Int32>* AsyncGetMemorySize()
		{
			return ((::System::Threading::Tasks::Task_1<::System::Int32>*(*)())((::PBYTE)hIl2Cpp + RPGTOOLS_DEVICEMEMORY_ASYNCGETMEMORYSIZE_OFFSET))();
		}

		static ::System::Int32 GetOomScore(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPGTOOLS_DEVICEMEMORY_GETOOMSCORE_OFFSET))(a1);
		}

		static ::System::Int32 GetOomAdj(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPGTOOLS_DEVICEMEMORY_GETOOMADJ_OFFSET))(a1);
		}

		static ::System::Int32 GetOomScoreAdj(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPGTOOLS_DEVICEMEMORY_GETOOMSCOREADJ_OFFSET))(a1);
		}

		static ::RPGTools::TaskVmInfo GetTaskVmInfo(::System::IntPtr a1)
		{
			return ((::RPGTools::TaskVmInfo(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + RPGTOOLS_DEVICEMEMORY_GETTASKVMINFO_OFFSET))(a1);
		}

	};
}
