#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define DFEBOPELMDI___C_COHKMELJOHG_OFFSET UNITYSDK_OFFSET(0x193FD700)
#define DFEBOPELMDI___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x193FD6B0)
#define DFEBOPELMDI___C__CTOR_OFFSET UNITYSDK_OFFSET(0x193FD6F0)

inline static constexpr unsigned int DFEBOPELMDI___c_TypeDefinitionIndex = 71688;

class DFEBOPELMDI___c : public ::System::Object
{
public:
	static ::System::Func_2<::System::UInt32, ::System::Int32>** StaticGet___9__95_0()
	{
		return (::System::Func_2<::System::UInt32, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(DFEBOPELMDI___c_TypeDefinitionIndex)->GetStaticField(0x43170);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(DFEBOPELMDI___c_TypeDefinitionIndex)->GetStaticField(0x43178);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DFEBOPELMDI___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFEBOPELMDI___C__CTOR_OFFSET))(this);
	}

	::System::Int32 COHKMELJOHG(::System::UInt32 HBJOLKHGGDD)
	{
		return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DFEBOPELMDI___C_COHKMELJOHG_OFFSET))(this, HBJOLKHGGDD);
	}
};
