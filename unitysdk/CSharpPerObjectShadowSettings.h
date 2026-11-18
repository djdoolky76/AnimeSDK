#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/LayerMask.h"

#define CSHARPPEROBJECTSHADOWSETTINGS_GET_ENABLED_OFFSET UNITYSDK_OFFSET(0x16E42E30)
#define CSHARPPEROBJECTSHADOWSETTINGS_GET_MAXCOUNT_OFFSET UNITYSDK_OFFSET(0x16E42DC0)
#define CSHARPPEROBJECTSHADOWSETTINGS_SET_ENABLED_OFFSET UNITYSDK_OFFSET(0x16E42E40)
#define CSHARPPEROBJECTSHADOWSETTINGS_SET_MAXCOUNT_OFFSET UNITYSDK_OFFSET(0x16E42E20)
#define CSHARPPEROBJECTSHADOWSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x16E42E90)

inline static constexpr unsigned int CSharpPerObjectShadowSettings_TypeDefinitionIndex = 27273;

class CSharpPerObjectShadowSettings : public ::System::Object
{
public:
	::System::Boolean m_Enabled; // 0x10
	::System::Byte _padding0[0x3];
	::System::Int32 m_MaxCount; // 0x14
	::System::Int32 resolution; // 0x18
	::System::Boolean useShadowProxy; // 0x1C
	::System::Byte _padding1[0x3];
	::UnityEngine::LayerMask raycastLayerMask; // 0x20
	::System::Single raycastDistance; // 0x24
	::System::Int32 shadowCasterPass; // 0x28
	::System::Single extent; // 0x2C
	::System::Boolean receiveSelfShadow; // 0x30
	::System::Boolean collageAtlas; // 0x31
	::System::Byte _padding2[0x2];
	::System::Int32 maxSizePerEntity; // 0x34
	::System::Int32 maxAtlasSize; // 0x38
	::System::Boolean distanceCulling; // 0x3C
	::System::Boolean fade; // 0x3D
	::System::Boolean useBakedObjectSpaceBounds; // 0x3E
	::System::Byte _padding3[0x1];
	::System::Single cullDistance; // 0x40
	::System::Single distanceScaleFactor; // 0x44
	::System::Boolean isOptimizeRendererDrawFlagOn; // 0x48
	::System::Boolean fixLargePosition; // 0x49
	::System::Boolean fixCSMShadowProxyMask; // 0x4A
	::System::Boolean checkVisibilityOfCascadeShadow; // 0x4B
	::System::Boolean distanceCullOnCSMRender; // 0x4C
	::System::Boolean optimizeProxyBounds; // 0x4D
	::System::Boolean optimizeBiases; // 0x4E

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CSHARPPEROBJECTSHADOWSETTINGS__CTOR_OFFSET))(this);
	}

	::System::Int32 get_MaxCount()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CSHARPPEROBJECTSHADOWSETTINGS_GET_MAXCOUNT_OFFSET))(this);
	}

	::System::Void set_MaxCount(::System::Int32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CSHARPPEROBJECTSHADOWSETTINGS_SET_MAXCOUNT_OFFSET))(this, value);
	}

	::System::Boolean get_Enabled()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CSHARPPEROBJECTSHADOWSETTINGS_GET_ENABLED_OFFSET))(this);
	}

	::System::Void set_Enabled(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CSHARPPEROBJECTSHADOWSETTINGS_SET_ENABLED_OFFSET))(this, value);
	}
};
