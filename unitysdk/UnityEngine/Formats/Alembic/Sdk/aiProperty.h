#pragma once
#include "unitysdk/unitysdk.h"

#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AIPROPERTY_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1F17ED00)

namespace UnityEngine::Formats::Alembic::Sdk
{
	struct alignas(4) aiProperty
	{
		::System::IntPtr self; // 0x10
		/*
		static ::System::Boolean op_Implicit(::UnityEngine::Formats::Alembic::Sdk::aiProperty a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::Formats::Alembic::Sdk::aiProperty))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AIPROPERTY_OP_IMPLICIT_OFFSET))(a1);
		}
		*/

	};
}
