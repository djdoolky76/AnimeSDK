#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Formats/Alembic/Sdk/Bool.h"
#include "unitysdk/UnityEngine/Formats/Alembic/Sdk/TimeSamplingType.h"
#include "unitysdk/UnityEngine/Formats/Alembic/Sdk/TransformType.h"

#define UNITYENGINE_FORMATS_ALEMBIC_SDK_ALEMBICEXPORTOPTIONS_CTOR_OFFSET UNITYSDK_OFFSET(0x2042B180)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_ALEMBICEXPORTOPTIONS_GET_FRAMERATE_OFFSET UNITYSDK_OFFSET(0x2042B0E0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_ALEMBICEXPORTOPTIONS_GET_SCALEFACTOR_OFFSET UNITYSDK_OFFSET(0x2042B160)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_ALEMBICEXPORTOPTIONS_GET_SWAPFACES_OFFSET UNITYSDK_OFFSET(0x2042B140)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_ALEMBICEXPORTOPTIONS_GET_SWAPHANDEDNESS_OFFSET UNITYSDK_OFFSET(0x2042B120)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_ALEMBICEXPORTOPTIONS_GET_TIMESAMPLINGTYPE_OFFSET UNITYSDK_OFFSET(0x2042B0C0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_ALEMBICEXPORTOPTIONS_GET_TRANFORMTYPE_OFFSET UNITYSDK_OFFSET(0x2042B100)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_ALEMBICEXPORTOPTIONS_SET_FRAMERATE_OFFSET UNITYSDK_OFFSET(0x2042B0F0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_ALEMBICEXPORTOPTIONS_SET_SCALEFACTOR_OFFSET UNITYSDK_OFFSET(0x2042B170)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_ALEMBICEXPORTOPTIONS_SET_SWAPFACES_OFFSET UNITYSDK_OFFSET(0x2042B150)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_ALEMBICEXPORTOPTIONS_SET_SWAPHANDEDNESS_OFFSET UNITYSDK_OFFSET(0x2042B130)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_ALEMBICEXPORTOPTIONS_SET_TIMESAMPLINGTYPE_OFFSET UNITYSDK_OFFSET(0x2042B0D0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_ALEMBICEXPORTOPTIONS_SET_TRANFORMTYPE_OFFSET UNITYSDK_OFFSET(0x2042B110)

namespace UnityEngine::Formats::Alembic::Sdk
{
	inline static constexpr unsigned int AlembicExportOptions_TypeDefinitionIndex = 46812;

	class AlembicExportOptions : public ::System::Object
	{
	public:
		::UnityEngine::Formats::Alembic::Sdk::TimeSamplingType timeSamplingType; // 0x10
		::System::Single frameRate; // 0x14
		::UnityEngine::Formats::Alembic::Sdk::TransformType xformType; // 0x18
		::UnityEngine::Formats::Alembic::Sdk::Bool swapHandedness; // 0x1C
		::UnityEngine::Formats::Alembic::Sdk::Bool swapFaces; // 0x1D
		::System::Byte _padding0[0x2];
		::System::Single scaleFactor; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_ALEMBICEXPORTOPTIONS_CTOR_OFFSET))(this);
		}

		::UnityEngine::Formats::Alembic::Sdk::TimeSamplingType get_TimeSamplingType()
		{
			return ((::UnityEngine::Formats::Alembic::Sdk::TimeSamplingType(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_ALEMBICEXPORTOPTIONS_GET_TIMESAMPLINGTYPE_OFFSET))(this);
		}

		::System::Void set_TimeSamplingType(::UnityEngine::Formats::Alembic::Sdk::TimeSamplingType a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Formats::Alembic::Sdk::TimeSamplingType))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_ALEMBICEXPORTOPTIONS_SET_TIMESAMPLINGTYPE_OFFSET))(this, a1);
		}

		::System::Single get_FrameRate()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_ALEMBICEXPORTOPTIONS_GET_FRAMERATE_OFFSET))(this);
		}

		::System::Void set_FrameRate(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_ALEMBICEXPORTOPTIONS_SET_FRAMERATE_OFFSET))(this, a1);
		}

		::UnityEngine::Formats::Alembic::Sdk::TransformType get_TranformType()
		{
			return ((::UnityEngine::Formats::Alembic::Sdk::TransformType(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_ALEMBICEXPORTOPTIONS_GET_TRANFORMTYPE_OFFSET))(this);
		}

		::System::Void set_TranformType(::UnityEngine::Formats::Alembic::Sdk::TransformType a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Formats::Alembic::Sdk::TransformType))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_ALEMBICEXPORTOPTIONS_SET_TRANFORMTYPE_OFFSET))(this, a1);
		}

		::System::Boolean get_SwapHandedness()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_ALEMBICEXPORTOPTIONS_GET_SWAPHANDEDNESS_OFFSET))(this);
		}

		::System::Void set_SwapHandedness(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_ALEMBICEXPORTOPTIONS_SET_SWAPHANDEDNESS_OFFSET))(this, a1);
		}

		::System::Boolean get_SwapFaces()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_ALEMBICEXPORTOPTIONS_GET_SWAPFACES_OFFSET))(this);
		}

		::System::Void set_SwapFaces(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_ALEMBICEXPORTOPTIONS_SET_SWAPFACES_OFFSET))(this, a1);
		}

		::System::Single get_ScaleFactor()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_ALEMBICEXPORTOPTIONS_GET_SCALEFACTOR_OFFSET))(this);
		}

		::System::Void set_ScaleFactor(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_ALEMBICEXPORTOPTIONS_SET_SCALEFACTOR_OFFSET))(this, a1);
		}

	};
}
