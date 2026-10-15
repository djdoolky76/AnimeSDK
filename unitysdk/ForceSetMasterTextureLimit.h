#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define FORCESETMASTERTEXTURELIMIT_CTOR_OFFSET UNITYSDK_OFFSET(0x15933DA0)
#define FORCESETMASTERTEXTURELIMIT_GIFENDBHOIH_OFFSET UNITYSDK_OFFSET(0x15933D50)

inline static constexpr unsigned int ForceSetMasterTextureLimit_TypeDefinitionIndex = 47589;

	class ForceSetMasterTextureLimit : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FORCESETMASTERTEXTURELIMIT_CTOR_OFFSET))(this);
		}

		::System::Void GIFENDBHOIH(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FORCESETMASTERTEXTURELIMIT_GIFENDBHOIH_OFFSET))(this, a1);
		}

	};
