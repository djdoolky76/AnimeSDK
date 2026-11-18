#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define ANPOEKMLNBJ__CCTOR_OFFSET UNITYSDK_OFFSET(0x113C39E0)

inline static constexpr unsigned int ANPOEKMLNBJ_TypeDefinitionIndex = 50534;

class ANPOEKMLNBJ : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_AKKFMMPIMFM()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(ANPOEKMLNBJ_TypeDefinitionIndex)->GetStaticField(0x3A360);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ANPOEKMLNBJ__CCTOR_OFFSET))();
	}
};
