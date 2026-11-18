#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define DOKCJIBPOBC__CCTOR_OFFSET UNITYSDK_OFFSET(0x13E65290)

inline static constexpr unsigned int DOKCJIBPOBC_TypeDefinitionIndex = 64865;

class DOKCJIBPOBC : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_JKOLKNMEDAK()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(DOKCJIBPOBC_TypeDefinitionIndex)->GetStaticField(0x4E340);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DOKCJIBPOBC__CCTOR_OFFSET))();
	}
};
