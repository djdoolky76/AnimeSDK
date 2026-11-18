#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define FLECLDPCIIN__CCTOR_OFFSET UNITYSDK_OFFSET(0x15EE78D0)

inline static constexpr unsigned int FLECLDPCIIN_TypeDefinitionIndex = 64367;

class FLECLDPCIIN : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_OFKPDFIOPIO()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(FLECLDPCIIN_TypeDefinitionIndex)->GetStaticField(0x46260);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FLECLDPCIIN__CCTOR_OFFSET))();
	}
};
