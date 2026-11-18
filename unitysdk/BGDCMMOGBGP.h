#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define BGDCMMOGBGP__CCTOR_OFFSET UNITYSDK_OFFSET(0x15075B10)

inline static constexpr unsigned int BGDCMMOGBGP_TypeDefinitionIndex = 61755;

class BGDCMMOGBGP : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_FNCLCJPJEOF()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(BGDCMMOGBGP_TypeDefinitionIndex)->GetStaticField(0x50040);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BGDCMMOGBGP__CCTOR_OFFSET))();
	}
};
