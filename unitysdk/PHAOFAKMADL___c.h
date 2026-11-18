#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIGeneralHeadRowWidgetController; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace UnityEngine { class GameObject; }

#define PHAOFAKMADL___C_CGIFCNAGCAJ_OFFSET UNITYSDK_OFFSET(0x14B9D4A0)
#define PHAOFAKMADL___C_JEPCALPCMBL_OFFSET UNITYSDK_OFFSET(0x14B9D490)
#define PHAOFAKMADL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x14B9D440)
#define PHAOFAKMADL___C__CTOR_OFFSET UNITYSDK_OFFSET(0x14B9D480)

inline static constexpr unsigned int PHAOFAKMADL___c_TypeDefinitionIndex = 54364;

class PHAOFAKMADL___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(PHAOFAKMADL___c_TypeDefinitionIndex)->GetStaticField(0x3FBD0);
	}
	static ::System::Func_2<::MoleMole::UIGeneralHeadRowWidgetController*, ::UnityEngine::GameObject*>** StaticGet___9__108_0()
	{
		return (::System::Func_2<::MoleMole::UIGeneralHeadRowWidgetController*, ::UnityEngine::GameObject*>**)Il2CppClass::FromTypeDefinitionIndex(PHAOFAKMADL___c_TypeDefinitionIndex)->GetStaticField(0x3FBD8);
	}
	static ::System::Func_2<::System::Int32, ::System::UInt32>** StaticGet___9__134_0()
	{
		return (::System::Func_2<::System::Int32, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(PHAOFAKMADL___c_TypeDefinitionIndex)->GetStaticField(0x3FBE0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PHAOFAKMADL___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHAOFAKMADL___C__CTOR_OFFSET))(this);
	}

	::System::UInt32 JEPCALPCMBL(::System::Int32 LEHABHCOMGH)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PHAOFAKMADL___C_JEPCALPCMBL_OFFSET))(this, LEHABHCOMGH);
	}

	::UnityEngine::GameObject* CGIFCNAGCAJ(::MoleMole::UIGeneralHeadRowWidgetController* DLJPLHKELCO)
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID, ::MoleMole::UIGeneralHeadRowWidgetController*))((::PBYTE)hIl2Cpp + PHAOFAKMADL___C_CGIFCNAGCAJ_OFFSET))(this, DLJPLHKELCO);
	}
};
