#pragma once
#include "unitysdk/unitysdk.h"
class ACHNEAMCCEC;
class HIKAAGHELPH;
namespace RPG::Client { class LocalizedText; }
namespace UnityEngine::UI { class Image; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTTARGETATTRIBUTECONTROL_CTOR_OFFSET UNITYSDK_OFFSET(0xD637AB0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTTARGETATTRIBUTECONTROL__BINDICON_OFFSET UNITYSDK_OFFSET(0xD6375D0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTTARGETATTRIBUTECONTROL__BINDING_OFFSET UNITYSDK_OFFSET(0xD637570)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTTARGETATTRIBUTECONTROL__BINDTEXT_OFFSET UNITYSDK_OFFSET(0xD637840)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftCraftTargetAttributeControl_TypeDefinitionIndex = 79947;

	class MechCraftCraftTargetAttributeControl
	{
	public:
		::UnityEngine::UI::Image* _Icon; // 0x70
		::RPG::Client::LocalizedText* _Text; // 0x78
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTTARGETATTRIBUTECONTROL_CTOR_OFFSET))(this);
		}

		::System::Void _Binding(::HIKAAGHELPH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIKAAGHELPH*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTTARGETATTRIBUTECONTROL__BINDING_OFFSET))(this, a1);
		}

		::System::Void _BindIcon(::HIKAAGHELPH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIKAAGHELPH*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTTARGETATTRIBUTECONTROL__BINDICON_OFFSET))(this, a1);
		}

		::System::Void _BindText(::HIKAAGHELPH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIKAAGHELPH*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTTARGETATTRIBUTECONTROL__BINDTEXT_OFFSET))(this, a1);
		}

	};
}
