#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define FD7CBAA056822D27__CCTOR_OFFSET UNITYSDK_OFFSET(0x26C3670)
#define FD7CBAA056822D27__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int FD7CBAA056822D27_TypeDefinitionIndex = 6590;

class FD7CBAA056822D27 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_A84B6069FDCF10E9()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(FD7CBAA056822D27_TypeDefinitionIndex)->GetStaticField(0x0);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FD7CBAA056822D27__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FD7CBAA056822D27__CCTOR_OFFSET))();
	}
};
