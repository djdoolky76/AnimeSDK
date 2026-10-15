#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/GridFightManager_GridFightCustomValue_ValueClassify.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }

#define RPG_GAMECORE_GRIDFIGHTMANAGER_GRIDFIGHTCUSTOMVALUE_CTOR_OFFSET UNITYSDK_OFFSET(0xE6D6840)

namespace RPG::GameCore
{
	class GridFightManager_GridFightCustomValue : public ::System::Object
	{
	public:
		::System::Object* SourceObject; // 0x10
		::System::String* Key; // 0x18
		::System::Action* OnChanged; // 0x20
		::RPG::GameCore::FixPoint Value; // 0x28
		::RPG::GameCore::GridFightManager_GridFightCustomValue_ValueClassify Classify; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_GRIDFIGHTCUSTOMVALUE_CTOR_OFFSET))(this);
		}

	};
}
