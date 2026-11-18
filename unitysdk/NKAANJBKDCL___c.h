#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Func_1; }

#define NKAANJBKDCL___C_AMABEFBJFAA_OFFSET UNITYSDK_OFFSET(0x13760AB0)
#define NKAANJBKDCL___C_IPCDDNMMKPF_OFFSET UNITYSDK_OFFSET(0x13760AC0)
#define NKAANJBKDCL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x13760A60)
#define NKAANJBKDCL___C__CTOR_OFFSET UNITYSDK_OFFSET(0x13760AA0)

inline static constexpr unsigned int NKAANJBKDCL___c_TypeDefinitionIndex = 61824;

class NKAANJBKDCL___c : public ::System::Object
{
public:
	static ::System::Func_1<::System::Boolean>** StaticGet___9__1_3()
	{
		return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(NKAANJBKDCL___c_TypeDefinitionIndex)->GetStaticField(0x35BE0);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(NKAANJBKDCL___c_TypeDefinitionIndex)->GetStaticField(0x35BE8);
	}
	static ::System::Func_1<::System::String*>** StaticGet___9__1_4()
	{
		return (::System::Func_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(NKAANJBKDCL___c_TypeDefinitionIndex)->GetStaticField(0x35BF0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NKAANJBKDCL___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKAANJBKDCL___C__CTOR_OFFSET))(this);
	}

	::System::String* AMABEFBJFAA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NKAANJBKDCL___C_AMABEFBJFAA_OFFSET))(this);
	}

	::System::Boolean IPCDDNMMKPF()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NKAANJBKDCL___C_IPCDDNMMKPF_OFFSET))(this);
	}
};
