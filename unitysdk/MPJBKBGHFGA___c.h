#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BFJLKEFDALJ;
namespace System { template <typename T> class Action_1; }

#define MPJBKBGHFGA___C_FOKCLHCFMJF_OFFSET UNITYSDK_OFFSET(0x12183380)
#define MPJBKBGHFGA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x12183330)
#define MPJBKBGHFGA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x12183370)

inline static constexpr unsigned int MPJBKBGHFGA___c_TypeDefinitionIndex = 55135;

class MPJBKBGHFGA___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(MPJBKBGHFGA___c_TypeDefinitionIndex)->GetStaticField(0x386A0);
	}
	static ::System::Action_1<::BFJLKEFDALJ*>** StaticGet___9__2_0()
	{
		return (::System::Action_1<::BFJLKEFDALJ*>**)Il2CppClass::FromTypeDefinitionIndex(MPJBKBGHFGA___c_TypeDefinitionIndex)->GetStaticField(0x386A8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MPJBKBGHFGA___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPJBKBGHFGA___C__CTOR_OFFSET))(this);
	}

	::System::Void FOKCLHCFMJF(::BFJLKEFDALJ* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::BFJLKEFDALJ*))((::PBYTE)hIl2Cpp + MPJBKBGHFGA___C_FOKCLHCFMJF_OFFSET))(this, GLAOEHCGCFO);
	}
};
