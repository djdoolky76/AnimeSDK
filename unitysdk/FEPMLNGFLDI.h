#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define FEPMLNGFLDI__CCTOR_OFFSET UNITYSDK_OFFSET(0x140EC810)

inline static constexpr unsigned int FEPMLNGFLDI_TypeDefinitionIndex = 59045;

class FEPMLNGFLDI : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_BFEJIFAAANK()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(FEPMLNGFLDI_TypeDefinitionIndex)->GetStaticField(0x507C0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FEPMLNGFLDI__CCTOR_OFFSET))();
	}
};
