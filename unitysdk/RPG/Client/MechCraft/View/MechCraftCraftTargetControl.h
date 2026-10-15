#pragma once
#include "unitysdk/unitysdk.h"
class BJDBKICFGAM;
class HIKAAGHELPH;
namespace RPG::Client { class AnimatorButton; }
namespace RPG::Client { class LocalizedText; }
namespace RPG::Client::MechCraft::View { class MechCraftCraftTargetAttributeControl; }
namespace UnityEngine { class RectTransform; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTTARGETCONTROL_CTOR_OFFSET UNITYSDK_OFFSET(0xD630070)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTTARGETCONTROL__BINDATTRIBUTES_OFFSET UNITYSDK_OFFSET(0xD62F2A0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTTARGETCONTROL__BINDCOMMANDS_OFFSET UNITYSDK_OFFSET(0xD62F030)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTTARGETCONTROL__BINDING_OFFSET UNITYSDK_OFFSET(0xD62EFC0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTTARGETCONTROL__BINDTRAITS_OFFSET UNITYSDK_OFFSET(0xD62FBF0)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftCraftTargetControl_TypeDefinitionIndex = 79948;

	class MechCraftCraftTargetControl
	{
	public:
		::RPG::Client::AnimatorButton* _BtnExit; // 0x70
		::UnityEngine::RectTransform* _NodeAttributes; // 0x78
		::RPG::Client::MechCraft::View::MechCraftCraftTargetAttributeControl* _Attribute1; // 0x80
		::RPG::Client::MechCraft::View::MechCraftCraftTargetAttributeControl* _Attribute2; // 0x88
		::UnityEngine::RectTransform* _NodeTraits; // 0x90
		::RPG::Client::LocalizedText* _TextTraits; // 0x98
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTTARGETCONTROL_CTOR_OFFSET))(this);
		}

		::System::Void _Binding(::HIKAAGHELPH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIKAAGHELPH*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTTARGETCONTROL__BINDING_OFFSET))(this, a1);
		}

		::System::Void _BindCommands(::HIKAAGHELPH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIKAAGHELPH*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTTARGETCONTROL__BINDCOMMANDS_OFFSET))(this, a1);
		}

		::System::Void _BindAttributes(::HIKAAGHELPH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIKAAGHELPH*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTTARGETCONTROL__BINDATTRIBUTES_OFFSET))(this, a1);
		}

		::System::Void _BindTraits(::HIKAAGHELPH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIKAAGHELPH*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTTARGETCONTROL__BINDTRAITS_OFFSET))(this, a1);
		}

	};
}
