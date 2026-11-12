#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Formats/Alembic/Sdk/aiSampleSelector.h"

#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AISCHEMA_GET_ISDATAUPDATED_OFFSET UNITYSDK_OFFSET(0x3EB16C0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AISCHEMA_OP_EXPLICIT_1_OFFSET UNITYSDK_OFFSET(0x20417010)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AISCHEMA_OP_EXPLICIT_2_OFFSET UNITYSDK_OFFSET(0x2041B4C0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AISCHEMA_OP_EXPLICIT_3_OFFSET UNITYSDK_OFFSET(0x2042A000)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AISCHEMA_OP_EXPLICIT_4_OFFSET UNITYSDK_OFFSET(0x2041EEF0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AISCHEMA_OP_EXPLICIT_5_OFFSET UNITYSDK_OFFSET(0x20417C50)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AISCHEMA_OP_EXPLICIT_OFFSET UNITYSDK_OFFSET(0x2042A3B0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AISCHEMA_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x20426520)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AISCHEMA_UPDATESAMPLE_OFFSET UNITYSDK_OFFSET(0x3EB17B0)

namespace UnityEngine::Formats::Alembic::Sdk
{
	inline static constexpr unsigned int aiSchema_TypeDefinitionIndex = 46855;

	struct alignas(4) aiSchema
	{
		::System::IntPtr self; // 0x10
		/*
		static ::System::Boolean op_Implicit(::UnityEngine::Formats::Alembic::Sdk::aiSchema a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::Formats::Alembic::Sdk::aiSchema))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AISCHEMA_OP_IMPLICIT_OFFSET))(a1);
		}
		*/

		/*
		static ::UnityEngine::Formats::Alembic::Sdk::aiXform op_Explicit(::UnityEngine::Formats::Alembic::Sdk::aiSchema a1)
		{
			return ((::UnityEngine::Formats::Alembic::Sdk::aiXform(*)(::UnityEngine::Formats::Alembic::Sdk::aiSchema))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AISCHEMA_OP_EXPLICIT_OFFSET))(a1);
		}
		*/

		/*
		static ::UnityEngine::Formats::Alembic::Sdk::aiCamera op_Explicit_1(::UnityEngine::Formats::Alembic::Sdk::aiSchema a1)
		{
			return ((::UnityEngine::Formats::Alembic::Sdk::aiCamera(*)(::UnityEngine::Formats::Alembic::Sdk::aiSchema))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AISCHEMA_OP_EXPLICIT_1_OFFSET))(a1);
		}
		*/

		/*
		static ::UnityEngine::Formats::Alembic::Sdk::aiPolyMesh op_Explicit_2(::UnityEngine::Formats::Alembic::Sdk::aiSchema a1)
		{
			return ((::UnityEngine::Formats::Alembic::Sdk::aiPolyMesh(*)(::UnityEngine::Formats::Alembic::Sdk::aiSchema))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AISCHEMA_OP_EXPLICIT_2_OFFSET))(a1);
		}
		*/

		/*
		static ::UnityEngine::Formats::Alembic::Sdk::aiSubD op_Explicit_3(::UnityEngine::Formats::Alembic::Sdk::aiSchema a1)
		{
			return ((::UnityEngine::Formats::Alembic::Sdk::aiSubD(*)(::UnityEngine::Formats::Alembic::Sdk::aiSchema))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AISCHEMA_OP_EXPLICIT_3_OFFSET))(a1);
		}
		*/

		/*
		static ::UnityEngine::Formats::Alembic::Sdk::aiPoints op_Explicit_4(::UnityEngine::Formats::Alembic::Sdk::aiSchema a1)
		{
			return ((::UnityEngine::Formats::Alembic::Sdk::aiPoints(*)(::UnityEngine::Formats::Alembic::Sdk::aiSchema))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AISCHEMA_OP_EXPLICIT_4_OFFSET))(a1);
		}
		*/

		/*
		static ::UnityEngine::Formats::Alembic::Sdk::aiCurves op_Explicit_5(::UnityEngine::Formats::Alembic::Sdk::aiSchema a1)
		{
			return ((::UnityEngine::Formats::Alembic::Sdk::aiCurves(*)(::UnityEngine::Formats::Alembic::Sdk::aiSchema))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AISCHEMA_OP_EXPLICIT_5_OFFSET))(a1);
		}
		*/

		::System::Boolean get_isDataUpdated()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AISCHEMA_GET_ISDATAUPDATED_OFFSET))(this);
		}

		::System::Void UpdateSample(::UnityEngine::Formats::Alembic::Sdk::aiSampleSelector a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Formats::Alembic::Sdk::aiSampleSelector))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AISCHEMA_UPDATESAMPLE_OFFSET))(this, a1);
		}

	};
}
