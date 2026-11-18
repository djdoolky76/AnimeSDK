#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define GIHDPBKKLBG__CCTOR_OFFSET UNITYSDK_OFFSET(0x125D2E50)

inline static constexpr unsigned int GIHDPBKKLBG_TypeDefinitionIndex = 87947;

class GIHDPBKKLBG : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_PCPCECEBHPL()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(GIHDPBKKLBG_TypeDefinitionIndex)->GetStaticField(0x4E4B0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GIHDPBKKLBG__CCTOR_OFFSET))();
	}
};
