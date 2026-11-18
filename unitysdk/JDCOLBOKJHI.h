#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define JDCOLBOKJHI__CCTOR_OFFSET UNITYSDK_OFFSET(0x1659C2B0)

inline static constexpr unsigned int JDCOLBOKJHI_TypeDefinitionIndex = 76542;

class JDCOLBOKJHI : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_MDFBDPBIMPK()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(JDCOLBOKJHI_TypeDefinitionIndex)->GetStaticField(0x51510);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JDCOLBOKJHI__CCTOR_OFFSET))();
	}
};
