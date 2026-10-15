#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaWindow.h"
class MBLEHDIHIBG;
namespace RPG::Client::MechCraft::View { class MechCraftReportControl; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTREPORTWINDOW_CTOR_OFFSET UNITYSDK_OFFSET(0xD65B3D0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTREPORTWINDOW_GET__TYPEDDATACONTEXT_OFFSET UNITYSDK_OFFSET(0xD65B330)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTREPORTWINDOW_SET__TYPEDDATACONTEXT_OFFSET UNITYSDK_OFFSET(0xD65B3C0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTREPORTWINDOW__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xD65B6B0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTREPORTWINDOW__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0xD65B4C0)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftReportWindow_TypeDefinitionIndex = 80027;

	class MechCraftReportWindow : public ::Sofa::BaseSofaWindow
	{
	public:
		::RPG::Client::MechCraft::View::MechCraftReportControl* _Control; // 0x48
		::System::Void _ctor(::MBLEHDIHIBG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MBLEHDIHIBG*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTREPORTWINDOW_CTOR_OFFSET))(this, a1);
		}

		::MBLEHDIHIBG* get__TypedDataContext()
		{
			return ((::MBLEHDIHIBG*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTREPORTWINDOW_GET__TYPEDDATACONTEXT_OFFSET))(this);
		}

		::System::Void set__TypedDataContext(::MBLEHDIHIBG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MBLEHDIHIBG*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTREPORTWINDOW_SET__TYPEDDATACONTEXT_OFFSET))(this, a1);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTREPORTWINDOW__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void _OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTREPORTWINDOW__ONBINDVIEWMODEL_OFFSET))(this);
		}

	};
}
