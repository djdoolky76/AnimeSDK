#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENKKLEFNAKG.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class PMGMBGFOFKG;
namespace NapStreaming { class NapStreamingManager_StreamingPosProvider; }

#define PMGMBGFOFKG_CCJOIIKOONP_DEHEGGJEPNM_OFFSET UNITYSDK_OFFSET(0x1D9D55C0)
#define PMGMBGFOFKG_CCJOIIKOONP_JCNEHNHMBDE_OFFSET UNITYSDK_OFFSET(0x1D9D5380)
#define PMGMBGFOFKG_CCJOIIKOONP_LOLLGJJNKBE_OFFSET UNITYSDK_OFFSET(0x1D9D52C0)
#define PMGMBGFOFKG_CCJOIIKOONP__CTOR_OFFSET UNITYSDK_OFFSET(0x1D9D52B0)

inline static constexpr unsigned int PMGMBGFOFKG_CCJOIIKOONP_TypeDefinitionIndex = 65876;

class PMGMBGFOFKG_CCJOIIKOONP : public ::System::Object
{
public:
	::NapStreaming::NapStreamingManager_StreamingPosProvider* FFMGICPLKFB; // 0x10
	::PMGMBGFOFKG* KLHPEBKNIFB; // 0x18
	::ENKKLEFNAKG OIKMICDBAPP; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMGMBGFOFKG_CCJOIIKOONP__CTOR_OFFSET))(this);
	}

	::System::Void LOLLGJJNKBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMGMBGFOFKG_CCJOIIKOONP_LOLLGJJNKBE_OFFSET))(this);
	}

	::System::Void JCNEHNHMBDE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMGMBGFOFKG_CCJOIIKOONP_JCNEHNHMBDE_OFFSET))(this);
	}

	::UnityEngine::Vector3 DEHEGGJEPNM()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + PMGMBGFOFKG_CCJOIIKOONP_DEHEGGJEPNM_OFFSET))(this);
	}
};
