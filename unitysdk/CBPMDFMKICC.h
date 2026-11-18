#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CBPMDFMKICC__CCTOR_OFFSET UNITYSDK_OFFSET(0x10E31130)

inline static constexpr unsigned int CBPMDFMKICC_TypeDefinitionIndex = 91726;

class CBPMDFMKICC : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_HOBEEKLKOAP()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(CBPMDFMKICC_TypeDefinitionIndex)->GetStaticField(0x4CC90);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CBPMDFMKICC__CCTOR_OFFSET))();
	}
};
