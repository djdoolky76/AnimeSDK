#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define DEBNKJEHNIL___C_GDIPIMAAIGH_OFFSET UNITYSDK_OFFSET(0x15A307B0)
#define DEBNKJEHNIL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15A30760)
#define DEBNKJEHNIL___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15A307A0)

inline static constexpr unsigned int DEBNKJEHNIL___c_TypeDefinitionIndex = 40867;

class DEBNKJEHNIL___c : public ::System::Object
{
public:
	static ::System::Func_2<::System::Int32, ::System::Int32>** StaticGet___9__29_1()
	{
		return (::System::Func_2<::System::Int32, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(DEBNKJEHNIL___c_TypeDefinitionIndex)->GetStaticField(0x3D860);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(DEBNKJEHNIL___c_TypeDefinitionIndex)->GetStaticField(0x3D868);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DEBNKJEHNIL___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEBNKJEHNIL___C__CTOR_OFFSET))(this);
	}

	::System::Int32 GDIPIMAAIGH(::System::Int32 DLJPLHKELCO)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DEBNKJEHNIL___C_GDIPIMAAIGH_OFFSET))(this, DLJPLHKELCO);
	}
};
