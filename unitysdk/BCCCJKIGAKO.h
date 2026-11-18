#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define BCCCJKIGAKO__CCTOR_OFFSET UNITYSDK_OFFSET(0x143CBEB0)

inline static constexpr unsigned int BCCCJKIGAKO_TypeDefinitionIndex = 59676;

class BCCCJKIGAKO : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_OACPHGOCHKL()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(BCCCJKIGAKO_TypeDefinitionIndex)->GetStaticField(0x4F1D0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BCCCJKIGAKO__CCTOR_OFFSET))();
	}
};
