#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace UnityEngine::UI { class ILayoutElement; }

#define MONOUITABLESCROLLV2___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x12FC67D0)
#define MONOUITABLESCROLLV2___C__CTOR_OFFSET UNITYSDK_OFFSET(0x12FC6810)
#define MONOUITABLESCROLLV2___C__GETMINHEIGHT_B__912_0_OFFSET UNITYSDK_OFFSET(0x12FC6C30)
#define MONOUITABLESCROLLV2___C__GETMINWIDTH_B__911_0_OFFSET UNITYSDK_OFFSET(0x12FC6B60)
#define MONOUITABLESCROLLV2___C__GETPREFERREDHEIGHT_B__910_0_OFFSET UNITYSDK_OFFSET(0x12FC69C0)
#define MONOUITABLESCROLLV2___C__GETPREFERREDHEIGHT_B__910_1_OFFSET UNITYSDK_OFFSET(0x12FC6A90)
#define MONOUITABLESCROLLV2___C__GETPREFERREDWIDTH_B__909_0_OFFSET UNITYSDK_OFFSET(0x12FC6820)
#define MONOUITABLESCROLLV2___C__GETPREFERREDWIDTH_B__909_1_OFFSET UNITYSDK_OFFSET(0x12FC68F0)

inline static constexpr unsigned int MonoUITableScrollV2___c_TypeDefinitionIndex = 40060;

class MonoUITableScrollV2___c : public ::System::Object
{
public:
	static ::System::Func_2<::UnityEngine::UI::ILayoutElement*, ::System::Single>** StaticGet___9__911_0()
	{
		return (::System::Func_2<::UnityEngine::UI::ILayoutElement*, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(MonoUITableScrollV2___c_TypeDefinitionIndex)->GetStaticField(0x39410);
	}
	static ::System::Func_2<::UnityEngine::UI::ILayoutElement*, ::System::Single>** StaticGet___9__912_0()
	{
		return (::System::Func_2<::UnityEngine::UI::ILayoutElement*, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(MonoUITableScrollV2___c_TypeDefinitionIndex)->GetStaticField(0x39418);
	}
	static ::System::Func_2<::UnityEngine::UI::ILayoutElement*, ::System::Single>** StaticGet___9__910_1()
	{
		return (::System::Func_2<::UnityEngine::UI::ILayoutElement*, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(MonoUITableScrollV2___c_TypeDefinitionIndex)->GetStaticField(0x39420);
	}
	static ::System::Func_2<::UnityEngine::UI::ILayoutElement*, ::System::Single>** StaticGet___9__909_1()
	{
		return (::System::Func_2<::UnityEngine::UI::ILayoutElement*, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(MonoUITableScrollV2___c_TypeDefinitionIndex)->GetStaticField(0x39428);
	}
	static ::System::Func_2<::UnityEngine::UI::ILayoutElement*, ::System::Single>** StaticGet___9__910_0()
	{
		return (::System::Func_2<::UnityEngine::UI::ILayoutElement*, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(MonoUITableScrollV2___c_TypeDefinitionIndex)->GetStaticField(0x39430);
	}
	static ::System::Func_2<::UnityEngine::UI::ILayoutElement*, ::System::Single>** StaticGet___9__909_0()
	{
		return (::System::Func_2<::UnityEngine::UI::ILayoutElement*, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(MonoUITableScrollV2___c_TypeDefinitionIndex)->GetStaticField(0x39438);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(MonoUITableScrollV2___c_TypeDefinitionIndex)->GetStaticField(0x39440);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2___C__CTOR_OFFSET))(this);
	}

	::System::Single _GetPreferredWidth_b__909_0(::UnityEngine::UI::ILayoutElement* e)
	{
		return ((::System::Single(*)(::PVOID, ::UnityEngine::UI::ILayoutElement*))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2___C__GETPREFERREDWIDTH_B__909_0_OFFSET))(this, e);
	}

	::System::Single _GetPreferredWidth_b__909_1(::UnityEngine::UI::ILayoutElement* e)
	{
		return ((::System::Single(*)(::PVOID, ::UnityEngine::UI::ILayoutElement*))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2___C__GETPREFERREDWIDTH_B__909_1_OFFSET))(this, e);
	}

	::System::Single _GetPreferredHeight_b__910_0(::UnityEngine::UI::ILayoutElement* e)
	{
		return ((::System::Single(*)(::PVOID, ::UnityEngine::UI::ILayoutElement*))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2___C__GETPREFERREDHEIGHT_B__910_0_OFFSET))(this, e);
	}

	::System::Single _GetPreferredHeight_b__910_1(::UnityEngine::UI::ILayoutElement* e)
	{
		return ((::System::Single(*)(::PVOID, ::UnityEngine::UI::ILayoutElement*))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2___C__GETPREFERREDHEIGHT_B__910_1_OFFSET))(this, e);
	}

	::System::Single _GetMinWidth_b__911_0(::UnityEngine::UI::ILayoutElement* e)
	{
		return ((::System::Single(*)(::PVOID, ::UnityEngine::UI::ILayoutElement*))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2___C__GETMINWIDTH_B__911_0_OFFSET))(this, e);
	}

	::System::Single _GetMinHeight_b__912_0(::UnityEngine::UI::ILayoutElement* e)
	{
		return ((::System::Single(*)(::PVOID, ::UnityEngine::UI::ILayoutElement*))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2___C__GETMINHEIGHT_B__912_0_OFFSET))(this, e);
	}
};
