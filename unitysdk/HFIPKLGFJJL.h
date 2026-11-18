#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define HFIPKLGFJJL__CCTOR_OFFSET UNITYSDK_OFFSET(0x16CEBB10)

inline static constexpr unsigned int HFIPKLGFJJL_TypeDefinitionIndex = 81436;

class HFIPKLGFJJL : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_CFCMOENLCKA()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(HFIPKLGFJJL_TypeDefinitionIndex)->GetStaticField(0x37B00);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HFIPKLGFJJL__CCTOR_OFFSET))();
	}
};
