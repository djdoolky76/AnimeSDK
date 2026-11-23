#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/A7EC17A386F36644.h"

namespace UnityEngine { class GUIStyle; }

#define UNITYENGINE_BDC95BF6934F617A_BC77DE0A53F36A17_OFFSET UNITYSDK_OFFSET(0x4195630)
#define UNITYENGINE_BDC95BF6934F617A_E01FE4DF93EFCE51_OFFSET UNITYSDK_OFFSET(0x41952D0)
#define UNITYENGINE_BDC95BF6934F617A_E4B767DEE0C5AD4A_OFFSET UNITYSDK_OFFSET(0x41954C0)
#define UNITYENGINE_BDC95BF6934F617A_E671AEF682BF2672_OFFSET UNITYSDK_OFFSET(0x4195420)
#define UNITYENGINE_BDC95BF6934F617A__CTOR_OFFSET UNITYSDK_OFFSET(0x41958A0)

namespace UnityEngine
{
	inline static constexpr unsigned int BDC95BF6934F617A_TypeDefinitionIndex = 20126;

	class BDC95BF6934F617A : public ::UnityEngine::A7EC17A386F36644
	{
	public:
		::System::Single E605A3F5AABD99AD; // 0x90
		::System::Single E68F4F61639658F0; // 0x94
		::System::Single A1D4A5DAE75C1ABC; // 0x98
		::System::Single BABF477FB6017FB3; // 0x9C
		::System::Single A18DD63EC3A1FF4A; // 0xA0
		::System::Single FB34AF4FF7C74D09; // 0xA4
		::System::Boolean A9A6199EE1426196; // 0xA8
		::System::Boolean A45AC727AE2B20D9; // 0xA9
		::System::Boolean BD0CE9532AD02B1E; // 0xAA
		::System::Boolean F5944FD783BE62FC; // 0xAB
		::System::Byte _padding0[0x4];
		::UnityEngine::GUIStyle* EF4276663749CBF6; // 0xB0
		::UnityEngine::GUIStyle* AB45AB7A18842163; // 0xB8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BDC95BF6934F617A__CTOR_OFFSET))(this);
		}

		::System::Void E01FE4DF93EFCE51()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BDC95BF6934F617A_E01FE4DF93EFCE51_OFFSET))(this);
		}

		::System::Void E671AEF682BF2672()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BDC95BF6934F617A_E671AEF682BF2672_OFFSET))(this);
		}

		::System::Void BC77DE0A53F36A17(::System::Single A0A0D02932F12CFD, ::System::Single F0961C93719F7B0D)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_BDC95BF6934F617A_BC77DE0A53F36A17_OFFSET))(this, A0A0D02932F12CFD, F0961C93719F7B0D);
		}

		::System::Void E4B767DEE0C5AD4A(::System::Single BB8C609F76620E45, ::System::Single F5EF7E29767E03BF)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_BDC95BF6934F617A_E4B767DEE0C5AD4A_OFFSET))(this, BB8C609F76620E45, F5EF7E29767E03BF);
		}
	};
}
