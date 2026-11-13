#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace UnityEngine::AI { class AsyncNavMeshSimulator; }

#define UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_PREFVELOCITYFINISHEDCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x20917220)
#define UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_PREFVELOCITYFINISHEDCALLBACK_CTOR_OFFSET UNITYSDK_OFFSET(0x209171B0)
#define UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_PREFVELOCITYFINISHEDCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x20917250)
#define UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_PREFVELOCITYFINISHEDCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x20916D90)

namespace UnityEngine::AI
{
	inline static constexpr unsigned int AsyncNavMeshSimulator_PrefVelocityFinishedCallback_TypeDefinitionIndex = 5677;

	class AsyncNavMeshSimulator_PrefVelocityFinishedCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_PREFVELOCITYFINISHEDCALLBACK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::UnityEngine::AI::AsyncNavMeshSimulator* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AI::AsyncNavMeshSimulator*))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_PREFVELOCITYFINISHEDCALLBACK_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::UnityEngine::AI::AsyncNavMeshSimulator* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::UnityEngine::AI::AsyncNavMeshSimulator*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_PREFVELOCITYFINISHEDCALLBACK_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_ASYNCNAVMESHSIMULATOR_PREFVELOCITYFINISHEDCALLBACK_ENDINVOKE_OFFSET))(this, a1);
		}

	};
}
