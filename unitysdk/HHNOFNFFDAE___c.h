#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class HollowEntityLayerMaskConfig; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }

#define HHNOFNFFDAE___C_LNHPMGCCOGL_OFFSET UNITYSDK_OFFSET(0x13D8DC90)
#define HHNOFNFFDAE___C_LPCHADDECLC_OFFSET UNITYSDK_OFFSET(0x13D8DCA0)
#define HHNOFNFFDAE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x13D8DC40)
#define HHNOFNFFDAE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x13D8DC80)

inline static constexpr unsigned int HHNOFNFFDAE___c_TypeDefinitionIndex = 42378;

class HHNOFNFFDAE___c : public ::System::Object
{
public:
	static ::System::Action_1<::MoleMole::HollowEntityLayerMaskConfig*>** StaticGet___9__2_1()
	{
		return (::System::Action_1<::MoleMole::HollowEntityLayerMaskConfig*>**)Il2CppClass::FromTypeDefinitionIndex(HHNOFNFFDAE___c_TypeDefinitionIndex)->GetStaticField(0x4D060);
	}
	static ::System::Func_1<::MoleMole::HollowEntityLayerMaskConfig*>** StaticGet___9__2_0()
	{
		return (::System::Func_1<::MoleMole::HollowEntityLayerMaskConfig*>**)Il2CppClass::FromTypeDefinitionIndex(HHNOFNFFDAE___c_TypeDefinitionIndex)->GetStaticField(0x4D068);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(HHNOFNFFDAE___c_TypeDefinitionIndex)->GetStaticField(0x4D070);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HHNOFNFFDAE___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHNOFNFFDAE___C__CTOR_OFFSET))(this);
	}

	::System::Void LNHPMGCCOGL(::MoleMole::HollowEntityLayerMaskConfig* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowEntityLayerMaskConfig*))((::PBYTE)hIl2Cpp + HHNOFNFFDAE___C_LNHPMGCCOGL_OFFSET))(this, DFMKILICPFB);
	}

	::MoleMole::HollowEntityLayerMaskConfig* LPCHADDECLC()
	{
		return ((::MoleMole::HollowEntityLayerMaskConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + HHNOFNFFDAE___C_LPCHADDECLC_OFFSET))(this);
	}
};
