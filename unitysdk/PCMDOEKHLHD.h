#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define PCMDOEKHLHD__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A7E42F0)

inline static constexpr unsigned int PCMDOEKHLHD_TypeDefinitionIndex = 76344;

class PCMDOEKHLHD : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_AACCEFLMLKC()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(PCMDOEKHLHD_TypeDefinitionIndex)->GetStaticField(0x3CEF0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PCMDOEKHLHD__CCTOR_OFFSET))();
	}
};
