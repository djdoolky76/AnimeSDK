#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightPreset.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Nullable_1.h"
class AGKODPKMDMA;
class HIKAAGHELPH;
namespace RPG::Client { class LocalizedText; }
namespace RPG::Client { class MonoUIColorSwitcher; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_GRIDFIGHTPOSITIONTAGCONTROL_CTOR_OFFSET UNITYSDK_OFFSET(0xD1D8DA0)
#define RPG_CLIENT_GRIDFIGHTPOSITIONTAGCONTROL__BINDCOLORSTATE_OFFSET UNITYSDK_OFFSET(0xD1D8A70)
#define RPG_CLIENT_GRIDFIGHTPOSITIONTAGCONTROL__BINDDISPLAYTYPE_OFFSET UNITYSDK_OFFSET(0xD1D8040)
#define RPG_CLIENT_GRIDFIGHTPOSITIONTAGCONTROL__BINDING_OFFSET UNITYSDK_OFFSET(0xD1D7FE0)
#define RPG_CLIENT_GRIDFIGHTPOSITIONTAGCONTROL__GETTEXTID_OFFSET UNITYSDK_OFFSET(0xD1D8CB0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightPositionTagControl_TypeDefinitionIndex = 60101;

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

		static ::RPG::Client::TextID _GetTextID(::System::Nullable_1<::RPG::GameCore::GridFightPreset> a1)
		{
			return ((::RPG::Client::TextID(*)(::System::Nullable_1<::RPG::GameCore::GridFightPreset>))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPOSITIONTAGCONTROL__GETTEXTID_OFFSET))(a1);
		}

	};
}
