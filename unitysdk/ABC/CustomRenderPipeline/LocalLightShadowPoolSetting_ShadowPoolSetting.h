#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/B88870E9FB4B8C1A/E6E535EDFA14822E.h"

#define ABC_CUSTOMRENDERPIPELINE_LOCALLIGHTSHADOWPOOLSETTING_SHADOWPOOLSETTING_CONDITIONALCOPY_OFFSET UNITYSDK_OFFSET(0x2793910)
#define ABC_CUSTOMRENDERPIPELINE_LOCALLIGHTSHADOWPOOLSETTING_SHADOWPOOLSETTING__CTOR_OFFSET UNITYSDK_OFFSET(0x27939B0)

namespace ABC::CustomRenderPipeline
{
	inline static constexpr unsigned int LocalLightShadowPoolSetting_ShadowPoolSetting_TypeDefinitionIndex = 16578;

	class LocalLightShadowPoolSetting_ShadowPoolSetting : public ::B88870E9FB4B8C1A::E6E535EDFA14822E
	{
	public:
		::System::Int32 atlasResolution; // 0x18
		::System::Int32 lodLevelCount; // 0x1C
		::Il2CppArray<::System::Int32>* perLODSliceCount; // 0x20

		::System::Void ConditionalCopy(::B88870E9FB4B8C1A::E6E535EDFA14822E* B093D14BEB149AD9)
		{
			return ((::System::Void(*)(::PVOID, ::B88870E9FB4B8C1A::E6E535EDFA14822E*))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_LOCALLIGHTSHADOWPOOLSETTING_SHADOWPOOLSETTING_CONDITIONALCOPY_OFFSET))(this, B093D14BEB149AD9);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_LOCALLIGHTSHADOWPOOLSETTING_SHADOWPOOLSETTING__CTOR_OFFSET))(this);
		}
	};
}
