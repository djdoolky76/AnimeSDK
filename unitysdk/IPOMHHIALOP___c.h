#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class DFMEGKIBEJO;
class EDLHMDBMNGM;
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Comparison_1; }

#define IPOMHHIALOP___C_KKKIJDOPOCA_OFFSET UNITYSDK_OFFSET(0x19443230)
#define IPOMHHIALOP___C_PLACCFJJGGK_OFFSET UNITYSDK_OFFSET(0x194431A0)
#define IPOMHHIALOP___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x19443150)
#define IPOMHHIALOP___C__CTOR_OFFSET UNITYSDK_OFFSET(0x19443190)

inline static constexpr unsigned int IPOMHHIALOP___c_TypeDefinitionIndex = 66957;

class IPOMHHIALOP___c : public ::System::Object
{
public:
	static ::System::Action_1<::DFMEGKIBEJO*>** StaticGet___9__2_0()
	{
		return (::System::Action_1<::DFMEGKIBEJO*>**)Il2CppClass::FromTypeDefinitionIndex(IPOMHHIALOP___c_TypeDefinitionIndex)->GetStaticField(0x37FC0);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(IPOMHHIALOP___c_TypeDefinitionIndex)->GetStaticField(0x37FC8);
	}
	static ::System::Comparison_1<::EDLHMDBMNGM*>** StaticGet___9__4_0()
	{
		return (::System::Comparison_1<::EDLHMDBMNGM*>**)Il2CppClass::FromTypeDefinitionIndex(IPOMHHIALOP___c_TypeDefinitionIndex)->GetStaticField(0x37FD0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IPOMHHIALOP___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPOMHHIALOP___C__CTOR_OFFSET))(this);
	}

	::System::Void PLACCFJJGGK(::DFMEGKIBEJO* CIDIJPGCBPO)
	{
		return ((::System::Void(*)(::PVOID, ::DFMEGKIBEJO*))((::PBYTE)hIl2Cpp + IPOMHHIALOP___C_PLACCFJJGGK_OFFSET))(this, CIDIJPGCBPO);
	}

	::System::Int32 KKKIJDOPOCA(::EDLHMDBMNGM* EJCBEJMGFAJ, ::EDLHMDBMNGM* EBFCACIEKBC)
	{
		return ((::System::Int32(*)(::PVOID, ::EDLHMDBMNGM*, ::EDLHMDBMNGM*))((::PBYTE)hIl2Cpp + IPOMHHIALOP___C_KKKIJDOPOCA_OFFSET))(this, EJCBEJMGFAJ, EBFCACIEKBC);
	}
};
