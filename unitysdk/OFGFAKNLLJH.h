#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define OFGFAKNLLJH__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B77E260)

inline static constexpr unsigned int OFGFAKNLLJH_TypeDefinitionIndex = 88058;

class OFGFAKNLLJH : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_MCDBIJAIGKP()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(OFGFAKNLLJH_TypeDefinitionIndex)->GetStaticField(0x39CE0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OFGFAKNLLJH__CCTOR_OFFSET))();
	}
};
