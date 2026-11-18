#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Func_1; }
namespace UnityEngine::Events { class UnityAction; }

#define KFMHPAFCKPE___C_CGGGOGFBCME_OFFSET UNITYSDK_OFFSET(0x1515C800)
#define KFMHPAFCKPE___C_DGCEHNACJML_OFFSET UNITYSDK_OFFSET(0x1515C5B0)
#define KFMHPAFCKPE___C_EDPKGPBAJIH_OFFSET UNITYSDK_OFFSET(0x1515C5C0)
#define KFMHPAFCKPE___C_HGANMBDEENB_OFFSET UNITYSDK_OFFSET(0x1515C620)
#define KFMHPAFCKPE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1515C560)
#define KFMHPAFCKPE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1515C5A0)

inline static constexpr unsigned int KFMHPAFCKPE___c_TypeDefinitionIndex = 45753;

class KFMHPAFCKPE___c : public ::System::Object
{
public:
	static ::System::Func_1<::System::String*>** StaticGet___9__48_5()
	{
		return (::System::Func_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(KFMHPAFCKPE___c_TypeDefinitionIndex)->GetStaticField(0x4E680);
	}
	static ::System::Func_1<::System::Boolean>** StaticGet___9__48_17()
	{
		return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(KFMHPAFCKPE___c_TypeDefinitionIndex)->GetStaticField(0x4E688);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(KFMHPAFCKPE___c_TypeDefinitionIndex)->GetStaticField(0x4E690);
	}
	static ::UnityEngine::Events::UnityAction** StaticGet___9__48_27()
	{
		return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(KFMHPAFCKPE___c_TypeDefinitionIndex)->GetStaticField(0x4E698);
	}
	static ::UnityEngine::Events::UnityAction** StaticGet___9__48_21()
	{
		return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(KFMHPAFCKPE___c_TypeDefinitionIndex)->GetStaticField(0x4E6A0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KFMHPAFCKPE___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFMHPAFCKPE___C__CTOR_OFFSET))(this);
	}

	::System::Boolean DGCEHNACJML()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KFMHPAFCKPE___C_DGCEHNACJML_OFFSET))(this);
	}

	::System::Void EDPKGPBAJIH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFMHPAFCKPE___C_EDPKGPBAJIH_OFFSET))(this);
	}

	::System::String* HGANMBDEENB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KFMHPAFCKPE___C_HGANMBDEENB_OFFSET))(this);
	}

	::System::Void CGGGOGFBCME()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFMHPAFCKPE___C_CGGGOGFBCME_OFFSET))(this);
	}
};
