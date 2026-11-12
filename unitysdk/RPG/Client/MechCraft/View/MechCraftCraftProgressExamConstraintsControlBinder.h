#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/View/MechCraftBinderBase.h"
namespace RPG::Client::MechCraft::View { class MechCraftCraftProgressExamConstraintControl; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPROGRESSEXAMCONSTRAINTSCONTROLBINDER_CTOR_OFFSET UNITYSDK_OFFSET(0xE0C21A0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPROGRESSEXAMCONSTRAINTSCONTROLBINDER_GET_CONSTRAINT_OFFSET UNITYSDK_OFFSET(0xE0C20E0)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftCraftProgressExamConstraintsControlBinder_TypeDefinitionIndex = 82712;

	class MechCraftCraftProgressExamConstraintsControlBinder : public ::RPG::Client::MechCraft::View::MechCraftBinderBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPROGRESSEXAMCONSTRAINTSCONTROLBINDER_CTOR_OFFSET))(this);
		}

		::RPG::Client::MechCraft::View::MechCraftCraftProgressExamConstraintControl* get_Constraint()
		{
			return ((::RPG::Client::MechCraft::View::MechCraftCraftProgressExamConstraintControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPROGRESSEXAMCONSTRAINTSCONTROLBINDER_GET_CONSTRAINT_OFFSET))(this);
		}

	};
}
