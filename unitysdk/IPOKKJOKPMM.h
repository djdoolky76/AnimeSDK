#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define IPOKKJOKPMM__CCTOR_OFFSET UNITYSDK_OFFSET(0x194430E0)

inline static constexpr unsigned int IPOKKJOKPMM_TypeDefinitionIndex = 79474;

class IPOKKJOKPMM : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_EFHOOIKNLKB()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(IPOKKJOKPMM_TypeDefinitionIndex)->GetStaticField(0x37FB0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IPOKKJOKPMM__CCTOR_OFFSET))();
	}
};
