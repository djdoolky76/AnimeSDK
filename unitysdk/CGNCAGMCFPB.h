#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CGNCAGMCFPB__CCTOR_OFFSET UNITYSDK_OFFSET(0x16867A10)

inline static constexpr unsigned int CGNCAGMCFPB_TypeDefinitionIndex = 65525;

class CGNCAGMCFPB : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_HPJDEFENMLM()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(CGNCAGMCFPB_TypeDefinitionIndex)->GetStaticField(0x51240);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CGNCAGMCFPB__CCTOR_OFFSET))();
	}
};
