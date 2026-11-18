#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define BLNCLGGKINK__CCTOR_OFFSET UNITYSDK_OFFSET(0x113F3060)

inline static constexpr unsigned int BLNCLGGKINK_TypeDefinitionIndex = 65863;

class BLNCLGGKINK : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_NNMFGIPGFJK()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(BLNCLGGKINK_TypeDefinitionIndex)->GetStaticField(0x3A470);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BLNCLGGKINK__CCTOR_OFFSET))();
	}
};
