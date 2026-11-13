#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/Internal/ArgumentField.h"
#include "unitysdk/System/Object.h"
namespace MessagePack::Internal { class AutomataDictionary; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System::Reflection::Emit { class ILGenerator; }
namespace System::Reflection::Emit { class LocalBuilder; }
namespace System::Reflection::Emit { class TypeBuilder; }

#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__DISPLAYCLASS17_0_CTOR_OFFSET UNITYSDK_OFFSET(0x174BE3C0)
#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__DISPLAYCLASS17_0__BUILDDESERIALIZEINTERNALDESERIALIZELOOPSTRINGKEY_G__FORBODY_0_OFFSET UNITYSDK_OFFSET(0x174C3100)

namespace MessagePack::Internal
{
	inline static constexpr unsigned int DynamicObjectTypeBuilder___c__DisplayClass17_0_TypeDefinitionIndex = 7334;

	class DynamicObjectTypeBuilder___c__DisplayClass17_0 : public ::System::Object
	{
	public:
		::System::Reflection::Emit::TypeBuilder* typeBuilder; // 0x10
		::System::Reflection::Emit::LocalBuilder* localResult; // 0x18
		::System::Reflection::Emit::LocalBuilder* localResolver; // 0x20
		::Il2CppArray<::System::Object*>* infoList; // 0x28
		::System::Func_3<::System::Int32, ::System::Object*, ::System::Action*>* tryEmitLoadCustomFormatter; // 0x30
		::MessagePack::Internal::ArgumentField options; // 0x38
		::System::Reflection::Emit::LocalBuilder* buffer; // 0x48
		::System::Reflection::Emit::LocalBuilder* longKey; // 0x50
		::MessagePack::Internal::AutomataDictionary* automata; // 0x58
		::System::Reflection::Emit::ILGenerator* il; // 0x60
		::MessagePack::Internal::ArgumentField reader; // 0x68
		::System::Boolean canOverwrite; // 0x78
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__DISPLAYCLASS17_0_CTOR_OFFSET))(this);
		}

		::System::Void _BuildDeserializeInternalDeserializeLoopStringKey_g__ForBody_0(::System::Reflection::Emit::LocalBuilder* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::Emit::LocalBuilder*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__DISPLAYCLASS17_0__BUILDDESERIALIZEINTERNALDESERIALIZELOOPSTRINGKEY_G__FORBODY_0_OFFSET))(this, a1);
		}

	};
}
