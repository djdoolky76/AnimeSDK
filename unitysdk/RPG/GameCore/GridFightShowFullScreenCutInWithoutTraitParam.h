#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define RPG_GAMECORE_GRIDFIGHTSHOWFULLSCREENCUTINWITHOUTTRAITPARAM_CTOR_OFFSET UNITYSDK_OFFSET(0xF1D9200)
#define RPG_GAMECORE_GRIDFIGHTSHOWFULLSCREENCUTINWITHOUTTRAITPARAM_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xF1D91E0)
#define RPG_GAMECORE_GRIDFIGHTSHOWFULLSCREENCUTINWITHOUTTRAITPARAM_SET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xF1D91F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightShowFullScreenCutInWithoutTraitParam_TypeDefinitionIndex = 59390;

	class GridFightShowFullScreenCutInWithoutTraitParam : public ::System::Object
	{
	public:
		::System::String* ImagePath; // 0x10
		::System::String* _IconPath_k__BackingField; // 0x18
		::RPG::Client::TextID TitleTextID; // 0x20
		::System::Int32 Quality; // 0x30
		::System::Nullable_1<::System::Single> OverrideDelayFadeOutTime; // 0x34
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTSHOWFULLSCREENCUTINWITHOUTTRAITPARAM_CTOR_OFFSET))(this);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTSHOWFULLSCREENCUTINWITHOUTTRAITPARAM_GET_ICONPATH_OFFSET))(this);
		}

		::System::Void set_IconPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTSHOWFULLSCREENCUTINWITHOUTTRAITPARAM_SET_ICONPATH_OFFSET))(this, a1);
		}

	};
}
