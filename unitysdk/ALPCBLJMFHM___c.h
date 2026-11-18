#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define ALPCBLJMFHM___C_CENACNOOIKP_OFFSET UNITYSDK_OFFSET(0x134E2110)
#define ALPCBLJMFHM___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x134E20C0)
#define ALPCBLJMFHM___C__CTOR_OFFSET UNITYSDK_OFFSET(0x134E2100)

inline static constexpr unsigned int ALPCBLJMFHM___c_TypeDefinitionIndex = 73211;

class ALPCBLJMFHM___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(ALPCBLJMFHM___c_TypeDefinitionIndex)->GetStaticField(0x3FEC0);
	}
	static ::System::Func_2<::System::Int32, ::System::UInt32>** StaticGet___9__3_0()
	{
		return (::System::Func_2<::System::Int32, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(ALPCBLJMFHM___c_TypeDefinitionIndex)->GetStaticField(0x3FEC8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ALPCBLJMFHM___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALPCBLJMFHM___C__CTOR_OFFSET))(this);
	}

	::System::UInt32 CENACNOOIKP(::System::Int32 DLJPLHKELCO)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ALPCBLJMFHM___C_CENACNOOIKP_OFFSET))(this, DLJPLHKELCO);
	}
};
