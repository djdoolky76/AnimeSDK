#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }

#define EEFMFOINMPI___C_LONOHAAALGK_OFFSET UNITYSDK_OFFSET(0xFDD9420)
#define EEFMFOINMPI___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xFDD93D0)
#define EEFMFOINMPI___C__CTOR_OFFSET UNITYSDK_OFFSET(0xFDD9410)

inline static constexpr unsigned int EEFMFOINMPI___c_TypeDefinitionIndex = 88948;

class EEFMFOINMPI___c : public ::System::Object
{
public:
	static ::System::Action_1<::System::Boolean>** StaticGet___9__6_0()
	{
		return (::System::Action_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(EEFMFOINMPI___c_TypeDefinitionIndex)->GetStaticField(0x47DA0);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(EEFMFOINMPI___c_TypeDefinitionIndex)->GetStaticField(0x47DA8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EEFMFOINMPI___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEFMFOINMPI___C__CTOR_OFFSET))(this);
	}

	::System::Void LONOHAAALGK(::System::Boolean CAAFEGLOALC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EEFMFOINMPI___C_LONOHAAALGK_OFFSET))(this, CAAFEGLOALC);
	}
};
