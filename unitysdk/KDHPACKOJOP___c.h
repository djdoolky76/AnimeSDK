#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define KDHPACKOJOP___C_HHDFAGBPHFA_OFFSET UNITYSDK_OFFSET(0x1A4BFAC0)
#define KDHPACKOJOP___C_KGJJLAOFLNJ_OFFSET UNITYSDK_OFFSET(0x1A4BFA60)
#define KDHPACKOJOP___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A4BFA10)
#define KDHPACKOJOP___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A4BFA50)

inline static constexpr unsigned int KDHPACKOJOP___c_TypeDefinitionIndex = 82215;

class KDHPACKOJOP___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(KDHPACKOJOP___c_TypeDefinitionIndex)->GetStaticField(0x38160);
	}
	static ::System::Action** StaticGet___9__9_1()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(KDHPACKOJOP___c_TypeDefinitionIndex)->GetStaticField(0x38168);
	}
	static ::System::Action** StaticGet___9__7_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(KDHPACKOJOP___c_TypeDefinitionIndex)->GetStaticField(0x38170);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KDHPACKOJOP___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDHPACKOJOP___C__CTOR_OFFSET))(this);
	}

	::System::Void KGJJLAOFLNJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDHPACKOJOP___C_KGJJLAOFLNJ_OFFSET))(this);
	}

	::System::Void HHDFAGBPHFA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDHPACKOJOP___C_HHDFAGBPHFA_OFFSET))(this);
	}
};
