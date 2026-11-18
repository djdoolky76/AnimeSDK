#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MLEJDOMKMGJ__CCTOR_OFFSET UNITYSDK_OFFSET(0x174A6E10)

inline static constexpr unsigned int MLEJDOMKMGJ_TypeDefinitionIndex = 89955;

class MLEJDOMKMGJ : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_NLGMJPBLLKO()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(MLEJDOMKMGJ_TypeDefinitionIndex)->GetStaticField(0x4A410);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MLEJDOMKMGJ__CCTOR_OFFSET))();
	}
};
