#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/CustomProfileCounter.h"
#include "unitysdk/RPG/CustomRP/RuntimeProfiler_AndroidMemoryMetricType.h"
#include "unitysdk/System/Object.h"

#define RPG_CUSTOMRP_RUNTIMEPROFILER_ENABLEPROFILEQUERY_OFFSET UNITYSDK_OFFSET(0x1990A3C0)
#define RPG_CUSTOMRP_RUNTIMEPROFILER_ENABLETRANSPARENTQUERY_OFFSET UNITYSDK_OFFSET(0x1990A610)
#define RPG_CUSTOMRP_RUNTIMEPROFILER_ENABLEUIEFFECT_OFFSET UNITYSDK_OFFSET(0x1990A630)
#define RPG_CUSTOMRP_RUNTIMEPROFILER_GETCUSTOMPROFILEAVGTIME_1_OFFSET UNITYSDK_OFFSET(0x1990A3B0)
#define RPG_CUSTOMRP_RUNTIMEPROFILER_GETCUSTOMPROFILEAVGTIME_OFFSET UNITYSDK_OFFSET(0x1990A3A0)
#define RPG_CUSTOMRP_RUNTIMEPROFILER_GETTOTALMAINLIGHTOVERDRAW_OFFSET UNITYSDK_OFFSET(0x1990A8C0)
#define RPG_CUSTOMRP_RUNTIMEPROFILER_GETTOTALPROBEOVERDRAW_OFFSET UNITYSDK_OFFSET(0x1990A850)
#define RPG_CUSTOMRP_RUNTIMEPROFILER_GETVISIBLERATIOGAME_OFFSET UNITYSDK_OFFSET(0x1990A6E0)
#define RPG_CUSTOMRP_RUNTIMEPROFILER_GETVISIBLERATIOSCENE_OFFSET UNITYSDK_OFFSET(0x1990A720)
#define RPG_CUSTOMRP_RUNTIMEPROFILER_GETWEIGHTEDLIGHTOVERDRAW_OFFSET UNITYSDK_OFFSET(0x1990A730)
#define RPG_CUSTOMRP_RUNTIMEPROFILER_GET_ANDROIDMEMORYTYPE_OFFSET UNITYSDK_OFFSET(0x1990A9B0)
#define RPG_CUSTOMRP_RUNTIMEPROFILER_GET_CLUSTEREDLIGHTCOUNT_OFFSET UNITYSDK_OFFSET(0x1990A930)
#define RPG_CUSTOMRP_RUNTIMEPROFILER_GET_DEBUGINFOWIDGETENABLEPROFILER_OFFSET UNITYSDK_OFFSET(0x1990AAD0)
#define RPG_CUSTOMRP_RUNTIMEPROFILER_GET_DEBUGUIENABLEPROFILER_OFFSET UNITYSDK_OFFSET(0x1990A9D0)
#define RPG_CUSTOMRP_RUNTIMEPROFILER_GET_ENABLELIGHTRATIO_OFFSET UNITYSDK_OFFSET(0x1990A970)
#define RPG_CUSTOMRP_RUNTIMEPROFILER_GET_LIGHTCOUNT_OFFSET UNITYSDK_OFFSET(0x1990A910)
#define RPG_CUSTOMRP_RUNTIMEPROFILER_GET_MEMORYSENSITIVE_OFFSET UNITYSDK_OFFSET(0x1990A990)
#define RPG_CUSTOMRP_RUNTIMEPROFILER_GET_STENCILLIGHTCOUNT_OFFSET UNITYSDK_OFFSET(0x1990A950)
#define RPG_CUSTOMRP_RUNTIMEPROFILER_INIT_OFFSET UNITYSDK_OFFSET(0x1990A380)
#define RPG_CUSTOMRP_RUNTIMEPROFILER_SET_ANDROIDMEMORYTYPE_OFFSET UNITYSDK_OFFSET(0x1990A9C0)
#define RPG_CUSTOMRP_RUNTIMEPROFILER_SET_CLUSTEREDLIGHTCOUNT_OFFSET UNITYSDK_OFFSET(0x1990A940)
#define RPG_CUSTOMRP_RUNTIMEPROFILER_SET_DEBUGINFOWIDGETENABLEPROFILER_OFFSET UNITYSDK_OFFSET(0x1990AAE0)
#define RPG_CUSTOMRP_RUNTIMEPROFILER_SET_DEBUGUIENABLEPROFILER_OFFSET UNITYSDK_OFFSET(0x1990A9E0)
#define RPG_CUSTOMRP_RUNTIMEPROFILER_SET_ENABLELIGHTRATIO_OFFSET UNITYSDK_OFFSET(0x1990A980)
#define RPG_CUSTOMRP_RUNTIMEPROFILER_SET_LIGHTCOUNT_OFFSET UNITYSDK_OFFSET(0x1990A920)
#define RPG_CUSTOMRP_RUNTIMEPROFILER_SET_MEMORYSENSITIVE_OFFSET UNITYSDK_OFFSET(0x1990A9A0)
#define RPG_CUSTOMRP_RUNTIMEPROFILER_SET_STENCILLIGHTCOUNT_OFFSET UNITYSDK_OFFSET(0x1990A960)
#define RPG_CUSTOMRP_RUNTIMEPROFILER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1990A390)
#define RPG_CUSTOMRP_RUNTIMEPROFILER__UPDATEPROFILERSTATE_OFFSET UNITYSDK_OFFSET(0x1990AA60)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int RuntimeProfiler_TypeDefinitionIndex = 38854;

	class RuntimeProfiler : public ::System::Object
	{
	public:
		static ::System::Boolean* StaticGet__FinalEnableProfiler()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.CustomRP", "RuntimeProfiler")->GetStaticField(0x8200);
		}

		static ::System::Boolean* StaticGet__DebugUIEnableProfiler()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.CustomRP", "RuntimeProfiler")->GetStaticField(0x8201);
		}

		static ::System::Int32* StaticGet__StencilLightCount_k__BackingField()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "RuntimeProfiler")->GetStaticField(0x8204);
		}

		static ::System::Int32* StaticGet__LightCount_k__BackingField()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "RuntimeProfiler")->GetStaticField(0x8208);
		}

		static ::RPG::CustomRP::RuntimeProfiler_AndroidMemoryMetricType* StaticGet__AndroidMemoryType_k__BackingField()
		{
			return (::RPG::CustomRP::RuntimeProfiler_AndroidMemoryMetricType*)UnitySDK::FromName("RPG.CustomRP", "RuntimeProfiler")->GetStaticField(0x820C);
		}

		static ::System::Boolean* StaticGet__MemorySensitive_k__BackingField()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.CustomRP", "RuntimeProfiler")->GetStaticField(0x8210);
		}

		static ::System::Boolean* StaticGet__DebugInfoWidgetEnableProfiler()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.CustomRP", "RuntimeProfiler")->GetStaticField(0x8211);
		}

		static ::System::Boolean* StaticGet__EnableLightRatio_k__BackingField()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.CustomRP", "RuntimeProfiler")->GetStaticField(0x8212);
		}

		static ::System::Int32* StaticGet__ClusteredLightCount_k__BackingField()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.CustomRP", "RuntimeProfiler")->GetStaticField(0x8214);
		}

		static ::System::Void Init()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RUNTIMEPROFILER_INIT_OFFSET))();
		}

		static ::System::Void Update()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RUNTIMEPROFILER_UPDATE_OFFSET))();
		}

		static ::System::Single GetCustomProfileAvgTime(::RPG::CustomRP::CustomProfileCounter a1)
		{
			return ((::System::Single(*)(::RPG::CustomRP::CustomProfileCounter))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RUNTIMEPROFILER_GETCUSTOMPROFILEAVGTIME_OFFSET))(a1);
		}

		static ::System::Single GetCustomProfileAvgTime_1(::System::Int32 a1)
		{
			return ((::System::Single(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RUNTIMEPROFILER_GETCUSTOMPROFILEAVGTIME_1_OFFSET))(a1);
		}

		static ::System::Boolean EnableProfileQuery(::System::Boolean a1)
		{
			return ((::System::Boolean(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RUNTIMEPROFILER_ENABLEPROFILEQUERY_OFFSET))(a1);
		}

		static ::System::Void EnableTransparentQuery(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RUNTIMEPROFILER_ENABLETRANSPARENTQUERY_OFFSET))(a1);
		}

		static ::System::Void EnableUIEffect(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RUNTIMEPROFILER_ENABLEUIEFFECT_OFFSET))(a1, a2);
		}

		static ::System::Single GetVisibleRatioGame(::System::UInt32 a1)
		{
			return ((::System::Single(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RUNTIMEPROFILER_GETVISIBLERATIOGAME_OFFSET))(a1);
		}

		static ::System::Single GetVisibleRatioScene(::System::UInt32 a1)
		{
			return ((::System::Single(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RUNTIMEPROFILER_GETVISIBLERATIOSCENE_OFFSET))(a1);
		}

		static ::System::Single GetWeightedLightOverdraw()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RUNTIMEPROFILER_GETWEIGHTEDLIGHTOVERDRAW_OFFSET))();
		}

		static ::System::Single GetTotalProbeOverdraw()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RUNTIMEPROFILER_GETTOTALPROBEOVERDRAW_OFFSET))();
		}

		static ::System::Single GetTotalMainLightOverdraw()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RUNTIMEPROFILER_GETTOTALMAINLIGHTOVERDRAW_OFFSET))();
		}

		static ::System::Int32 get_LightCount()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RUNTIMEPROFILER_GET_LIGHTCOUNT_OFFSET))();
		}

		static ::System::Void set_LightCount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RUNTIMEPROFILER_SET_LIGHTCOUNT_OFFSET))(a1);
		}

		static ::System::Int32 get_ClusteredLightCount()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RUNTIMEPROFILER_GET_CLUSTEREDLIGHTCOUNT_OFFSET))();
		}

		static ::System::Void set_ClusteredLightCount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RUNTIMEPROFILER_SET_CLUSTEREDLIGHTCOUNT_OFFSET))(a1);
		}

		static ::System::Int32 get_StencilLightCount()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RUNTIMEPROFILER_GET_STENCILLIGHTCOUNT_OFFSET))();
		}

		static ::System::Void set_StencilLightCount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RUNTIMEPROFILER_SET_STENCILLIGHTCOUNT_OFFSET))(a1);
		}

		static ::System::Boolean get_EnableLightRatio()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RUNTIMEPROFILER_GET_ENABLELIGHTRATIO_OFFSET))();
		}

		static ::System::Void set_EnableLightRatio(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RUNTIMEPROFILER_SET_ENABLELIGHTRATIO_OFFSET))(a1);
		}

		static ::System::Boolean get_MemorySensitive()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RUNTIMEPROFILER_GET_MEMORYSENSITIVE_OFFSET))();
		}

		static ::System::Void set_MemorySensitive(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RUNTIMEPROFILER_SET_MEMORYSENSITIVE_OFFSET))(a1);
		}

		static ::RPG::CustomRP::RuntimeProfiler_AndroidMemoryMetricType get_AndroidMemoryType()
		{
			return ((::RPG::CustomRP::RuntimeProfiler_AndroidMemoryMetricType(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RUNTIMEPROFILER_GET_ANDROIDMEMORYTYPE_OFFSET))();
		}

		static ::System::Void set_AndroidMemoryType(::RPG::CustomRP::RuntimeProfiler_AndroidMemoryMetricType a1)
		{
			return ((::System::Void(*)(::RPG::CustomRP::RuntimeProfiler_AndroidMemoryMetricType))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RUNTIMEPROFILER_SET_ANDROIDMEMORYTYPE_OFFSET))(a1);
		}

		static ::System::Boolean get_DebugUIEnableProfiler()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RUNTIMEPROFILER_GET_DEBUGUIENABLEPROFILER_OFFSET))();
		}

		static ::System::Void set_DebugUIEnableProfiler(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RUNTIMEPROFILER_SET_DEBUGUIENABLEPROFILER_OFFSET))(a1);
		}

		static ::System::Boolean get_DebugInfoWidgetEnableProfiler()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RUNTIMEPROFILER_GET_DEBUGINFOWIDGETENABLEPROFILER_OFFSET))();
		}

		static ::System::Void set_DebugInfoWidgetEnableProfiler(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RUNTIMEPROFILER_SET_DEBUGINFOWIDGETENABLEPROFILER_OFFSET))(a1);
		}

		static ::System::Void _UpdateProfilerState()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RUNTIMEPROFILER__UPDATEPROFILERSTATE_OFFSET))();
		}

	};
}
