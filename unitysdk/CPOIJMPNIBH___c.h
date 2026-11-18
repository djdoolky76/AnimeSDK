#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAOFCEFPEHP;
namespace System { template <typename T1, typename T2> class Func_2; }

#define CPOIJMPNIBH___C_HLOOGMIAIDG_OFFSET UNITYSDK_OFFSET(0x1204FAA0)
#define CPOIJMPNIBH___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1204FA50)
#define CPOIJMPNIBH___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1204FA90)

inline static constexpr unsigned int CPOIJMPNIBH___c_TypeDefinitionIndex = 60028;

class CPOIJMPNIBH___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(CPOIJMPNIBH___c_TypeDefinitionIndex)->GetStaticField(0x31320);
	}
	static ::System::Func_2<::OAOFCEFPEHP*, ::OAOFCEFPEHP*>** StaticGet___9__0_0()
	{
		return (::System::Func_2<::OAOFCEFPEHP*, ::OAOFCEFPEHP*>**)Il2CppClass::FromTypeDefinitionIndex(CPOIJMPNIBH___c_TypeDefinitionIndex)->GetStaticField(0x31328);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CPOIJMPNIBH___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPOIJMPNIBH___C__CTOR_OFFSET))(this);
	}

	::OAOFCEFPEHP* HLOOGMIAIDG(::OAOFCEFPEHP* NCPCOAEFCON)
	{
		return ((::OAOFCEFPEHP*(*)(::PVOID, ::OAOFCEFPEHP*))((::PBYTE)hIl2Cpp + CPOIJMPNIBH___C_HLOOGMIAIDG_OFFSET))(this, NCPCOAEFCON);
	}
};
