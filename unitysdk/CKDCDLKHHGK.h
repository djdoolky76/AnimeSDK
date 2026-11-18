#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CKDCDLKHHGK__CCTOR_OFFSET UNITYSDK_OFFSET(0x1496B690)

inline static constexpr unsigned int CKDCDLKHHGK_TypeDefinitionIndex = 81307;

class CKDCDLKHHGK : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_EAIGHOJJBHD()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(CKDCDLKHHGK_TypeDefinitionIndex)->GetStaticField(0x31280);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CKDCDLKHHGK__CCTOR_OFFSET))();
	}
};
