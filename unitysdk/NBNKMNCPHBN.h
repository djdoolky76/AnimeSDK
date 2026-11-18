#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define NBNKMNCPHBN__CCTOR_OFFSET UNITYSDK_OFFSET(0x105AAD70)

inline static constexpr unsigned int NBNKMNCPHBN_TypeDefinitionIndex = 80005;

class NBNKMNCPHBN : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_HNGHNENKPOE()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(NBNKMNCPHBN_TypeDefinitionIndex)->GetStaticField(0x4AF00);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NBNKMNCPHBN__CCTOR_OFFSET))();
	}
};
