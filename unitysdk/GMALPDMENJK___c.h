#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIGeneralToggleWidgetController_OnClickCallback; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }
namespace UnityEngine::Events { class UnityAction; }

#define GMALPDMENJK___C_AABCMNNIMFH_OFFSET UNITYSDK_OFFSET(0x17A14B20)
#define GMALPDMENJK___C_FHEPHEGPHHA_OFFSET UNITYSDK_OFFSET(0x17A14B40)
#define GMALPDMENJK___C_KABOIGLKJHI_OFFSET UNITYSDK_OFFSET(0x17A14C90)
#define GMALPDMENJK___C_KEJGJNLBFJL_OFFSET UNITYSDK_OFFSET(0x17A14D70)
#define GMALPDMENJK___C_MECKMPNINKD_OFFSET UNITYSDK_OFFSET(0x17A14B50)
#define GMALPDMENJK___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17A14AD0)
#define GMALPDMENJK___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17A14B10)

inline static constexpr unsigned int GMALPDMENJK___c_TypeDefinitionIndex = 53675;

class GMALPDMENJK___c : public ::System::Object
{
public:
	static ::System::Func_1<::System::Boolean>** StaticGet___9__12_29()
	{
		return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GMALPDMENJK___c_TypeDefinitionIndex)->GetStaticField(0x3DD90);
	}
	static ::System::Func_1<::System::Boolean>** StaticGet___9__12_28()
	{
		return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GMALPDMENJK___c_TypeDefinitionIndex)->GetStaticField(0x3DD98);
	}
	static ::MoleMole::UIGeneralToggleWidgetController_OnClickCallback** StaticGet___9__12_30()
	{
		return (::MoleMole::UIGeneralToggleWidgetController_OnClickCallback**)Il2CppClass::FromTypeDefinitionIndex(GMALPDMENJK___c_TypeDefinitionIndex)->GetStaticField(0x3DDA0);
	}
	static ::UnityEngine::Events::UnityAction** StaticGet___9__12_15()
	{
		return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(GMALPDMENJK___c_TypeDefinitionIndex)->GetStaticField(0x3DDA8);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(GMALPDMENJK___c_TypeDefinitionIndex)->GetStaticField(0x3DDB0);
	}
	static ::System::Action_1<::System::Action*>** StaticGet___9__12_31()
	{
		return (::System::Action_1<::System::Action*>**)Il2CppClass::FromTypeDefinitionIndex(GMALPDMENJK___c_TypeDefinitionIndex)->GetStaticField(0x3DDB8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GMALPDMENJK___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMALPDMENJK___C__CTOR_OFFSET))(this);
	}

	::System::Void AABCMNNIMFH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMALPDMENJK___C_AABCMNNIMFH_OFFSET))(this);
	}

	::System::Boolean FHEPHEGPHHA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GMALPDMENJK___C_FHEPHEGPHHA_OFFSET))(this);
	}

	::System::Void MECKMPNINKD(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + GMALPDMENJK___C_MECKMPNINKD_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Boolean KABOIGLKJHI()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GMALPDMENJK___C_KABOIGLKJHI_OFFSET))(this);
	}

	::System::Void KEJGJNLBFJL(::System::Boolean KMPCLKEOLAO, ::System::Boolean JBJFINAFFKO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + GMALPDMENJK___C_KEJGJNLBFJL_OFFSET))(this, KMPCLKEOLAO, JBJFINAFFKO);
	}
};
