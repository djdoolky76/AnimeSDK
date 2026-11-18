#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIBangkovBangbooSelectItemWidgetController_Data; }
namespace System { template <typename T> class Comparison_1; }
namespace UnityEngine::Events { class UnityAction; }

#define JIGHBBFOLEH___C_HJMJANFNDNJ_OFFSET UNITYSDK_OFFSET(0x1A477C30)
#define JIGHBBFOLEH___C_OHFIJALELNC_OFFSET UNITYSDK_OFFSET(0x1A477CF0)
#define JIGHBBFOLEH___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A477BE0)
#define JIGHBBFOLEH___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A477C20)

inline static constexpr unsigned int JIGHBBFOLEH___c_TypeDefinitionIndex = 63416;

class JIGHBBFOLEH___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::System::Object*>** StaticGet___9__17_1()
	{
		return (::System::Comparison_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(JIGHBBFOLEH___c_TypeDefinitionIndex)->GetStaticField(0x44440);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(JIGHBBFOLEH___c_TypeDefinitionIndex)->GetStaticField(0x44448);
	}
	static ::UnityEngine::Events::UnityAction** StaticGet___9__18_13()
	{
		return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(JIGHBBFOLEH___c_TypeDefinitionIndex)->GetStaticField(0x44450);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JIGHBBFOLEH___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIGHBBFOLEH___C__CTOR_OFFSET))(this);
	}

	::System::Void HJMJANFNDNJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIGHBBFOLEH___C_HJMJANFNDNJ_OFFSET))(this);
	}

	::System::Int32 OHFIJALELNC(::MoleMole::UIBangkovBangbooSelectItemWidgetController_Data* EJCBEJMGFAJ, ::MoleMole::UIBangkovBangbooSelectItemWidgetController_Data* EBFCACIEKBC)
	{
		return ((::System::Int32(*)(::PVOID, ::MoleMole::UIBangkovBangbooSelectItemWidgetController_Data*, ::MoleMole::UIBangkovBangbooSelectItemWidgetController_Data*))((::PBYTE)hIl2Cpp + JIGHBBFOLEH___C_OHFIJALELNC_OFFSET))(this, EJCBEJMGFAJ, EBFCACIEKBC);
	}
};
