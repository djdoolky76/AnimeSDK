#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Formats/Alembic/Sdk/aiConfig.h"
#include "unitysdk/UnityEngine/Formats/Alembic/Sdk/aiTimeSampling.h"
namespace System { class String; }

#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AICONTEXT_CREATE_OFFSET UNITYSDK_OFFSET(0x1E5850C0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AICONTEXT_DESTROYBYPATH_OFFSET UNITYSDK_OFFSET(0x1E583400)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AICONTEXT_DESTROY_OFFSET UNITYSDK_OFFSET(0x3F27460)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AICONTEXT_GETAPPLICATION_OFFSET UNITYSDK_OFFSET(0x3F25E90)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AICONTEXT_GETTIMERANGE_OFFSET UNITYSDK_OFFSET(0x3F25F40)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AICONTEXT_GETTIMESAMPLING_OFFSET UNITYSDK_OFFSET(0x3F25D80)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AICONTEXT_GET_TIMESAMPLINGCOUNT_OFFSET UNITYSDK_OFFSET(0x3F25D00)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AICONTEXT_GET_TOPOBJECT_OFFSET UNITYSDK_OFFSET(0x3F25C80)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AICONTEXT_ISHDF5_OFFSET UNITYSDK_OFFSET(0x3F25E10)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AICONTEXT_LOAD_OFFSET UNITYSDK_OFFSET(0x3F274F0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AICONTEXT_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1E587940)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AICONTEXT_SETCONFIG_OFFSET UNITYSDK_OFFSET(0x3F275A0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AICONTEXT_TOBOOL_OFFSET UNITYSDK_OFFSET(0x1E590230)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AICONTEXT_UPDATESAMPLES_OFFSET UNITYSDK_OFFSET(0x3F27620)

namespace UnityEngine::Formats::Alembic::Sdk
{
	inline static constexpr unsigned int aiContext_TypeDefinitionIndex = 46852;

	struct alignas(4) aiContext
	{
		::System::IntPtr self; // 0x10
		/*
		static ::System::Boolean op_Implicit(::UnityEngine::Formats::Alembic::Sdk::aiContext a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::Formats::Alembic::Sdk::aiContext))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AICONTEXT_OP_IMPLICIT_OFFSET))(a1);
		}
		*/

		/*
		static ::System::Boolean ToBool(::UnityEngine::Formats::Alembic::Sdk::aiContext a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::Formats::Alembic::Sdk::aiContext))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AICONTEXT_TOBOOL_OFFSET))(a1);
		}
		*/

		/*
		static ::UnityEngine::Formats::Alembic::Sdk::aiContext Create(::System::Int32 a1)
		{
			return ((::UnityEngine::Formats::Alembic::Sdk::aiContext(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AICONTEXT_CREATE_OFFSET))(a1);
		}
		*/

		static ::System::Void DestroyByPath(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AICONTEXT_DESTROYBYPATH_OFFSET))(a1);
		}

		::System::Void Destroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AICONTEXT_DESTROY_OFFSET))(this);
		}

		::System::Boolean Load(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AICONTEXT_LOAD_OFFSET))(this, a1);
		}

		::System::Boolean IsHDF5()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AICONTEXT_ISHDF5_OFFSET))(this);
		}

		::System::String* GetApplication()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AICONTEXT_GETAPPLICATION_OFFSET))(this);
		}

		::System::Void SetConfig(::UnityEngine::Formats::Alembic::Sdk::aiConfig a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Formats::Alembic::Sdk::aiConfig))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AICONTEXT_SETCONFIG_OFFSET))(this, a1);
		}

		::System::Void UpdateSamples(::System::Double a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AICONTEXT_UPDATESAMPLES_OFFSET))(this, a1);
		}

		/*
		::UnityEngine::Formats::Alembic::Sdk::aiObject get_topObject()
		{
			return ((::UnityEngine::Formats::Alembic::Sdk::aiObject(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AICONTEXT_GET_TOPOBJECT_OFFSET))(this);
		}
		*/

		::System::Int32 get_timeSamplingCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AICONTEXT_GET_TIMESAMPLINGCOUNT_OFFSET))(this);
		}

		::UnityEngine::Formats::Alembic::Sdk::aiTimeSampling GetTimeSampling(::System::Int32 a1)
		{
			return ((::UnityEngine::Formats::Alembic::Sdk::aiTimeSampling(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AICONTEXT_GETTIMESAMPLING_OFFSET))(this, a1);
		}

		::System::Void GetTimeRange(::System::Double a1, ::System::Double a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AICONTEXT_GETTIMERANGE_OFFSET))(this, a1, a2);
		}

	};
}
