#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define PFKCACMHPCP___C_JFLJPPKKGGN_OFFSET UNITYSDK_OFFSET(0x150C60E0)
#define PFKCACMHPCP___C_KDFLIDPEBEG_OFFSET UNITYSDK_OFFSET(0x150C6140)
#define PFKCACMHPCP___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x150C6090)
#define PFKCACMHPCP___C__CTOR_OFFSET UNITYSDK_OFFSET(0x150C60D0)

inline static constexpr unsigned int PFKCACMHPCP___c_TypeDefinitionIndex = 50323;

class PFKCACMHPCP___c : public ::System::Object
{
public:
	static ::System::Action** StaticGet___9__57_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(PFKCACMHPCP___c_TypeDefinitionIndex)->GetStaticField(0x362E0);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(PFKCACMHPCP___c_TypeDefinitionIndex)->GetStaticField(0x362E8);
	}
	static ::System::Action** StaticGet___9__81_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(PFKCACMHPCP___c_TypeDefinitionIndex)->GetStaticField(0x362F0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PFKCACMHPCP___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFKCACMHPCP___C__CTOR_OFFSET))(this);
	}

	::System::Void JFLJPPKKGGN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFKCACMHPCP___C_JFLJPPKKGGN_OFFSET))(this);
	}

	::System::Void KDFLIDPEBEG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFKCACMHPCP___C_KDFLIDPEBEG_OFFSET))(this);
	}
};
