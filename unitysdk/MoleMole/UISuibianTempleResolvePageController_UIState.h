#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JJEJBPGJPJN.h"

class KOIDMLPJGML;
namespace System { class Object; }
namespace System { class String; }
template <typename T> class IHECGHKOIPM_1;
template <typename T> class LGFJMNEABJP_1;
template <typename T> class LJHFMILANJA_1;

#define MOLEMOLE_UISUIBIANTEMPLERESOLVEPAGECONTROLLER_UISTATE_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x17DB14E0)
#define MOLEMOLE_UISUIBIANTEMPLERESOLVEPAGECONTROLLER_UISTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x17DB1970)
#define MOLEMOLE_UISUIBIANTEMPLERESOLVEPAGECONTROLLER_UISTATE__ONCREATEPROPERTY_B__15_0_OFFSET UNITYSDK_OFFSET(0x17DB1980)
#define MOLEMOLE_UISUIBIANTEMPLERESOLVEPAGECONTROLLER_UISTATE__ONCREATEPROPERTY_B__15_1_OFFSET UNITYSDK_OFFSET(0x17DB1BF0)

namespace MoleMole
{
	inline static constexpr unsigned int UISuibianTempleResolvePageController_UIState_TypeDefinitionIndex = 58814;

	class UISuibianTempleResolvePageController_UIState : public ::JJEJBPGJPJN
	{
	public:
		::LJHFMILANJA_1<::System::Int32>* MinSlider; // 0x88
		::LGFJMNEABJP_1<::KOIDMLPJGML*>* ViewItems; // 0x90
		::LGFJMNEABJP_1<::System::Int32>* SourceItems; // 0x98
		::LGFJMNEABJP_1<::System::Object*>* Materials; // 0xA0
		::LGFJMNEABJP_1<::System::Int32>* ScrollItems; // 0xA8
		::LJHFMILANJA_1<::System::Int32>* CurrentSlider; // 0xB0
		::IHECGHKOIPM_1<::System::String*>* DescText; // 0xB8
		::LJHFMILANJA_1<::System::Int32>* MaxRecyleCount; // 0xC0
		::LJHFMILANJA_1<::System::Object*>* Type; // 0xC8
		::IHECGHKOIPM_1<::System::String*>* NameText; // 0xD0
		::LJHFMILANJA_1<::System::Int32>* MaxSlider; // 0xD8
		::LJHFMILANJA_1<::System::Int32>* ItemID; // 0xE0
		::LJHFMILANJA_1<::System::Int32>* RecycleID; // 0xE8
		::LJHFMILANJA_1<::System::Int32>* ProductOrMaterialType; // 0xF0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLERESOLVEPAGECONTROLLER_UISTATE__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateProperty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLERESOLVEPAGECONTROLLER_UISTATE_ONCREATEPROPERTY_OFFSET))(this);
		}

		::System::String* _OnCreateProperty_b__15_0()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLERESOLVEPAGECONTROLLER_UISTATE__ONCREATEPROPERTY_B__15_0_OFFSET))(this);
		}

		::System::String* _OnCreateProperty_b__15_1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLERESOLVEPAGECONTROLLER_UISTATE__ONCREATEPROPERTY_B__15_1_OFFSET))(this);
		}
	};
}
