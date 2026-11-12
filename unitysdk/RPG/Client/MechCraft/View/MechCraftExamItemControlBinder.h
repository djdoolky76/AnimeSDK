#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/View/MechCraftBinderBase.h"
namespace RPG::Client { class UIStateCtrl; }
namespace UnityEngine::UI { class Image; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTEXAMITEMCONTROLBINDER_CTOR_OFFSET UNITYSDK_OFFSET(0xE0D21C0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTEXAMITEMCONTROLBINDER_GET_IMGEXAMINERHEAD_OFFSET UNITYSDK_OFFSET(0xE0D1E80)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTEXAMITEMCONTROLBINDER_GET_STATECTRL_OFFSET UNITYSDK_OFFSET(0xE0D1F30)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftExamItemControlBinder_TypeDefinitionIndex = 82740;

	class MechCraftExamItemControlBinder : public ::RPG::Client::MechCraft::View::MechCraftBinderBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTEXAMITEMCONTROLBINDER_CTOR_OFFSET))(this);
		}

		::RPG::Client::UIStateCtrl* get_StateCtrl()
		{
			return ((::RPG::Client::UIStateCtrl*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTEXAMITEMCONTROLBINDER_GET_STATECTRL_OFFSET))(this);
		}

		::UnityEngine::UI::Image* get_ImgExaminerHead()
		{
			return ((::UnityEngine::UI::Image*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTEXAMITEMCONTROLBINDER_GET_IMGEXAMINERHEAD_OFFSET))(this);
		}

	};
}
