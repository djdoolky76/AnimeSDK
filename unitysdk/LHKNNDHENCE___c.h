#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define LHKNNDHENCE___C_AOGNJCPCNAC_OFFSET UNITYSDK_OFFSET(0x184F8E90)
#define LHKNNDHENCE___C_KHLMGMGJPIH_OFFSET UNITYSDK_OFFSET(0x184F8E80)
#define LHKNNDHENCE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x184F8E30)
#define LHKNNDHENCE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x184F8E70)

inline static constexpr unsigned int LHKNNDHENCE___c_TypeDefinitionIndex = 92987;

class LHKNNDHENCE___c : public ::System::Object
{
public:
	static ::System::Action** StaticGet___9__17_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(LHKNNDHENCE___c_TypeDefinitionIndex)->GetStaticField(0x4BED0);
	}
	static ::System::Action** StaticGet___9__17_1()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(LHKNNDHENCE___c_TypeDefinitionIndex)->GetStaticField(0x4BED8);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(LHKNNDHENCE___c_TypeDefinitionIndex)->GetStaticField(0x4BEE0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LHKNNDHENCE___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHKNNDHENCE___C__CTOR_OFFSET))(this);
	}

	::System::Void KHLMGMGJPIH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHKNNDHENCE___C_KHLMGMGJPIH_OFFSET))(this);
	}

	::System::Void AOGNJCPCNAC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHKNNDHENCE___C_AOGNJCPCNAC_OFFSET))(this);
	}
};
