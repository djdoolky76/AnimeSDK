#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/AsyncOperation.h"

namespace UnityEngine { class Object; }

#define UNITYENGINE_ASYNCINSTANTIATEOPERATION_CANCEL_OFFSET UNITYSDK_OFFSET(0x1EDA45A0)
#define UNITYENGINE_ASYNCINSTANTIATEOPERATION_GET_RESULT_OFFSET UNITYSDK_OFFSET(0x1EDA4580)
#define UNITYENGINE_ASYNCINSTANTIATEOPERATION_WAITFORCOMPLETION_OFFSET UNITYSDK_OFFSET(0x1EDA4590)
#define UNITYENGINE_ASYNCINSTANTIATEOPERATION__CTOR_OFFSET UNITYSDK_OFFSET(0x1EDA45B0)

namespace UnityEngine
{
	inline static constexpr unsigned int AsyncInstantiateOperation_TypeDefinitionIndex = 5322;

	class AsyncInstantiateOperation : public ::UnityEngine::AsyncOperation
	{
	public:
		::Il2CppArray<::UnityEngine::Object*>* m_Result; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ASYNCINSTANTIATEOPERATION__CTOR_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::Object*>* get_Result()
		{
			return ((::Il2CppArray<::UnityEngine::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ASYNCINSTANTIATEOPERATION_GET_RESULT_OFFSET))(this);
		}

		::System::Void WaitForCompletion()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ASYNCINSTANTIATEOPERATION_WAITFORCOMPLETION_OFFSET))(this);
		}

		::System::Void Cancel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ASYNCINSTANTIATEOPERATION_CANCEL_OFFSET))(this);
		}
	};
}
