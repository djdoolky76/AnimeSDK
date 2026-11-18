#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { template <typename T> class Func_1; }
namespace UnityEngine::Events { class UnityAction; }

#define NOPACGLIGHJ___C_CDFLOLGNDOH_OFFSET UNITYSDK_OFFSET(0x172BEC30)
#define NOPACGLIGHJ___C_LJNHCELNKCA_OFFSET UNITYSDK_OFFSET(0x172BED50)
#define NOPACGLIGHJ___C_LLHEJLLGHLM_OFFSET UNITYSDK_OFFSET(0x172BEEC0)
#define NOPACGLIGHJ___C_OBAODOBGPML_OFFSET UNITYSDK_OFFSET(0x172BEFF0)
#define NOPACGLIGHJ___C_OGFMKIMFGPC_OFFSET UNITYSDK_OFFSET(0x172BEED0)
#define NOPACGLIGHJ___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x172BEBE0)
#define NOPACGLIGHJ___C__CTOR_OFFSET UNITYSDK_OFFSET(0x172BEC20)

inline static constexpr unsigned int NOPACGLIGHJ___c_TypeDefinitionIndex = 54077;

class NOPACGLIGHJ___c : public ::System::Object
{
public:
	static ::UnityEngine::Events::UnityAction** StaticGet___9__16_13()
	{
		return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(NOPACGLIGHJ___c_TypeDefinitionIndex)->GetStaticField(0x4DBE0);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(NOPACGLIGHJ___c_TypeDefinitionIndex)->GetStaticField(0x4DBE8);
	}
	static ::System::Action** StaticGet___9__30_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(NOPACGLIGHJ___c_TypeDefinitionIndex)->GetStaticField(0x4DBF0);
	}
	static ::System::Action** StaticGet___9__16_20()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(NOPACGLIGHJ___c_TypeDefinitionIndex)->GetStaticField(0x4DBF8);
	}
	static ::UnityEngine::Events::UnityAction** StaticGet___9__16_19()
	{
		return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(NOPACGLIGHJ___c_TypeDefinitionIndex)->GetStaticField(0x4DC00);
	}
	static ::System::Func_1<::System::Boolean>** StaticGet___9__16_12()
	{
		return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(NOPACGLIGHJ___c_TypeDefinitionIndex)->GetStaticField(0x4DC08);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NOPACGLIGHJ___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOPACGLIGHJ___C__CTOR_OFFSET))(this);
	}

	::System::Void CDFLOLGNDOH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOPACGLIGHJ___C_CDFLOLGNDOH_OFFSET))(this);
	}

	::System::Void LJNHCELNKCA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOPACGLIGHJ___C_LJNHCELNKCA_OFFSET))(this);
	}

	::System::Boolean LLHEJLLGHLM()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NOPACGLIGHJ___C_LLHEJLLGHLM_OFFSET))(this);
	}

	::System::Void OGFMKIMFGPC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOPACGLIGHJ___C_OGFMKIMFGPC_OFFSET))(this);
	}

	::System::Void OBAODOBGPML()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOPACGLIGHJ___C_OBAODOBGPML_OFFSET))(this);
	}
};
