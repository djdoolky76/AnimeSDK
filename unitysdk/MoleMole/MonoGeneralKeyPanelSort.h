#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/InputLogicEventType.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace MoleMole { class UIGeneralKeyPanelWidgetController; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_MONOGENERALKEYPANELSORT_ADNEHFEPLLD_OFFSET UNITYSDK_OFFSET(0x139F54C0)
#define MOLEMOLE_MONOGENERALKEYPANELSORT_FBBNDKEKAIC_OFFSET UNITYSDK_OFFSET(0x139F4E90)
#define MOLEMOLE_MONOGENERALKEYPANELSORT_LFEGNLOGBLI_OFFSET UNITYSDK_OFFSET(0x139F5C10)
#define MOLEMOLE_MONOGENERALKEYPANELSORT_SETCHANGEDIRTY_OFFSET UNITYSDK_OFFSET(0x139F5290)
#define MOLEMOLE_MONOGENERALKEYPANELSORT_START_OFFSET UNITYSDK_OFFSET(0x139F4E40)
#define MOLEMOLE_MONOGENERALKEYPANELSORT__CCTOR_OFFSET UNITYSDK_OFFSET(0x139F5430)
#define MOLEMOLE_MONOGENERALKEYPANELSORT__CTOR_OFFSET UNITYSDK_OFFSET(0x139F52E0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoGeneralKeyPanelSort_TypeDefinitionIndex = 76405;

	class MonoGeneralKeyPanelSort : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Collections::Generic::List_1<::MoleMole::InputLogicEventType>** StaticGet_OBGJHMGHMBF()
		{
			return (::System::Collections::Generic::List_1<::MoleMole::InputLogicEventType>**)Il2CppClass::FromTypeDefinitionIndex(MonoGeneralKeyPanelSort_TypeDefinitionIndex)->GetStaticField(0x44C50);
		}
		::System::Collections::Generic::List_1<::MoleMole::UIGeneralKeyPanelWidgetController*>* MNNHMPHJKFD; // 0x18
		::System::Collections::Generic::Dictionary_2<::MoleMole::UIGeneralKeyPanelWidgetController*, ::UnityEngine::Transform*>* HLPNJONGLAB; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGENERALKEYPANELSORT__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGENERALKEYPANELSORT__CCTOR_OFFSET))();
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGENERALKEYPANELSORT_START_OFFSET))(this);
		}

		::System::Void SetChangeDirty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGENERALKEYPANELSORT_SETCHANGEDIRTY_OFFSET))(this);
		}

		static ::System::Int32 ADNEHFEPLLD(::MoleMole::InputLogicEventType KAMJLKGLFDB)
		{
			return ((::System::Int32(*)(::MoleMole::InputLogicEventType))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGENERALKEYPANELSORT_ADNEHFEPLLD_OFFSET))(KAMJLKGLFDB);
		}

		::System::Void FBBNDKEKAIC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGENERALKEYPANELSORT_FBBNDKEKAIC_OFFSET))(this);
		}

		::System::Int32 LFEGNLOGBLI(::MoleMole::UIGeneralKeyPanelWidgetController* EJCBEJMGFAJ, ::MoleMole::UIGeneralKeyPanelWidgetController* EBFCACIEKBC)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::UIGeneralKeyPanelWidgetController*, ::MoleMole::UIGeneralKeyPanelWidgetController*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGENERALKEYPANELSORT_LFEGNLOGBLI_OFFSET))(this, EJCBEJMGFAJ, EBFCACIEKBC);
		}
	};
}
