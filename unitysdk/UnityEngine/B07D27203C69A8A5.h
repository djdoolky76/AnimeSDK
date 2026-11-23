#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/B178A0A3F2F8BBBF.h"

#define UNITYENGINE_B07D27203C69A8A5_E03CBE509A8F58B1_OFFSET UNITYSDK_OFFSET(0x412C840)
#define UNITYENGINE_B07D27203C69A8A5_EA4F0C40EB7536BF_OFFSET UNITYSDK_OFFSET(0x412C7C0)
#define UNITYENGINE_B07D27203C69A8A5__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace UnityEngine
{
	inline static constexpr unsigned int B07D27203C69A8A5_TypeDefinitionIndex = 17291;

	class B07D27203C69A8A5 : public ::UnityEngine::B178A0A3F2F8BBBF
	{
	public:
		::System::IntPtr F206D41EC0C50691; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_B07D27203C69A8A5__CTOR_OFFSET))(this);
		}

		static ::System::Void E03CBE509A8F58B1(::System::IntPtr B03018C24D85EDA4)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_B07D27203C69A8A5_E03CBE509A8F58B1_OFFSET))(B03018C24D85EDA4);
		}

		::System::Void EA4F0C40EB7536BF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_B07D27203C69A8A5_EA4F0C40EB7536BF_OFFSET))(this);
		}
	};
}
