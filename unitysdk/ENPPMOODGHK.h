#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define ENPPMOODGHK__CCTOR_OFFSET UNITYSDK_OFFSET(0x158C2B00)

inline static constexpr unsigned int ENPPMOODGHK_TypeDefinitionIndex = 70464;

class ENPPMOODGHK : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_NCNKNEANKIK()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(ENPPMOODGHK_TypeDefinitionIndex)->GetStaticField(0x31870);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ENPPMOODGHK__CCTOR_OFFSET))();
	}
};
