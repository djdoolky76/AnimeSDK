#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/InputSystem/Utilities/FourCC.h"
#include "unitysdk/UnityEngine/InputSystem/Utilities/InternedString.h"
#include "unitysdk/UnityEngine/InputSystem/Utilities/PrimitiveValue.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace UnityEngine::InputSystem::Layouts { class InputControlLayout_Builder; }

#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_BUILDER_CONTROLBUILDER_ASARRAYOFCONTROLSWITHSIZE_OFFSET UNITYSDK_OFFSET(0x8FE800)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_BUILDER_CONTROLBUILDER_DONTRESET_OFFSET UNITYSDK_OFFSET(0x8FE500)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_BUILDER_CONTROLBUILDER_ISNOISY_OFFSET UNITYSDK_OFFSET(0x8FE490)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_BUILDER_CONTROLBUILDER_ISSYNTHETIC_OFFSET UNITYSDK_OFFSET(0x8FE420)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_BUILDER_CONTROLBUILDER_USINGSTATEFROM_OFFSET UNITYSDK_OFFSET(0x8FE790)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_BUILDER_CONTROLBUILDER_WITHBITOFFSET_OFFSET UNITYSDK_OFFSET(0x8FE3C0)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_BUILDER_CONTROLBUILDER_WITHBYTEOFFSET_OFFSET UNITYSDK_OFFSET(0x8FE360)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_BUILDER_CONTROLBUILDER_WITHDEFAULTSTATE_OFFSET UNITYSDK_OFFSET(0x8FE730)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_BUILDER_CONTROLBUILDER_WITHDISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x8FE200)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_BUILDER_CONTROLBUILDER_WITHFORMAT_1_OFFSET UNITYSDK_OFFSET(0x8FE2E0)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_BUILDER_CONTROLBUILDER_WITHFORMAT_OFFSET UNITYSDK_OFFSET(0x8FE280)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_BUILDER_CONTROLBUILDER_WITHLAYOUT_OFFSET UNITYSDK_OFFSET(0x8FE260)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_BUILDER_CONTROLBUILDER_WITHPARAMETERS_OFFSET UNITYSDK_OFFSET(0x8FE670)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_BUILDER_CONTROLBUILDER_WITHPROCESSORS_OFFSET UNITYSDK_OFFSET(0x8FE710)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_BUILDER_CONTROLBUILDER_WITHRANGE_OFFSET UNITYSDK_OFFSET(0x8FE5E0)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_BUILDER_CONTROLBUILDER_WITHSIZEINBITS_OFFSET UNITYSDK_OFFSET(0x8FE580)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_BUILDER_CONTROLBUILDER_WITHUSAGES_1_OFFSET UNITYSDK_OFFSET(0x8FE620)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_BUILDER_CONTROLBUILDER_WITHUSAGES_2_OFFSET UNITYSDK_OFFSET(0x8FE640)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_BUILDER_CONTROLBUILDER_WITHUSAGES_OFFSET UNITYSDK_OFFSET(0x8FE600)

namespace UnityEngine::InputSystem::Layouts
{
	inline static constexpr unsigned int InputControlLayout_Builder_ControlBuilder_TypeDefinitionIndex = 32049;

	struct alignas(8) InputControlLayout_Builder_ControlBuilder
	{
		::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder* builder; // 0x10
		::System::Int32 index; // 0x18

		/*
		::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder_ControlBuilder WithDisplayName(::System::String* displayName)
		{
			return ((::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder_ControlBuilder(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_BUILDER_CONTROLBUILDER_WITHDISPLAYNAME_OFFSET))(this, displayName);
		}
		*/

		/*
		::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder_ControlBuilder WithLayout(::System::String* layout)
		{
			return ((::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder_ControlBuilder(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_BUILDER_CONTROLBUILDER_WITHLAYOUT_OFFSET))(this, layout);
		}
		*/

		/*
		::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder_ControlBuilder WithFormat(::UnityEngine::InputSystem::Utilities::FourCC format)
		{
			return ((::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder_ControlBuilder(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::FourCC))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_BUILDER_CONTROLBUILDER_WITHFORMAT_OFFSET))(this, format);
		}
		*/

		/*
		::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder_ControlBuilder WithFormat_1(::System::String* format)
		{
			return ((::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder_ControlBuilder(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_BUILDER_CONTROLBUILDER_WITHFORMAT_1_OFFSET))(this, format);
		}
		*/

		/*
		::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder_ControlBuilder WithByteOffset(::System::UInt32 offset)
		{
			return ((::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder_ControlBuilder(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_BUILDER_CONTROLBUILDER_WITHBYTEOFFSET_OFFSET))(this, offset);
		}
		*/

		/*
		::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder_ControlBuilder WithBitOffset(::System::UInt32 bit)
		{
			return ((::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder_ControlBuilder(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_BUILDER_CONTROLBUILDER_WITHBITOFFSET_OFFSET))(this, bit);
		}
		*/

		/*
		::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder_ControlBuilder IsSynthetic(::System::Boolean value)
		{
			return ((::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder_ControlBuilder(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_BUILDER_CONTROLBUILDER_ISSYNTHETIC_OFFSET))(this, value);
		}
		*/

		/*
		::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder_ControlBuilder IsNoisy(::System::Boolean value)
		{
			return ((::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder_ControlBuilder(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_BUILDER_CONTROLBUILDER_ISNOISY_OFFSET))(this, value);
		}
		*/

		/*
		::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder_ControlBuilder DontReset(::System::Boolean value)
		{
			return ((::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder_ControlBuilder(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_BUILDER_CONTROLBUILDER_DONTRESET_OFFSET))(this, value);
		}
		*/

		/*
		::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder_ControlBuilder WithSizeInBits(::System::UInt32 sizeInBits)
		{
			return ((::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder_ControlBuilder(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_BUILDER_CONTROLBUILDER_WITHSIZEINBITS_OFFSET))(this, sizeInBits);
		}
		*/

		/*
		::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder_ControlBuilder WithRange(::System::Single minValue, ::System::Single maxValue)
		{
			return ((::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder_ControlBuilder(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_BUILDER_CONTROLBUILDER_WITHRANGE_OFFSET))(this, minValue, maxValue);
		}
		*/

		/*
		::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder_ControlBuilder WithUsages(::Il2CppArray<::UnityEngine::InputSystem::Utilities::InternedString>* usages)
		{
			return ((::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder_ControlBuilder(*)(::PVOID, ::Il2CppArray<::UnityEngine::InputSystem::Utilities::InternedString>*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_BUILDER_CONTROLBUILDER_WITHUSAGES_OFFSET))(this, usages);
		}
		*/

		/*
		::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder_ControlBuilder WithUsages_1(::System::Collections::Generic::IEnumerable_1<::System::String*>* usages)
		{
			return ((::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder_ControlBuilder(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::String*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_BUILDER_CONTROLBUILDER_WITHUSAGES_1_OFFSET))(this, usages);
		}
		*/

		/*
		::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder_ControlBuilder WithUsages_2(::Il2CppArray<::System::String*>* usages)
		{
			return ((::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder_ControlBuilder(*)(::PVOID, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_BUILDER_CONTROLBUILDER_WITHUSAGES_2_OFFSET))(this, usages);
		}
		*/

		/*
		::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder_ControlBuilder WithParameters(::System::String* parameters)
		{
			return ((::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder_ControlBuilder(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_BUILDER_CONTROLBUILDER_WITHPARAMETERS_OFFSET))(this, parameters);
		}
		*/

		/*
		::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder_ControlBuilder WithProcessors(::System::String* processors)
		{
			return ((::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder_ControlBuilder(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_BUILDER_CONTROLBUILDER_WITHPROCESSORS_OFFSET))(this, processors);
		}
		*/

		/*
		::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder_ControlBuilder WithDefaultState(::UnityEngine::InputSystem::Utilities::PrimitiveValue value)
		{
			return ((::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder_ControlBuilder(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::PrimitiveValue))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_BUILDER_CONTROLBUILDER_WITHDEFAULTSTATE_OFFSET))(this, value);
		}
		*/

		/*
		::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder_ControlBuilder UsingStateFrom(::System::String* path)
		{
			return ((::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder_ControlBuilder(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_BUILDER_CONTROLBUILDER_USINGSTATEFROM_OFFSET))(this, path);
		}
		*/

		/*
		::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder_ControlBuilder AsArrayOfControlsWithSize(::System::Int32 arraySize)
		{
			return ((::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder_ControlBuilder(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_BUILDER_CONTROLBUILDER_ASARRAYOFCONTROLSWITHSIZE_OFFSET))(this, arraySize);
		}
		*/
	};
}
