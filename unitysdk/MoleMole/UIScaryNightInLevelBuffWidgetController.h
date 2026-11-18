#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GPJMHAAEIKO.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/LIBOIKJGAIH.h"

class JKKFEIMPBHK;
class JNJDDELLIAH;
class PJOHPBGHNHK;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIScaryNightInLevelBuffRowWidgetController; }
namespace MoleMole::Battle { class Entity; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UISCARYNIGHTINLEVELBUFFWIDGETCONTROLLER_EHEPEMECAKH_OFFSET UNITYSDK_OFFSET(0x1859CD10)
#define MOLEMOLE_UISCARYNIGHTINLEVELBUFFWIDGETCONTROLLER_GET_GAMECONTEXT_OFFSET UNITYSDK_OFFSET(0x1859C8F0)
#define MOLEMOLE_UISCARYNIGHTINLEVELBUFFWIDGETCONTROLLER_JGENOJBGCKN_OFFSET UNITYSDK_OFFSET(0x1859E170)
#define MOLEMOLE_UISCARYNIGHTINLEVELBUFFWIDGETCONTROLLER_OGMPOGIHBIK_OFFSET UNITYSDK_OFFSET(0x1859E100)
#define MOLEMOLE_UISCARYNIGHTINLEVELBUFFWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1859C9F0)
#define MOLEMOLE_UISCARYNIGHTINLEVELBUFFWIDGETCONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x1859D910)
#define MOLEMOLE_UISCARYNIGHTINLEVELBUFFWIDGETCONTROLLER_REBINDPLAYERENTITY_OFFSET UNITYSDK_OFFSET(0x1859DDE0)
#define MOLEMOLE_UISCARYNIGHTINLEVELBUFFWIDGETCONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1859DF10)
#define MOLEMOLE_UISCARYNIGHTINLEVELBUFFWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1859DE30)
#define MOLEMOLE_UISCARYNIGHTINLEVELBUFFWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1859E050)
#define MOLEMOLE_UISCARYNIGHTINLEVELBUFFWIDGETCONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x1859E0F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIScaryNightInLevelBuffWidgetController_TypeDefinitionIndex = 78729;

	class UIScaryNightInLevelBuffWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		static ::System::Collections::Generic::List_1<::GPJMHAAEIKO>** StaticGet_FCOJCMJBJBD()
		{
			return (::System::Collections::Generic::List_1<::GPJMHAAEIKO>**)Il2CppClass::FromTypeDefinitionIndex(UIScaryNightInLevelBuffWidgetController_TypeDefinitionIndex)->GetStaticField(0x39110);
		}
		static ::System::Collections::Generic::List_1<::System::Int32>** StaticGet_LKBJKPNOLJP()
		{
			return (::System::Collections::Generic::List_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UIScaryNightInLevelBuffWidgetController_TypeDefinitionIndex)->GetStaticField(0x39118);
		}
		::System::Collections::Generic::List_1<::MoleMole::UIScaryNightInLevelBuffRowWidgetController*>* CBJFBHMIBDA; // 0x2C8
		::MoleMole::Battle::Entity* CJLOCBJHFCG; // 0x2D0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISCARYNIGHTINLEVELBUFFWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UISCARYNIGHTINLEVELBUFFWIDGETCONTROLLER__CCTOR_OFFSET))();
		}

		::JNJDDELLIAH* get_GameContext()
		{
			return ((::JNJDDELLIAH*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISCARYNIGHTINLEVELBUFFWIDGETCONTROLLER_GET_GAMECONTEXT_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::LIBOIKJGAIH& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISCARYNIGHTINLEVELBUFFWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISCARYNIGHTINLEVELBUFFWIDGETCONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Void RebindPlayerEntity()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISCARYNIGHTINLEVELBUFFWIDGETCONTROLLER_REBINDPLAYERENTITY_OFFSET))(this);
		}

		::System::Void __base_OnCreateViewModel(::LIBOIKJGAIH& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISCARYNIGHTINLEVELBUFFWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISCARYNIGHTINLEVELBUFFWIDGETCONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}

		::System::Void EHEPEMECAKH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISCARYNIGHTINLEVELBUFFWIDGETCONTROLLER_EHEPEMECAKH_OFFSET))(this);
		}

		::System::Void JGENOJBGCKN(::PJOHPBGHNHK* FPBEPINAPII, ::System::Single KGGJCGPMAIH, ::System::Single BPEGDPLGFPO)
		{
			return ((::System::Void(*)(::PVOID, ::PJOHPBGHNHK*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UISCARYNIGHTINLEVELBUFFWIDGETCONTROLLER_JGENOJBGCKN_OFFSET))(this, FPBEPINAPII, KGGJCGPMAIH, BPEGDPLGFPO);
		}

		::JKKFEIMPBHK* OGMPOGIHBIK()
		{
			return ((::JKKFEIMPBHK*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISCARYNIGHTINLEVELBUFFWIDGETCONTROLLER_OGMPOGIHBIK_OFFSET))(this);
		}
	};
}
