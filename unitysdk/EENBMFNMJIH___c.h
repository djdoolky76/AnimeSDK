#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }

#define EENBMFNMJIH___C_HHDLPJPHMAA_OFFSET UNITYSDK_OFFSET(0x16138E70)
#define EENBMFNMJIH___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16138E20)
#define EENBMFNMJIH___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16138E60)

inline static constexpr unsigned int EENBMFNMJIH___c_TypeDefinitionIndex = 88061;

class EENBMFNMJIH___c : public ::System::Object
{
public:
	static ::System::Func_1<::System::Boolean>** StaticGet___9__11_2()
	{
		return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(EENBMFNMJIH___c_TypeDefinitionIndex)->GetStaticField(0x49A20);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(EENBMFNMJIH___c_TypeDefinitionIndex)->GetStaticField(0x49A28);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EENBMFNMJIH___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EENBMFNMJIH___C__CTOR_OFFSET))(this);
	}

	::System::Boolean HHDLPJPHMAA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EENBMFNMJIH___C_HHDLPJPHMAA_OFFSET))(this);
	}
};
