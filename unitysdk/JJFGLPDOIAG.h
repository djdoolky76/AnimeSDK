#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define JJFGLPDOIAG__CCTOR_OFFSET UNITYSDK_OFFSET(0x1873EA00)

inline static constexpr unsigned int JJFGLPDOIAG_TypeDefinitionIndex = 76578;

class JJFGLPDOIAG : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_AMPJDMJAMIA()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(JJFGLPDOIAG_TypeDefinitionIndex)->GetStaticField(0x40F60);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JJFGLPDOIAG__CCTOR_OFFSET))();
	}
};
