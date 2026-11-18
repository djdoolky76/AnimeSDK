#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define HNCICILNIIE__CCTOR_OFFSET UNITYSDK_OFFSET(0x15DC9FC0)

inline static constexpr unsigned int HNCICILNIIE_TypeDefinitionIndex = 65291;

class HNCICILNIIE : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_LNLDJBDMKJK()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(HNCICILNIIE_TypeDefinitionIndex)->GetStaticField(0x40C20);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HNCICILNIIE__CCTOR_OFFSET))();
	}
};
