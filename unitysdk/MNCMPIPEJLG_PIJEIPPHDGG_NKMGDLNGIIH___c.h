#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class LLCABFILHMP;
namespace System { template <typename T1, typename T2> class Func_2; }

#define MNCMPIPEJLG_PIJEIPPHDGG_NKMGDLNGIIH___C_KHPNAJHPNNH_OFFSET UNITYSDK_OFFSET(0x14DF5640)
#define MNCMPIPEJLG_PIJEIPPHDGG_NKMGDLNGIIH___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x14DF55F0)
#define MNCMPIPEJLG_PIJEIPPHDGG_NKMGDLNGIIH___C__CTOR_OFFSET UNITYSDK_OFFSET(0x14DF5630)

inline static constexpr unsigned int MNCMPIPEJLG_PIJEIPPHDGG_NKMGDLNGIIH___c_TypeDefinitionIndex = 46695;

class MNCMPIPEJLG_PIJEIPPHDGG_NKMGDLNGIIH___c : public ::System::Object
{
public:
	static ::System::Func_2<::LLCABFILHMP*, ::System::Boolean>** StaticGet___9__7_0()
	{
		return (::System::Func_2<::LLCABFILHMP*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(MNCMPIPEJLG_PIJEIPPHDGG_NKMGDLNGIIH___c_TypeDefinitionIndex)->GetStaticField(0x41880);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(MNCMPIPEJLG_PIJEIPPHDGG_NKMGDLNGIIH___c_TypeDefinitionIndex)->GetStaticField(0x41888);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MNCMPIPEJLG_PIJEIPPHDGG_NKMGDLNGIIH___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNCMPIPEJLG_PIJEIPPHDGG_NKMGDLNGIIH___C__CTOR_OFFSET))(this);
	}

	::System::Boolean KHPNAJHPNNH(::LLCABFILHMP* HMDKKCKDOFP)
	{
		return ((::System::Boolean(*)(::PVOID, ::LLCABFILHMP*))((::PBYTE)hIl2Cpp + MNCMPIPEJLG_PIJEIPPHDGG_NKMGDLNGIIH___C_KHPNAJHPNNH_OFFSET))(this, HMDKKCKDOFP);
	}
};
