#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define GHGBOALCBGF___C_AMGEPMBHIFK_OFFSET UNITYSDK_OFFSET(0x116F66F0)
#define GHGBOALCBGF___C_HGAJLGEHMPP_OFFSET UNITYSDK_OFFSET(0x116F6330)
#define GHGBOALCBGF___C_NOGLPPMMENP_OFFSET UNITYSDK_OFFSET(0x116F6550)
#define GHGBOALCBGF___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x116F62E0)
#define GHGBOALCBGF___C__CTOR_OFFSET UNITYSDK_OFFSET(0x116F6320)

inline static constexpr unsigned int GHGBOALCBGF___c_TypeDefinitionIndex = 60518;

class GHGBOALCBGF___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(GHGBOALCBGF___c_TypeDefinitionIndex)->GetStaticField(0x31C40);
	}
	static ::System::Action** StaticGet___9__16_1()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(GHGBOALCBGF___c_TypeDefinitionIndex)->GetStaticField(0x31C48);
	}
	static ::System::Action** StaticGet___9__16_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(GHGBOALCBGF___c_TypeDefinitionIndex)->GetStaticField(0x31C50);
	}
	static ::System::Action_1<::System::Boolean>** StaticGet___9__4_0()
	{
		return (::System::Action_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GHGBOALCBGF___c_TypeDefinitionIndex)->GetStaticField(0x31C58);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GHGBOALCBGF___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHGBOALCBGF___C__CTOR_OFFSET))(this);
	}

	::System::Void HGAJLGEHMPP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHGBOALCBGF___C_HGAJLGEHMPP_OFFSET))(this);
	}

	::System::Void NOGLPPMMENP(::System::Boolean CAAFEGLOALC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GHGBOALCBGF___C_NOGLPPMMENP_OFFSET))(this, CAAFEGLOALC);
	}

	::System::Void AMGEPMBHIFK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHGBOALCBGF___C_AMGEPMBHIFK_OFFSET))(this);
	}
};
