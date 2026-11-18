#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HALDKBIKHDN.h"
#include "unitysdk/System/Object.h"

#define BFCBHBJHGKG__CCTOR_OFFSET UNITYSDK_OFFSET(0x17022400)

inline static constexpr unsigned int BFCBHBJHGKG_TypeDefinitionIndex = 67772;

class BFCBHBJHGKG : public ::System::Object
{
public:
	static ::Il2CppArray<::HALDKBIKHDN>** StaticGet_MAEFKBMHEKC()
	{
		return (::Il2CppArray<::HALDKBIKHDN>**)Il2CppClass::FromTypeDefinitionIndex(BFCBHBJHGKG_TypeDefinitionIndex)->GetStaticField(0x42D70);
	}
	static ::System::Int32* StaticGet_OMLHAONHPEE()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(BFCBHBJHGKG_TypeDefinitionIndex)->GetStaticField(0xF6D0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BFCBHBJHGKG__CCTOR_OFFSET))();
	}
};
