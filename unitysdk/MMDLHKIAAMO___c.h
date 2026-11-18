#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Func_1; }
namespace UnityEngine::Events { class UnityAction; }

#define MMDLHKIAAMO___C_KHDPGPNKGBN_OFFSET UNITYSDK_OFFSET(0x131A0E30)
#define MMDLHKIAAMO___C_KJLBMJKKPJI_OFFSET UNITYSDK_OFFSET(0x131A0EC0)
#define MMDLHKIAAMO___C_MEABAAJFJDI_OFFSET UNITYSDK_OFFSET(0x131A0DF0)
#define MMDLHKIAAMO___C_NJOKIPGCHAG_OFFSET UNITYSDK_OFFSET(0x131A0D90)
#define MMDLHKIAAMO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x131A0D40)
#define MMDLHKIAAMO___C__CTOR_OFFSET UNITYSDK_OFFSET(0x131A0D80)

inline static constexpr unsigned int MMDLHKIAAMO___c_TypeDefinitionIndex = 56247;

class MMDLHKIAAMO___c : public ::System::Object
{
public:
	static ::UnityEngine::Events::UnityAction** StaticGet___9__0_3()
	{
		return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(MMDLHKIAAMO___c_TypeDefinitionIndex)->GetStaticField(0x4A420);
	}
	static ::System::Func_1<::System::String*>** StaticGet___9__0_1()
	{
		return (::System::Func_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MMDLHKIAAMO___c_TypeDefinitionIndex)->GetStaticField(0x4A428);
	}
	static ::UnityEngine::Events::UnityAction** StaticGet___9__0_2()
	{
		return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(MMDLHKIAAMO___c_TypeDefinitionIndex)->GetStaticField(0x4A430);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(MMDLHKIAAMO___c_TypeDefinitionIndex)->GetStaticField(0x4A438);
	}
	static ::System::Func_1<::System::String*>** StaticGet___9__0_0()
	{
		return (::System::Func_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MMDLHKIAAMO___c_TypeDefinitionIndex)->GetStaticField(0x4A440);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MMDLHKIAAMO___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMDLHKIAAMO___C__CTOR_OFFSET))(this);
	}

	::System::Void NJOKIPGCHAG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMDLHKIAAMO___C_NJOKIPGCHAG_OFFSET))(this);
	}

	::System::String* MEABAAJFJDI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MMDLHKIAAMO___C_MEABAAJFJDI_OFFSET))(this);
	}

	::System::Void KHDPGPNKGBN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMDLHKIAAMO___C_KHDPGPNKGBN_OFFSET))(this);
	}

	::System::String* KJLBMJKKPJI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MMDLHKIAAMO___C_KJLBMJKKPJI_OFFSET))(this);
	}
};
