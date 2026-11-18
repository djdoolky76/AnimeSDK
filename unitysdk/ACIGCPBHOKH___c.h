#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class EAPHGLKMJME;
namespace System { template <typename T1, typename T2> class Func_2; }

#define ACIGCPBHOKH___C_LKBKLADJLFG_OFFSET UNITYSDK_OFFSET(0x1433D8F0)
#define ACIGCPBHOKH___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1433D8A0)
#define ACIGCPBHOKH___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1433D8E0)

inline static constexpr unsigned int ACIGCPBHOKH___c_TypeDefinitionIndex = 82019;

class ACIGCPBHOKH___c : public ::System::Object
{
public:
	static ::System::Func_2<::EAPHGLKMJME*, ::System::Int32>** StaticGet___9__1_0()
	{
		return (::System::Func_2<::EAPHGLKMJME*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(ACIGCPBHOKH___c_TypeDefinitionIndex)->GetStaticField(0x3D2D0);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(ACIGCPBHOKH___c_TypeDefinitionIndex)->GetStaticField(0x3D2D8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ACIGCPBHOKH___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACIGCPBHOKH___C__CTOR_OFFSET))(this);
	}

	::System::Int32 LKBKLADJLFG(::EAPHGLKMJME* IPMMCGDMODG)
	{
		return ((::System::Int32(*)(::PVOID, ::EAPHGLKMJME*))((::PBYTE)hIl2Cpp + ACIGCPBHOKH___C_LKBKLADJLFG_OFFSET))(this, IPMMCGDMODG);
	}
};
