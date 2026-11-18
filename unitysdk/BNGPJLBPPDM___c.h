#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class DJAGNIDEICF;
namespace System { template <typename T> class Action_1; }

#define BNGPJLBPPDM___C_DHIPFOHDMOE_OFFSET UNITYSDK_OFFSET(0x10E10BF0)
#define BNGPJLBPPDM___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x10E10BA0)
#define BNGPJLBPPDM___C__CTOR_OFFSET UNITYSDK_OFFSET(0x10E10BE0)

inline static constexpr unsigned int BNGPJLBPPDM___c_TypeDefinitionIndex = 72408;

class BNGPJLBPPDM___c : public ::System::Object
{
public:
	static ::System::Action_1<::DJAGNIDEICF*>** StaticGet___9__5_0()
	{
		return (::System::Action_1<::DJAGNIDEICF*>**)Il2CppClass::FromTypeDefinitionIndex(BNGPJLBPPDM___c_TypeDefinitionIndex)->GetStaticField(0x4CBF0);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(BNGPJLBPPDM___c_TypeDefinitionIndex)->GetStaticField(0x4CBF8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BNGPJLBPPDM___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNGPJLBPPDM___C__CTOR_OFFSET))(this);
	}

	::System::Void DHIPFOHDMOE(::DJAGNIDEICF* NHJLFIBAPMA)
	{
		return ((::System::Void(*)(::PVOID, ::DJAGNIDEICF*))((::PBYTE)hIl2Cpp + BNGPJLBPPDM___C_DHIPFOHDMOE_OFFSET))(this, NHJLFIBAPMA);
	}
};
