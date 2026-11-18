#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define AMACFMBIMBH__CCTOR_OFFSET UNITYSDK_OFFSET(0x1820D3C0)

inline static constexpr unsigned int AMACFMBIMBH_TypeDefinitionIndex = 87249;

class AMACFMBIMBH : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_JHIDJEMPNPC()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(AMACFMBIMBH_TypeDefinitionIndex)->GetStaticField(0x511D0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AMACFMBIMBH__CCTOR_OFFSET))();
	}
};
