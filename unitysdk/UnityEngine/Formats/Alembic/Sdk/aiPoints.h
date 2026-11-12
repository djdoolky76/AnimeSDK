#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Formats/Alembic/Sdk/aiSchema.h"
#include "unitysdk/UnityEngine/Formats/Alembic/Sdk/aiPointsSample.h"
#include "unitysdk/UnityEngine/Formats/Alembic/Sdk/aiPointsSummary.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AIPOINTS_GETSUMMARY_OFFSET UNITYSDK_OFFSET(0x3EB11D0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AIPOINTS_GET_SAMPLE_OFFSET UNITYSDK_OFFSET(0x3EB1150)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AIPOINTS_OP_IMPLICIT_1_OFFSET UNITYSDK_OFFSET(0x20430020)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AIPOINTS_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x20426920)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AIPOINTS_SET_SORTBASEPOSITION_OFFSET UNITYSDK_OFFSET(0x3EB06D0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AIPOINTS_SET_SORT_OFFSET UNITYSDK_OFFSET(0x3EB0650)

namespace UnityEngine::Formats::Alembic::Sdk
{
	inline static constexpr unsigned int aiPoints_TypeDefinitionIndex = 46860;

	struct alignas(4) aiPoints
	{
		::System::IntPtr self; // 0x10
		::UnityEngine::Formats::Alembic::Sdk::aiSchema schema; // 0x10
		/*
		static ::System::Boolean op_Implicit(::UnityEngine::Formats::Alembic::Sdk::aiPoints a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::Formats::Alembic::Sdk::aiPoints))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AIPOINTS_OP_IMPLICIT_OFFSET))(a1);
		}
		*/

		/*
		static ::UnityEngine::Formats::Alembic::Sdk::aiSchema op_Implicit_1(::UnityEngine::Formats::Alembic::Sdk::aiPoints a1)
		{
			return ((::UnityEngine::Formats::Alembic::Sdk::aiSchema(*)(::UnityEngine::Formats::Alembic::Sdk::aiPoints))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AIPOINTS_OP_IMPLICIT_1_OFFSET))(a1);
		}
		*/

		::UnityEngine::Formats::Alembic::Sdk::aiPointsSample get_sample()
		{
			return ((::UnityEngine::Formats::Alembic::Sdk::aiPointsSample(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AIPOINTS_GET_SAMPLE_OFFSET))(this);
		}

		::System::Void set_sort(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AIPOINTS_SET_SORT_OFFSET))(this, a1);
		}

		::System::Void set_sortBasePosition(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AIPOINTS_SET_SORTBASEPOSITION_OFFSET))(this, a1);
		}

		::System::Void GetSummary(::UnityEngine::Formats::Alembic::Sdk::aiPointsSummary a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Formats::Alembic::Sdk::aiPointsSummary))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AIPOINTS_GETSUMMARY_OFFSET))(this, a1);
		}

	};
}
