#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MLJKGJHNFBE__CCTOR_OFFSET UNITYSDK_OFFSET(0x14D8E020)

inline static constexpr unsigned int MLJKGJHNFBE_TypeDefinitionIndex = 65960;

class MLJKGJHNFBE : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_IMFBHEMIAOC()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(MLJKGJHNFBE_TypeDefinitionIndex)->GetStaticField(0x4E850);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MLJKGJHNFBE__CCTOR_OFFSET))();
	}
};
