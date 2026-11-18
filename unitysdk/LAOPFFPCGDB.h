#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define LAOPFFPCGDB__CCTOR_OFFSET UNITYSDK_OFFSET(0x15235540)

inline static constexpr unsigned int LAOPFFPCGDB_TypeDefinitionIndex = 90465;

class LAOPFFPCGDB : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_NKHEAKCEFLH()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(LAOPFFPCGDB_TypeDefinitionIndex)->GetStaticField(0x468C0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LAOPFFPCGDB__CCTOR_OFFSET))();
	}
};
