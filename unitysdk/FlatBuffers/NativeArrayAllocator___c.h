#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class EventArgs; }
namespace System { class EventHandler; }

#define FLATBUFFERS_NATIVEARRAYALLOCATOR___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F9E9100)
#define FLATBUFFERS_NATIVEARRAYALLOCATOR___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1F9E9140)
#define FLATBUFFERS_NATIVEARRAYALLOCATOR___C___CTOR_B__5_0_OFFSET UNITYSDK_OFFSET(0x1F9E9150)

namespace FlatBuffers
{
	inline static constexpr unsigned int NativeArrayAllocator___c_TypeDefinitionIndex = 6733;

	class NativeArrayAllocator___c : public ::System::Object
	{
	public:
		static ::System::EventHandler** StaticGet___9__5_0()
		{
			return (::System::EventHandler**)Il2CppClass::FromTypeDefinitionIndex(NativeArrayAllocator___c_TypeDefinitionIndex)->GetStaticField(0x5AB0);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(NativeArrayAllocator___c_TypeDefinitionIndex)->GetStaticField(0x5AB8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FLATBUFFERS_NATIVEARRAYALLOCATOR___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATBUFFERS_NATIVEARRAYALLOCATOR___C__CTOR_OFFSET))(this);
		}

		::System::Void __ctor_b__5_0(::System::Object* sender, ::System::EventArgs* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::EventArgs*))((::PBYTE)hIl2Cpp + FLATBUFFERS_NATIVEARRAYALLOCATOR___C___CTOR_B__5_0_OFFSET))(this, sender, e);
		}
	};
}
