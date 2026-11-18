#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define LPOJICMBCNK__CCTOR_OFFSET UNITYSDK_OFFSET(0x15909770)

inline static constexpr unsigned int LPOJICMBCNK_TypeDefinitionIndex = 63946;

class LPOJICMBCNK : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_NEGHIIHCMIJ()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(LPOJICMBCNK_TypeDefinitionIndex)->GetStaticField(0x38560);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LPOJICMBCNK__CCTOR_OFFSET))();
	}
};
