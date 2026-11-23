#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Object.h"

namespace UnityEngine { class AudioClip_BC8827C8DB390637; }
namespace UnityEngine { class AudioClip_FB1CDA89D57E2B93; }

#define UNITYENGINE_AUDIOCLIP_A28E7BEC8189FE0A_OFFSET UNITYSDK_OFFSET(0x41056B0)
#define UNITYENGINE_AUDIOCLIP_E03151F5F9204779_OFFSET UNITYSDK_OFFSET(0x4105690)
#define UNITYENGINE_AUDIOCLIP_FB4B93E46363F337_OFFSET UNITYSDK_OFFSET(0x4105670)

namespace UnityEngine
{
	inline static constexpr unsigned int AudioClip_TypeDefinitionIndex = 21417;

	class AudioClip : public ::UnityEngine::Object
	{
	public:
		::UnityEngine::AudioClip_BC8827C8DB390637* AC6ED1BDC68DE9D3; // 0x18
		::UnityEngine::AudioClip_FB1CDA89D57E2B93* B5796C5733CDB8C5; // 0x20

		::System::Void E03151F5F9204779(::System::Int32 EB211B01816ACA79)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOCLIP_E03151F5F9204779_OFFSET))(this, EB211B01816ACA79);
		}

		::System::Single A28E7BEC8189FE0A()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOCLIP_A28E7BEC8189FE0A_OFFSET))(this);
		}

		::System::Void FB4B93E46363F337(::Il2CppArray<::System::Single>* F220A2D27F7C6B6C)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOCLIP_FB4B93E46363F337_OFFSET))(this, F220A2D27F7C6B6C);
		}
	};
}
