#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define LBHNDGLIAGM__CCTOR_OFFSET UNITYSDK_OFFSET(0x163579F0)

inline static constexpr unsigned int LBHNDGLIAGM_TypeDefinitionIndex = 51858;

class LBHNDGLIAGM : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_JHJLPCBHNIH()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(LBHNDGLIAGM_TypeDefinitionIndex)->GetStaticField(0x4F740);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LBHNDGLIAGM__CCTOR_OFFSET))();
	}
};
