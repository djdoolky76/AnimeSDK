#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define B954180A9C4D7330_A082A8032BC10B08_OFFSET UNITYSDK_OFFSET(0x3DFE7A0)
#define B954180A9C4D7330_B04C53B038F21017_OFFSET UNITYSDK_OFFSET(0x3E99450)
#define B954180A9C4D7330_FD5C8A6AD14E8D8A_OFFSET UNITYSDK_OFFSET(0x3E99440)
#define B954180A9C4D7330__CCTOR_OFFSET UNITYSDK_OFFSET(0x3E99460)

inline static constexpr unsigned int B954180A9C4D7330_TypeDefinitionIndex = 14988;

class B954180A9C4D7330 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_E863DB62B80F8326()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(B954180A9C4D7330_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::Il2CppArray<::System::Char>** StaticGet_AAE8CEA337B69036()
	{
		return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(B954180A9C4D7330_TypeDefinitionIndex)->GetStaticField(0x8);
	}
	static ::Il2CppArray<::System::Char>** StaticGet_E38476CC89DA54BA()
	{
		return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(B954180A9C4D7330_TypeDefinitionIndex)->GetStaticField(0x10);
	}

	static ::System::Boolean FD5C8A6AD14E8D8A(::System::String* B9328F10E0BEB500)
	{
		return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + B954180A9C4D7330_FD5C8A6AD14E8D8A_OFFSET))(B9328F10E0BEB500);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + B954180A9C4D7330__CCTOR_OFFSET))();
	}

	static ::System::String* B04C53B038F21017(::System::String* B9328F10E0BEB500)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + B954180A9C4D7330_B04C53B038F21017_OFFSET))(B9328F10E0BEB500);
	}

	static ::System::Boolean A082A8032BC10B08(::System::Int32 E2A17605F8F19F4D)
	{
		return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + B954180A9C4D7330_A082A8032BC10B08_OFFSET))(E2A17605F8F19F4D);
	}
};
