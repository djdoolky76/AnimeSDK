#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIHollowInfoEventAtlasWidgetController_EventData; }
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_UIHOLLOWINFOEVENTATLASWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1839FED0)
#define MOLEMOLE_UIHOLLOWINFOEVENTATLASWIDGETCONTROLLER___C__CREATESHOWEVENTDATA_B__6_0_OFFSET UNITYSDK_OFFSET(0x1839FF80)
#define MOLEMOLE_UIHOLLOWINFOEVENTATLASWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1839FF10)
#define MOLEMOLE_UIHOLLOWINFOEVENTATLASWIDGETCONTROLLER___C__SENDDELNEWCOLLECTICONREQUEST_B__3_0_OFFSET UNITYSDK_OFFSET(0x1839FF20)
#define MOLEMOLE_UIHOLLOWINFOEVENTATLASWIDGETCONTROLLER___C__SENDDELNEWCOLLECTICONREQUEST_B__3_1_OFFSET UNITYSDK_OFFSET(0x1839FF40)
#define MOLEMOLE_UIHOLLOWINFOEVENTATLASWIDGETCONTROLLER___C__SENDDELNEWCOLLECTICONREQUEST_B__3_2_OFFSET UNITYSDK_OFFSET(0x1839FF60)
#define MOLEMOLE_UIHOLLOWINFOEVENTATLASWIDGETCONTROLLER___C__SENDDELNEWCOLLECTICONREQUEST_B__3_3_OFFSET UNITYSDK_OFFSET(0x1839FF70)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowInfoEventAtlasWidgetController___c_TypeDefinitionIndex = 76861;

	class UIHollowInfoEventAtlasWidgetController___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::System::Object*>** StaticGet___9__6_0()
		{
			return (::System::Comparison_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(UIHollowInfoEventAtlasWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x44F40);
		}
		static ::System::Action** StaticGet___9__3_3()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIHollowInfoEventAtlasWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x44F48);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIHollowInfoEventAtlasWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x44F50);
		}
		static ::System::Func_2<::System::Object*, ::System::Boolean>** StaticGet___9__3_0()
		{
			return (::System::Func_2<::System::Object*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(UIHollowInfoEventAtlasWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x44F58);
		}
		static ::System::Func_2<::System::Object*, ::System::UInt32>** StaticGet___9__3_1()
		{
			return (::System::Func_2<::System::Object*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(UIHollowInfoEventAtlasWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x44F60);
		}
		static ::System::Action** StaticGet___9__3_2()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIHollowInfoEventAtlasWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x44F68);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWINFOEVENTATLASWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWINFOEVENTATLASWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _SendDelNewCollectIconRequest_b__3_0(::MoleMole::UIHollowInfoEventAtlasWidgetController_EventData* data)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIHollowInfoEventAtlasWidgetController_EventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWINFOEVENTATLASWIDGETCONTROLLER___C__SENDDELNEWCOLLECTICONREQUEST_B__3_0_OFFSET))(this, data);
		}

		::System::UInt32 _SendDelNewCollectIconRequest_b__3_1(::MoleMole::UIHollowInfoEventAtlasWidgetController_EventData* _)
		{
			return ((::System::UInt32(*)(::PVOID, ::MoleMole::UIHollowInfoEventAtlasWidgetController_EventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWINFOEVENTATLASWIDGETCONTROLLER___C__SENDDELNEWCOLLECTICONREQUEST_B__3_1_OFFSET))(this, _);
		}

		::System::Void _SendDelNewCollectIconRequest_b__3_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWINFOEVENTATLASWIDGETCONTROLLER___C__SENDDELNEWCOLLECTICONREQUEST_B__3_2_OFFSET))(this);
		}

		::System::Void _SendDelNewCollectIconRequest_b__3_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWINFOEVENTATLASWIDGETCONTROLLER___C__SENDDELNEWCOLLECTICONREQUEST_B__3_3_OFFSET))(this);
		}

		::System::Int32 _CreateShowEventData_b__6_0(::MoleMole::UIHollowInfoEventAtlasWidgetController_EventData* left, ::MoleMole::UIHollowInfoEventAtlasWidgetController_EventData* right)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::UIHollowInfoEventAtlasWidgetController_EventData*, ::MoleMole::UIHollowInfoEventAtlasWidgetController_EventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWINFOEVENTATLASWIDGETCONTROLLER___C__CREATESHOWEVENTDATA_B__6_0_OFFSET))(this, left, right);
		}
	};
}
