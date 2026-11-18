#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ECFKCNGMEKJ;
namespace System { template <typename T1, typename T2> class Func_2; }

#define BMDNLGGOIIH___C_KDAFGEDBHFL_OFFSET UNITYSDK_OFFSET(0x115FD400)
#define BMDNLGGOIIH___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x115FD3B0)
#define BMDNLGGOIIH___C__CTOR_OFFSET UNITYSDK_OFFSET(0x115FD3F0)

inline static constexpr unsigned int BMDNLGGOIIH___c_TypeDefinitionIndex = 77953;

class BMDNLGGOIIH___c : public ::System::Object
{
public:
	static ::System::Func_2<::ECFKCNGMEKJ*, ::System::Int32>** StaticGet___9__14_0()
	{
		return (::System::Func_2<::ECFKCNGMEKJ*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(BMDNLGGOIIH___c_TypeDefinitionIndex)->GetStaticField(0x51220);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(BMDNLGGOIIH___c_TypeDefinitionIndex)->GetStaticField(0x51228);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BMDNLGGOIIH___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMDNLGGOIIH___C__CTOR_OFFSET))(this);
	}

	::System::Int32 KDAFGEDBHFL(::ECFKCNGMEKJ* IMLLDOHDCNC)
	{
		return ((::System::Int32(*)(::PVOID, ::ECFKCNGMEKJ*))((::PBYTE)hIl2Cpp + BMDNLGGOIIH___C_KDAFGEDBHFL_OFFSET))(this, IMLLDOHDCNC);
	}
};
