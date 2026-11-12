#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightManager_GridFightCustomValue_ValueClassify.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
namespace RPG::GameCore { class GridFightManager_GridFightCustomValue; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_GRIDFIGHTMANAGER_GRIDFIGHTCUSTOMVALUELOOKUP_ADDEMPTY_OFFSET UNITYSDK_OFFSET(0xF1D2840)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_GRIDFIGHTCUSTOMVALUELOOKUP_CTOR_OFFSET UNITYSDK_OFFSET(0xF1D36F0)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_GRIDFIGHTCUSTOMVALUELOOKUP_GETCUSTOMVALUE_1_OFFSET UNITYSDK_OFFSET(0xF1D8E40)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_GRIDFIGHTCUSTOMVALUELOOKUP_GETCUSTOMVALUE_OFFSET UNITYSDK_OFFSET(0xF1CDF70)
#define RPG_GAMECORE_GRIDFIGHTMANAGER_GRIDFIGHTCUSTOMVALUELOOKUP_SETCUSTOMVALUE_OFFSET UNITYSDK_OFFSET(0xF1CE300)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightManager_GridFightCustomValueLookup_TypeDefinitionIndex = 57387;

	class GridFightManager_GridFightCustomValueLookup : public ::System::Object
	{
	public:
		::System::Object* DefaultSourceObject; // 0x10
		::System::Action_1<::System::Object*>* OnChangedDefault; // 0x18
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::StringHash, ::System::Object*>* _CustomValue; // 0x20
		::RPG::GameCore::GridFightManager_GridFightCustomValue_ValueClassify DefaultClassify; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_GRIDFIGHTCUSTOMVALUELOOKUP_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::GridFightManager_GridFightCustomValue* AddEmpty(::System::String* a1)
		{
			return ((::RPG::GameCore::GridFightManager_GridFightCustomValue*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_GRIDFIGHTCUSTOMVALUELOOKUP_ADDEMPTY_OFFSET))(this, a1);
		}

		::System::Void SetCustomValue(::System::String* a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_GRIDFIGHTCUSTOMVALUELOOKUP_SETCUSTOMVALUE_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::FixPoint GetCustomValue(::System::String* a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_GRIDFIGHTCUSTOMVALUELOOKUP_GETCUSTOMVALUE_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint GetCustomValue_1(::RPG::GameCore::StringHash a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::StringHash))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMANAGER_GRIDFIGHTCUSTOMVALUELOOKUP_GETCUSTOMVALUE_1_OFFSET))(this, a1);
		}

	};
}
