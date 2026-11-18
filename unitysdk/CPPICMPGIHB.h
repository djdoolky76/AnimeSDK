#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CPPICMPGIHB__CCTOR_OFFSET UNITYSDK_OFFSET(0x1497DCF0)

inline static constexpr unsigned int CPPICMPGIHB_TypeDefinitionIndex = 92383;

class CPPICMPGIHB : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_LHDLBIGEPOP()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(CPPICMPGIHB_TypeDefinitionIndex)->GetStaticField(0x31330);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CPPICMPGIHB__CCTOR_OFFSET))();
	}
};
