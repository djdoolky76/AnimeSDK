#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/A6D2FD464EF7941B/AFD48C5F336A8F1F.h"
#include "unitysdk/System/Object.h"

#define FDEBE31AC6BFC8B3_F0473E485E4A1D9E_OFFSET UNITYSDK_OFFSET(0x3B3A780)
#define FDEBE31AC6BFC8B3__CCTOR_OFFSET UNITYSDK_OFFSET(0x3B3A740)

inline static constexpr unsigned int FDEBE31AC6BFC8B3_TypeDefinitionIndex = 19339;

class FDEBE31AC6BFC8B3 : public ::System::Object
{
public:
	static ::A6D2FD464EF7941B::AFD48C5F336A8F1F* StaticGet_BE44BC8BE1A42469()
	{
		return (::A6D2FD464EF7941B::AFD48C5F336A8F1F*)Il2CppClass::FromTypeDefinitionIndex(FDEBE31AC6BFC8B3_TypeDefinitionIndex)->GetStaticField(0x0);
	}

	static ::A6D2FD464EF7941B::AFD48C5F336A8F1F F0473E485E4A1D9E()
	{
		return ((::A6D2FD464EF7941B::AFD48C5F336A8F1F(*)())((::PBYTE)hIl2Cpp + FDEBE31AC6BFC8B3_F0473E485E4A1D9E_OFFSET))();
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FDEBE31AC6BFC8B3__CCTOR_OFFSET))();
	}
};
