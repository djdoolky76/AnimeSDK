#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CALIGLPABNP;
namespace System { template <typename T1, typename T2> class Func_2; }

#define BGANHKONGFD___C_DNNFCNJKDNJ_OFFSET UNITYSDK_OFFSET(0x1424D4E0)
#define BGANHKONGFD___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1424D490)
#define BGANHKONGFD___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1424D4D0)

inline static constexpr unsigned int BGANHKONGFD___c_TypeDefinitionIndex = 73503;

class BGANHKONGFD___c : public ::System::Object
{
public:
	static ::System::Func_2<::CALIGLPABNP*, ::System::Int32>** StaticGet___9__54_0()
	{
		return (::System::Func_2<::CALIGLPABNP*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(BGANHKONGFD___c_TypeDefinitionIndex)->GetStaticField(0x47BB0);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(BGANHKONGFD___c_TypeDefinitionIndex)->GetStaticField(0x47BB8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BGANHKONGFD___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGANHKONGFD___C__CTOR_OFFSET))(this);
	}

	::System::Int32 DNNFCNJKDNJ(::CALIGLPABNP* MDLNMDJMMJP)
	{
		return ((::System::Int32(*)(::PVOID, ::CALIGLPABNP*))((::PBYTE)hIl2Cpp + BGANHKONGFD___C_DNNFCNJKDNJ_OFFSET))(this, MDLNMDJMMJP);
	}
};
