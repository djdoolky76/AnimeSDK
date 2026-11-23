#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define UNITYENGINE_FC5BD86DF36558D5_FF87692170915928_B9B454240F93E900_OFFSET UNITYSDK_OFFSET(0x414FCC0)
#define UNITYENGINE_FC5BD86DF36558D5_FF87692170915928__CCTOR_OFFSET UNITYSDK_OFFSET(0x414FD30)

namespace UnityEngine
{
	inline static constexpr unsigned int FC5BD86DF36558D5_FF87692170915928_TypeDefinitionIndex = 17447;

	class FC5BD86DF36558D5_FF87692170915928 : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_AFC70F98255B15D1()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(FC5BD86DF36558D5_FF87692170915928_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::String** StaticGet_FE7EDDA9A45BC668()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(FC5BD86DF36558D5_FF87692170915928_TypeDefinitionIndex)->GetStaticField(0x8);
		}
		static ::System::String** StaticGet_A248F54E47444682()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(FC5BD86DF36558D5_FF87692170915928_TypeDefinitionIndex)->GetStaticField(0x10);
		}
		static ::System::String** StaticGet_B9EF71A2B2E8C24C()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(FC5BD86DF36558D5_FF87692170915928_TypeDefinitionIndex)->GetStaticField(0x18);
		}
		static ::System::String** StaticGet_E5F90EB2C548680D()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(FC5BD86DF36558D5_FF87692170915928_TypeDefinitionIndex)->GetStaticField(0x20);
		}
		static ::System::String** StaticGet_A9F8F4106320F142()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(FC5BD86DF36558D5_FF87692170915928_TypeDefinitionIndex)->GetStaticField(0x28);
		}
		static ::System::String** StaticGet_B77856F096A3253A()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(FC5BD86DF36558D5_FF87692170915928_TypeDefinitionIndex)->GetStaticField(0x30);
		}
		static ::System::String** StaticGet_FC19004F685037E9()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(FC5BD86DF36558D5_FF87692170915928_TypeDefinitionIndex)->GetStaticField(0x38);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_F935CF89F2922588()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(FC5BD86DF36558D5_FF87692170915928_TypeDefinitionIndex)->GetStaticField(0x40);
		}

		static ::System::Boolean B9B454240F93E900(::System::String* F611F85652276C9D)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_FC5BD86DF36558D5_FF87692170915928_B9B454240F93E900_OFFSET))(F611F85652276C9D);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_FC5BD86DF36558D5_FF87692170915928__CCTOR_OFFSET))();
		}
	};
}
