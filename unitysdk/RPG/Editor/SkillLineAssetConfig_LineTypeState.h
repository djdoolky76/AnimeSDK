#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Editor/SkillPointSimConfig_PointType.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_EDITOR_SKILLLINEASSETCONFIG_LINETYPESTATE_CTOR_OFFSET UNITYSDK_OFFSET(0xE4ADEF0)

namespace RPG::Editor
{
	class SkillLineAssetConfig_LineTypeState : public ::System::Object
	{
	public:
		::RPG::Editor::SkillPointSimConfig_PointType Key; // 0x10
		::System::Byte _padding0[0x4];
		::System::Collections::Generic::List_1<::System::Object*>* ActiveStates; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_EDITOR_SKILLLINEASSETCONFIG_LINETYPESTATE_CTOR_OFFSET))(this);
		}

	};
}
