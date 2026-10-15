#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
class ALAOCJKOBCN;
namespace RPG::Client { class LocalizedText; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCONDITIONDESCCONTROL_CTOR_OFFSET UNITYSDK_OFFSET(0xD5ED7E0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCONDITIONDESCCONTROL_GET_CONTENT_OFFSET UNITYSDK_OFFSET(0xD5ED730)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCONDITIONDESCCONTROL_SET_CONTENT_OFFSET UNITYSDK_OFFSET(0xD5ED770)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftConditionDescControl_TypeDefinitionIndex = 79813;

	class MechCraftConditionDescControl : public ::UnityEngine::MonoBehaviour
	{
	public:
		::ALAOCJKOBCN* LFGMLJCCPCH; // 0x18
		::RPG::Client::LocalizedText* _Text; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCONDITIONDESCCONTROL_CTOR_OFFSET))(this);
		}

		::ALAOCJKOBCN* get_Content()
		{
			return ((::ALAOCJKOBCN*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCONDITIONDESCCONTROL_GET_CONTENT_OFFSET))(this);
		}

		::System::Void set_Content(::ALAOCJKOBCN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ALAOCJKOBCN*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCONDITIONDESCCONTROL_SET_CONTENT_OFFSET))(this, a1);
		}

	};
}
