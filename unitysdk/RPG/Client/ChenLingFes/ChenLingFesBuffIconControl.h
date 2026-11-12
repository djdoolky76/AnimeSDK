#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaControl.h"
namespace RPG::Client::ChenLingFes { class ChenLingFesBuffIconViewModel; }
namespace UnityEngine::UI { class Image; }

#define RPG_CLIENT_CHENLINGFES_CHENLINGFESBUFFICONCONTROL_CTOR_OFFSET UNITYSDK_OFFSET(0xD3E1220)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESBUFFICONCONTROL_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0xD3E1130)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESBUFFICONCONTROL__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xD3E0F60)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESBUFFICONCONTROL__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0xD3E0EE0)

namespace RPG::Client::ChenLingFes
{
	inline static constexpr unsigned int ChenLingFesBuffIconControl_TypeDefinitionIndex = 84080;

	class ChenLingFesBuffIconControl : public ::Sofa::BaseSofaControl
	{
	public:
		::UnityEngine::UI::Image* _Icon; // 0x40
		// static const ::System::String* PrefabPath; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESBUFFICONCONTROL_CTOR_OFFSET))(this);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESBUFFICONCONTROL__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void _OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESBUFFICONCONTROL__ONBINDVIEWMODEL_OFFSET))(this);
		}

		::RPG::Client::ChenLingFes::ChenLingFesBuffIconViewModel* get__ViewModel()
		{
			return ((::RPG::Client::ChenLingFes::ChenLingFesBuffIconViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESBUFFICONCONTROL_GET__VIEWMODEL_OFFSET))(this);
		}

	};
}
