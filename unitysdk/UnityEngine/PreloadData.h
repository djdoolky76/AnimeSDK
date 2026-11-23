#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Object.h"

#define UNITYENGINE_PRELOADDATA_B8DB01DB66F6A1D9_OFFSET UNITYSDK_OFFSET(0x1EB8060)

namespace UnityEngine
{
	inline static constexpr unsigned int PreloadData_TypeDefinitionIndex = 17635;

	class PreloadData : public ::UnityEngine::Object
	{
	public:
		::System::Void B8DB01DB66F6A1D9()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PRELOADDATA_B8DB01DB66F6A1D9_OFFSET))(this);
		}
	};
}
