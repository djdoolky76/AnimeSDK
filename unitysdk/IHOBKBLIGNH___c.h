#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ScrollViewItemWidgetController; }
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace UnityEngine { class GameObject; }

#define IHOBKBLIGNH___C_BPGGEOAPAAE_OFFSET UNITYSDK_OFFSET(0x197C8570)
#define IHOBKBLIGNH___C_KNDIHAOABAJ_OFFSET UNITYSDK_OFFSET(0x197C8550)
#define IHOBKBLIGNH___C_NNGKONGHBDI_OFFSET UNITYSDK_OFFSET(0x197C8560)
#define IHOBKBLIGNH___C_OKGKHPKDFAK_OFFSET UNITYSDK_OFFSET(0x197C8540)
#define IHOBKBLIGNH___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x197C84F0)
#define IHOBKBLIGNH___C__CTOR_OFFSET UNITYSDK_OFFSET(0x197C8530)

inline static constexpr unsigned int IHOBKBLIGNH___c_TypeDefinitionIndex = 92929;

class IHOBKBLIGNH___c : public ::System::Object
{
public:
	static ::System::Action** StaticGet___9__21_1()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(IHOBKBLIGNH___c_TypeDefinitionIndex)->GetStaticField(0x40E50);
	}
	static ::System::Action** StaticGet___9__21_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(IHOBKBLIGNH___c_TypeDefinitionIndex)->GetStaticField(0x40E58);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(IHOBKBLIGNH___c_TypeDefinitionIndex)->GetStaticField(0x40E60);
	}
	static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::GameObject*, ::MoleMole::ScrollViewItemWidgetController*>, ::UnityEngine::GameObject*>** StaticGet___9__29_1()
	{
		return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::GameObject*, ::MoleMole::ScrollViewItemWidgetController*>, ::UnityEngine::GameObject*>**)Il2CppClass::FromTypeDefinitionIndex(IHOBKBLIGNH___c_TypeDefinitionIndex)->GetStaticField(0x40E68);
	}
	static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::GameObject*, ::MoleMole::ScrollViewItemWidgetController*>, ::System::Int32>** StaticGet___9__29_0()
	{
		return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::GameObject*, ::MoleMole::ScrollViewItemWidgetController*>, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(IHOBKBLIGNH___c_TypeDefinitionIndex)->GetStaticField(0x40E70);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IHOBKBLIGNH___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHOBKBLIGNH___C__CTOR_OFFSET))(this);
	}

	::System::Void OKGKHPKDFAK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHOBKBLIGNH___C_OKGKHPKDFAK_OFFSET))(this);
	}

	::System::Void KNDIHAOABAJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHOBKBLIGNH___C_KNDIHAOABAJ_OFFSET))(this);
	}

	::UnityEngine::GameObject* NNGKONGHBDI(::System::Collections::Generic::KeyValuePair_2<::UnityEngine::GameObject*, ::MoleMole::ScrollViewItemWidgetController*> JIDEDAPGIJB)
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::UnityEngine::GameObject*, ::MoleMole::ScrollViewItemWidgetController*>))((::PBYTE)hIl2Cpp + IHOBKBLIGNH___C_NNGKONGHBDI_OFFSET))(this, JIDEDAPGIJB);
	}

	::System::Int32 BPGGEOAPAAE(::System::Collections::Generic::KeyValuePair_2<::UnityEngine::GameObject*, ::MoleMole::ScrollViewItemWidgetController*> JIDEDAPGIJB)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::UnityEngine::GameObject*, ::MoleMole::ScrollViewItemWidgetController*>))((::PBYTE)hIl2Cpp + IHOBKBLIGNH___C_BPGGEOAPAAE_OFFSET))(this, JIDEDAPGIJB);
	}
};
