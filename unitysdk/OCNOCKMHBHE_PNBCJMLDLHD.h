#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rendering/AsyncGPUReadbackRequest.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class RenderTexture; }

#define OCNOCKMHBHE_PNBCJMLDLHD_AMLKEECIOHL_OFFSET UNITYSDK_OFFSET(0x15F5B4C0)
#define OCNOCKMHBHE_PNBCJMLDLHD_JDBNNAEFFJD_OFFSET UNITYSDK_OFFSET(0x15F5B160)
#define OCNOCKMHBHE_PNBCJMLDLHD__CTOR_OFFSET UNITYSDK_OFFSET(0x15F5B150)

inline static constexpr unsigned int OCNOCKMHBHE_PNBCJMLDLHD_TypeDefinitionIndex = 89189;

class OCNOCKMHBHE_PNBCJMLDLHD : public ::System::Object
{
public:
	::UnityEngine::RenderTexture* FJEEKLKBFHN; // 0x10
	::System::Action_1<::System::String*>* CAAFEGLOALC; // 0x18
	::System::Boolean PAJNCNHJDKM; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCNOCKMHBHE_PNBCJMLDLHD__CTOR_OFFSET))(this);
	}

	::System::Void JDBNNAEFFJD(::UnityEngine::Rendering::AsyncGPUReadbackRequest FCEIKAIDHPM)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::AsyncGPUReadbackRequest))((::PBYTE)hIl2Cpp + OCNOCKMHBHE_PNBCJMLDLHD_JDBNNAEFFJD_OFFSET))(this, FCEIKAIDHPM);
	}

	::System::Boolean AMLKEECIOHL()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OCNOCKMHBHE_PNBCJMLDLHD_AMLKEECIOHL_OFFSET))(this);
	}
};
