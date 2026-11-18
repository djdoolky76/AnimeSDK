#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CJLIBACJFLM__CCTOR_OFFSET UNITYSDK_OFFSET(0x147A6770)

inline static constexpr unsigned int CJLIBACJFLM_TypeDefinitionIndex = 49572;

class CJLIBACJFLM : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_NDFBPIAMBMB()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(CJLIBACJFLM_TypeDefinitionIndex)->GetStaticField(0x47C60);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CJLIBACJFLM__CCTOR_OFFSET))();
	}
};
