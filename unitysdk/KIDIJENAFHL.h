#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define KIDIJENAFHL__CCTOR_OFFSET UNITYSDK_OFFSET(0x14FE0330)

inline static constexpr unsigned int KIDIJENAFHL_TypeDefinitionIndex = 68833;

class KIDIJENAFHL : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_IBKOAOGMNAA()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(KIDIJENAFHL_TypeDefinitionIndex)->GetStaticField(0x3B7E0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KIDIJENAFHL__CCTOR_OFFSET))();
	}
};
