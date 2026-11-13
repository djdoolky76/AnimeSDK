#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ProBuilder/RectSelectMode.h"
namespace System { class Object; }

#define UNITYENGINE_PROBUILDER_PICKEROPTIONS_CCTOR_OFFSET UNITYSDK_OFFSET(0xD736DB0)
#define UNITYENGINE_PROBUILDER_PICKEROPTIONS_EQUALS_1_OFFSET UNITYSDK_OFFSET(0xFDD720)
#define UNITYENGINE_PROBUILDER_PICKEROPTIONS_EQUALS_OFFSET UNITYSDK_OFFSET(0xFDD6B0)
#define UNITYENGINE_PROBUILDER_PICKEROPTIONS_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xFDD740)
#define UNITYENGINE_PROBUILDER_PICKEROPTIONS_GET_DEFAULT_OFFSET UNITYSDK_OFFSET(0xD736C60)
#define UNITYENGINE_PROBUILDER_PICKEROPTIONS_GET_DEPTHTEST_OFFSET UNITYSDK_OFFSET(0x7CEE40)
#define UNITYENGINE_PROBUILDER_PICKEROPTIONS_GET_RECTSELECTMODE_OFFSET UNITYSDK_OFFSET(0x7CEA10)
#define UNITYENGINE_PROBUILDER_PICKEROPTIONS_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0xD736D60)
#define UNITYENGINE_PROBUILDER_PICKEROPTIONS_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0xD736D90)
#define UNITYENGINE_PROBUILDER_PICKEROPTIONS_SET_DEPTHTEST_OFFSET UNITYSDK_OFFSET(0xADBB90)
#define UNITYENGINE_PROBUILDER_PICKEROPTIONS_SET_RECTSELECTMODE_OFFSET UNITYSDK_OFFSET(0xFDBF80)

namespace UnityEngine::ProBuilder
{
	inline static constexpr unsigned int PickerOptions_TypeDefinitionIndex = 45494;

	struct alignas(4) PickerOptions
	{
		::System::Boolean _depthTest_k__BackingField; // 0x10
		::System::Byte _padding0[0x3];
		::UnityEngine::ProBuilder::RectSelectMode _rectSelectMode_k__BackingField; // 0x14
		static ::UnityEngine::ProBuilder::PickerOptions* StaticGet_k_Default()
		{
			return (::UnityEngine::ProBuilder::PickerOptions*)UnitySDK::FromName("UnityEngine.ProBuilder", "PickerOptions")->GetStaticField(0x14750);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PICKEROPTIONS_CCTOR_OFFSET))();
		}

		::System::Boolean get_depthTest()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PICKEROPTIONS_GET_DEPTHTEST_OFFSET))(this);
		}

		::System::Void set_depthTest(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PICKEROPTIONS_SET_DEPTHTEST_OFFSET))(this, a1);
		}

		::UnityEngine::ProBuilder::RectSelectMode get_rectSelectMode()
		{
			return ((::UnityEngine::ProBuilder::RectSelectMode(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PICKEROPTIONS_GET_RECTSELECTMODE_OFFSET))(this);
		}

		::System::Void set_rectSelectMode(::UnityEngine::ProBuilder::RectSelectMode a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ProBuilder::RectSelectMode))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PICKEROPTIONS_SET_RECTSELECTMODE_OFFSET))(this, a1);
		}

		/*
		static ::UnityEngine::ProBuilder::PickerOptions get_Default()
		{
			return ((::UnityEngine::ProBuilder::PickerOptions(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PICKEROPTIONS_GET_DEFAULT_OFFSET))();
		}
		*/

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PICKEROPTIONS_EQUALS_OFFSET))(this, a1);
		}

		/*
		::System::Boolean Equals_1(::UnityEngine::ProBuilder::PickerOptions a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::ProBuilder::PickerOptions))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PICKEROPTIONS_EQUALS_1_OFFSET))(this, a1);
		}
		*/

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PICKEROPTIONS_GETHASHCODE_OFFSET))(this);
		}

		/*
		static ::System::Boolean op_Equality(::UnityEngine::ProBuilder::PickerOptions a1, ::UnityEngine::ProBuilder::PickerOptions a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::ProBuilder::PickerOptions, ::UnityEngine::ProBuilder::PickerOptions))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PICKEROPTIONS_OP_EQUALITY_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Boolean op_Inequality(::UnityEngine::ProBuilder::PickerOptions a1, ::UnityEngine::ProBuilder::PickerOptions a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::ProBuilder::PickerOptions, ::UnityEngine::ProBuilder::PickerOptions))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_PICKEROPTIONS_OP_INEQUALITY_OFFSET))(a1, a2);
		}
		*/

	};
}
