#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

template <typename T> class F69328EED8D4B527;

#define FC0990D029351DA5_BD072F5C12999361_OFFSET UNITYSDK_OFFSET(0x3BBFE90)
#define FC0990D029351DA5__CCTOR_OFFSET UNITYSDK_OFFSET(0x3BBFFA0)

inline static constexpr unsigned int FC0990D029351DA5_TypeDefinitionIndex = 11230;

class FC0990D029351DA5 : public ::System::Object
{
public:
	static ::F69328EED8D4B527<::System::Boolean>** StaticGet_B5D08DC04F152530()
	{
		return (::F69328EED8D4B527<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(FC0990D029351DA5_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::F69328EED8D4B527<::System::Boolean>** StaticGet_B3F5F691377980BD()
	{
		return (::F69328EED8D4B527<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(FC0990D029351DA5_TypeDefinitionIndex)->GetStaticField(0x8);
	}
	static ::Il2CppArray<::F69328EED8D4B527<::System::Int32>*>** StaticGet_FAFD2068826057F9()
	{
		return (::Il2CppArray<::F69328EED8D4B527<::System::Int32>*>**)Il2CppClass::FromTypeDefinitionIndex(FC0990D029351DA5_TypeDefinitionIndex)->GetStaticField(0x10);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FC0990D029351DA5__CCTOR_OFFSET))();
	}

	static ::Il2CppArray<::F69328EED8D4B527<::System::Int32>*>* BD072F5C12999361()
	{
		return ((::Il2CppArray<::F69328EED8D4B527<::System::Int32>*>*(*)())((::PBYTE)hIl2Cpp + FC0990D029351DA5_BD072F5C12999361_OFFSET))();
	}
};
