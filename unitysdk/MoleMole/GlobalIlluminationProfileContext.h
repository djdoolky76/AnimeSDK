#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GraphicSettingProfileContextBase.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/ENapGIQuality.h"

#define MOLEMOLE_GLOBALILLUMINATIONPROFILECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x10D23020)

namespace MoleMole
{
	inline static constexpr unsigned int GlobalIlluminationProfileContext_TypeDefinitionIndex = 39068;

	class GlobalIlluminationProfileContext : public ::MoleMole::GraphicSettingProfileContextBase
	{
	public:
		::UnityEngine::NAPRenderPipeline0::ENapGIQuality GIQuality; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GLOBALILLUMINATIONPROFILECONTEXT__CTOR_OFFSET))(this);
		}
	};
}
