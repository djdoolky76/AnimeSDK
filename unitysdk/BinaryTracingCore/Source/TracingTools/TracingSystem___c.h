#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace BinaryTracingFramework::Serialize { class ISerializableObject; }
namespace System { template <typename T> class Action_1; }

#define BINARYTRACINGCORE_SOURCE_TRACINGTOOLS_TRACINGSYSTEM___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FA363A0)
#define BINARYTRACINGCORE_SOURCE_TRACINGTOOLS_TRACINGSYSTEM___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1FA363E0)
#define BINARYTRACINGCORE_SOURCE_TRACINGTOOLS_TRACINGSYSTEM___C__PUSHCURBLOCK_B__19_0_OFFSET UNITYSDK_OFFSET(0x1FA363F0)

namespace BinaryTracingCore::Source::TracingTools
{
	inline static constexpr unsigned int TracingSystem___c_TypeDefinitionIndex = 34147;

	class TracingSystem___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(TracingSystem___c_TypeDefinitionIndex)->GetStaticField(0x2A130);
		}
		static ::System::Action_1<::BinaryTracingFramework::Serialize::ISerializableObject*>** StaticGet___9__19_0()
		{
			return (::System::Action_1<::BinaryTracingFramework::Serialize::ISerializableObject*>**)Il2CppClass::FromTypeDefinitionIndex(TracingSystem___c_TypeDefinitionIndex)->GetStaticField(0x2A138);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BINARYTRACINGCORE_SOURCE_TRACINGTOOLS_TRACINGSYSTEM___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BINARYTRACINGCORE_SOURCE_TRACINGTOOLS_TRACINGSYSTEM___C__CTOR_OFFSET))(this);
		}

		::System::Void _PushCurBlock_b__19_0(::BinaryTracingFramework::Serialize::ISerializableObject* o)
		{
			return ((::System::Void(*)(::PVOID, ::BinaryTracingFramework::Serialize::ISerializableObject*))((::PBYTE)hIl2Cpp + BINARYTRACINGCORE_SOURCE_TRACINGTOOLS_TRACINGSYSTEM___C__PUSHCURBLOCK_B__19_0_OFFSET))(this, o);
		}
	};
}
