#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightPreset.h"
#include "unitysdk/RPG/Client/TextID.h"
class AGKODPKMDMA;
class HIKAAGHELPH;
namespace RPG::Client { class LocalizedText; }
namespace RPG::Client { class MonoUIColorSwitcher; }
namespace System { class Nullable; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_GRIDFIGHTPOSITIONTAGCONTROL_CTOR_OFFSET UNITYSDK_OFFSET(0xD1E0DE0)
#define RPG_CLIENT_GRIDFIGHTPOSITIONTAGCONTROL__BINDCOLORSTATE_OFFSET UNITYSDK_OFFSET(0xD1E0AB0)
#define RPG_CLIENT_GRIDFIGHTPOSITIONTAGCONTROL__BINDDISPLAYTYPE_OFFSET UNITYSDK_OFFSET(0xD1E0080)
#define RPG_CLIENT_GRIDFIGHTPOSITIONTAGCONTROL__BINDING_OFFSET UNITYSDK_OFFSET(0xD1E0020)
#define RPG_CLIENT_GRIDFIGHTPOSITIONTAGCONTROL__GETTEXTID_OFFSET UNITYSDK_OFFSET(0xD1E0CF0)

namespace RPG::Client
{
	class GridFightPositionTagControl
	{
	public:
		::UnityEngine::Transform* _FrontMark; // 0x70
		::UnityEngine::Transform* _BackMark; // 0x78
		::UnityEngine::Transform* _FrontAndBackMark; // 0x80
		::UnityEngine::Transform* _ProjectionMark; // 0x88
		::RPG::Client::MonoUIColorSwitcher* _ColorSwitch; // 0x90
		::RPG::Client::LocalizedText* _FrontBackNameText; // 0x98
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPOSITIONTAGCONTROL_CTOR_OFFSET))(this);
		}

		::System::Void _Binding(::HIKAAGHELPH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIKAAGHELPH*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPOSITIONTAGCONTROL__BINDING_OFFSET))(this, a1);
		}

		::System::Void _BindDisplayType(::HIKAAGHELPH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIKAAGHELPH*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPOSITIONTAGCONTROL__BINDDISPLAYTYPE_OFFSET))(this, a1);
		}

		::System::Void _BindColorState(::HIKAAGHELPH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIKAAGHELPH*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPOSITIONTAGCONTROL__BINDCOLORSTATE_OFFSET))(this, a1);
		}

		static ::RPG::Client::TextID _GetTextID(::System::Nullable* a1)
		{
			return ((::RPG::Client::TextID(*)(::System::Nullable*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPOSITIONTAGCONTROL__GETTEXTID_OFFSET))(a1);
		}

	};
}
