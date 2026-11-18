#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class EEEKNFFACJC;
namespace System { template <typename T1, typename T2> class Func_2; }

#define AEPBHBHEHFI___C_JIIEDCGHLOM_OFFSET UNITYSDK_OFFSET(0x1434C770)
#define AEPBHBHEHFI___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1434C720)
#define AEPBHBHEHFI___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1434C760)

inline static constexpr unsigned int AEPBHBHEHFI___c_TypeDefinitionIndex = 84172;

class AEPBHBHEHFI___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(AEPBHBHEHFI___c_TypeDefinitionIndex)->GetStaticField(0x3D320);
	}
	static ::System::Func_2<::System::Int32, ::EEEKNFFACJC*>** StaticGet___9__12_0()
	{
		return (::System::Func_2<::System::Int32, ::EEEKNFFACJC*>**)Il2CppClass::FromTypeDefinitionIndex(AEPBHBHEHFI___c_TypeDefinitionIndex)->GetStaticField(0x3D328);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AEPBHBHEHFI___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEPBHBHEHFI___C__CTOR_OFFSET))(this);
	}

	::EEEKNFFACJC* JIIEDCGHLOM(::System::Int32 GJNCNLKDLCP)
	{
		return ((::EEEKNFFACJC*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AEPBHBHEHFI___C_JIIEDCGHLOM_OFFSET))(this, GJNCNLKDLCP);
	}
};
