#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define NBJLLOBDKHH___C_ECBNMBPFNJN_OFFSET UNITYSDK_OFFSET(0x13B55D90)
#define NBJLLOBDKHH___C_GFNPFJDHHLG_OFFSET UNITYSDK_OFFSET(0x13B55C80)
#define NBJLLOBDKHH___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x13B55C30)
#define NBJLLOBDKHH___C__CTOR_OFFSET UNITYSDK_OFFSET(0x13B55C70)

inline static constexpr unsigned int NBJLLOBDKHH___c_TypeDefinitionIndex = 46249;

class NBJLLOBDKHH___c : public ::System::Object
{
public:
	static ::System::Func_2<::System::Int32, ::System::Int32>** StaticGet___9__113_0()
	{
		return (::System::Func_2<::System::Int32, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(NBJLLOBDKHH___c_TypeDefinitionIndex)->GetStaticField(0x3C860);
	}
	static ::System::Action** StaticGet___9__118_1()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(NBJLLOBDKHH___c_TypeDefinitionIndex)->GetStaticField(0x3C868);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(NBJLLOBDKHH___c_TypeDefinitionIndex)->GetStaticField(0x3C870);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NBJLLOBDKHH___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBJLLOBDKHH___C__CTOR_OFFSET))(this);
	}

	::System::Int32 GFNPFJDHHLG(::System::Int32 MGMDLMBEDJF)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NBJLLOBDKHH___C_GFNPFJDHHLG_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void ECBNMBPFNJN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBJLLOBDKHH___C_ECBNMBPFNJN_OFFSET))(this);
	}
};
