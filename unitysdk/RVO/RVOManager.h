#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RVO/RVOAgentParam.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RVO/RVOObstacleParam.h"
namespace RVO { class RVOAgent; }
namespace RVO { class Simulator; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RVO_RVOMANAGER_ADDOBSTACLE_OFFSET UNITYSDK_OFFSET(0xB094DE0)
#define RVO_RVOMANAGER_ALLOCAGENT_OFFSET UNITYSDK_OFFSET(0xB094B80)
#define RVO_RVOMANAGER_CCTOR_OFFSET UNITYSDK_OFFSET(0xB0963E0)
#define RVO_RVOMANAGER_CTOR_OFFSET UNITYSDK_OFFSET(0xB094000)
#define RVO_RVOMANAGER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB094370)
#define RVO_RVOMANAGER_GET_SIMULATOR_OFFSET UNITYSDK_OFFSET(0xB0963D0)
#define RVO_RVOMANAGER_PROCESSOBSTACLES_OFFSET UNITYSDK_OFFSET(0xB096380)
#define RVO_RVOMANAGER_RELEASEAGENT_OFFSET UNITYSDK_OFFSET(0xB094CC0)
#define RVO_RVOMANAGER_SIMULATE_OFFSET UNITYSDK_OFFSET(0xB0946C0)

namespace RVO
{
	class RVOManager : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RVO::RVOAgent*>* _Agents; // 0x10
		::RVO::Simulator* _Simulator; // 0x18
		::System::Collections::Generic::List_1<::RVO::RVOAgent*>* _AgentPool; // 0x20
		static ::RVO::RVOAgentParam* StaticGet_InvalidParam()
		{
			return (::RVO::RVOAgentParam*)UnitySDK::FromName("RVO", "RVOManager")->GetStaticField(0xC860);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RVO_RVOMANAGER_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RVO_RVOMANAGER_CCTOR_OFFSET))();
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RVO_RVOMANAGER_DISPOSE_OFFSET))(this);
		}

		::System::Void Simulate(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RVO_RVOMANAGER_SIMULATE_OFFSET))(this, a1);
		}

		::RVO::RVOAgent* AllocAgent(::RVO::RVOAgentParam a1)
		{
			return ((::RVO::RVOAgent*(*)(::PVOID, ::RVO::RVOAgentParam))((::PBYTE)hIl2Cpp + RVO_RVOMANAGER_ALLOCAGENT_OFFSET))(this, a1);
		}

		::System::Void ReleaseAgent(::RVO::RVOAgent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RVO::RVOAgent*))((::PBYTE)hIl2Cpp + RVO_RVOMANAGER_RELEASEAGENT_OFFSET))(this, a1);
		}

		::System::Void AddObstacle(::RVO::RVOObstacleParam a1)
		{
			return ((::System::Void(*)(::PVOID, ::RVO::RVOObstacleParam))((::PBYTE)hIl2Cpp + RVO_RVOMANAGER_ADDOBSTACLE_OFFSET))(this, a1);
		}

		::System::Void ProcessObstacles()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RVO_RVOMANAGER_PROCESSOBSTACLES_OFFSET))(this);
		}

		::RVO::Simulator* get_Simulator()
		{
			return ((::RVO::Simulator*(*)(::PVOID))((::PBYTE)hIl2Cpp + RVO_RVOMANAGER_GET_SIMULATOR_OFFSET))(this);
		}

	};
}
