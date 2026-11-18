#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class LLCABFILHMP;
namespace System { template <typename T1, typename T2> class Func_2; }

#define MNCMPIPEJLG_PIJEIPPHDGG___C_NFHHJBDFANF_OFFSET UNITYSDK_OFFSET(0x177CFC20)
#define MNCMPIPEJLG_PIJEIPPHDGG___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x177CFBD0)
#define MNCMPIPEJLG_PIJEIPPHDGG___C__CTOR_OFFSET UNITYSDK_OFFSET(0x177CFC10)

inline static constexpr unsigned int MNCMPIPEJLG_PIJEIPPHDGG___c_TypeDefinitionIndex = 46697;

class MNCMPIPEJLG_PIJEIPPHDGG___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(MNCMPIPEJLG_PIJEIPPHDGG___c_TypeDefinitionIndex)->GetStaticField(0x41870);
	}
	static ::System::Func_2<::LLCABFILHMP*, ::System::Boolean>** StaticGet___9__14_0()
	{
		return (::System::Func_2<::LLCABFILHMP*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(MNCMPIPEJLG_PIJEIPPHDGG___c_TypeDefinitionIndex)->GetStaticField(0x41878);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MNCMPIPEJLG_PIJEIPPHDGG___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNCMPIPEJLG_PIJEIPPHDGG___C__CTOR_OFFSET))(this);
	}

	::System::Boolean NFHHJBDFANF(::LLCABFILHMP* HMDKKCKDOFP)
	{
		return ((::System::Boolean(*)(::PVOID, ::LLCABFILHMP*))((::PBYTE)hIl2Cpp + MNCMPIPEJLG_PIJEIPPHDGG___C_NFHHJBDFANF_OFFSET))(this, HMDKKCKDOFP);
	}
};
