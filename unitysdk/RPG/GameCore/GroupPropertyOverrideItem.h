#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GroupPropertyOverrideItem; }
namespace System { class String; }

#define RPG_GAMECORE_GROUPPROPERTYOVERRIDEITEM_CTOR_OFFSET UNITYSDK_OFFSET(0x1D71EE50)
#define RPG_GAMECORE_GROUPPROPERTYOVERRIDEITEM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D71ECC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GroupPropertyOverrideItem_TypeDefinitionIndex = 19042;

	class GroupPropertyOverrideItem : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 GroupID; // 0x10
		::System::Byte _padding0[0x4];
		::System::String* Key; // 0x18
		::System::Int32 Value; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GROUPPROPERTYOVERRIDEITEM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GroupPropertyOverrideItem* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GroupPropertyOverrideItem*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GROUPPROPERTYOVERRIDEITEM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
