#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define DFCGEABPOFB_BBPCBEEHALC_OFFSET UNITYSDK_OFFSET(0x7F6ED40)

inline static constexpr unsigned int DFCGEABPOFB_TypeDefinitionIndex = 39735;

class DFCGEABPOFB : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_GDCACEPHHHL()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DFCGEABPOFB_TypeDefinitionIndex)->GetStaticField(0x13350);
	}

	static ::System::Int32 BBPCBEEHALC()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + DFCGEABPOFB_BBPCBEEHALC_OFFSET))();
	}
};
