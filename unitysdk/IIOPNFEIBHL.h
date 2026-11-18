#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define IIOPNFEIBHL__CCTOR_OFFSET UNITYSDK_OFFSET(0x153AC950)

inline static constexpr unsigned int IIOPNFEIBHL_TypeDefinitionIndex = 60980;

class IIOPNFEIBHL : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_IBHEKHCJJEK()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(IIOPNFEIBHL_TypeDefinitionIndex)->GetStaticField(0x443F0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IIOPNFEIBHL__CCTOR_OFFSET))();
	}
};
