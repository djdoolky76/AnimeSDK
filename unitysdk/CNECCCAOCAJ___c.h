#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define CNECCCAOCAJ___C_HLPGAFAANLJ_OFFSET UNITYSDK_OFFSET(0x1971A7E0)
#define CNECCCAOCAJ___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1971A790)
#define CNECCCAOCAJ___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1971A7D0)

inline static constexpr unsigned int CNECCCAOCAJ___c_TypeDefinitionIndex = 86769;

class CNECCCAOCAJ___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(CNECCCAOCAJ___c_TypeDefinitionIndex)->GetStaticField(0x4B640);
	}
	static ::System::Func_2<::System::Int32, ::System::Int32>** StaticGet___9__14_1()
	{
		return (::System::Func_2<::System::Int32, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(CNECCCAOCAJ___c_TypeDefinitionIndex)->GetStaticField(0x4B648);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CNECCCAOCAJ___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNECCCAOCAJ___C__CTOR_OFFSET))(this);
	}

	::System::Int32 HLPGAFAANLJ(::System::Int32 FAKHCNLCBCE)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CNECCCAOCAJ___C_HLPGAFAANLJ_OFFSET))(this, FAKHCNLCBCE);
	}
};
