#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class INKPGECIDNE;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUEBONUSSELECTACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1C7C4C20)
#define RPG_CLIENT_ROGUEBONUSSELECTACTION_GETROGUEACTIONID_OFFSET UNITYSDK_OFFSET(0x1C7C4CE0)
#define RPG_CLIENT_ROGUEBONUSSELECTACTION_GETUIPATH_OFFSET UNITYSDK_OFFSET(0x1C7C4D70)
#define RPG_CLIENT_ROGUEBONUSSELECTACTION_GET_ROGUEACTIONID_OFFSET UNITYSDK_OFFSET(0x1C7C4C00)
#define RPG_CLIENT_ROGUEBONUSSELECTACTION_GET_SELECTBONUSIDS_OFFSET UNITYSDK_OFFSET(0x1C7C4C10)
#define RPG_CLIENT_ROGUEBONUSSELECTACTION_TRIGGERACTION_OFFSET UNITYSDK_OFFSET(0x1C7C4D20)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueBonusSelectAction_TypeDefinitionIndex = 68919;

	class RogueBonusSelectAction : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _SelectBonusIDs_k__BackingField; // 0x10
		::System::UInt32 _RogueActionID_k__BackingField; // 0x18
		::System::Void _ctor(::System::UInt32 a1, ::INKPGECIDNE* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::INKPGECIDNE*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBONUSSELECTACTION_CTOR_OFFSET))(this, a1, a2);
		}

		::System::UInt32 get_RogueActionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBONUSSELECTACTION_GET_ROGUEACTIONID_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_SelectBonusIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBONUSSELECTACTION_GET_SELECTBONUSIDS_OFFSET))(this);
		}

		::System::UInt32 GetRogueActionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBONUSSELECTACTION_GETROGUEACTIONID_OFFSET))(this);
		}

		::System::Void TriggerAction()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBONUSSELECTACTION_TRIGGERACTION_OFFSET))(this);
		}

		::System::String* GetUIPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBONUSSELECTACTION_GETUIPATH_OFFSET))(this);
		}

	};
}
