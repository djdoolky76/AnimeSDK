#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define DBHGBLOIING__CCTOR_OFFSET UNITYSDK_OFFSET(0x1498F440)

inline static constexpr unsigned int DBHGBLOIING_TypeDefinitionIndex = 63883;

class DBHGBLOIING : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_GOEFGIBMOIM()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(DBHGBLOIING_TypeDefinitionIndex)->GetStaticField(0x31390);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DBHGBLOIING__CCTOR_OFFSET))();
	}
};
