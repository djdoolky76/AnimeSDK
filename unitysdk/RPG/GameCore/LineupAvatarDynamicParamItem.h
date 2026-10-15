#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/LineupAvatarDynamicParamType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicParam; }
namespace RPG::GameCore { class LineupAvatarDynamicParamItem; }

#define RPG_GAMECORE_LINEUPAVATARDYNAMICPARAMITEM_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7D5280)
#define RPG_GAMECORE_LINEUPAVATARDYNAMICPARAMITEM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7D5130)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LineupAvatarDynamicParamItem_TypeDefinitionIndex = 18125;

	class LineupAvatarDynamicParamItem : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::LineupAvatarDynamicParamType Type; // 0x10
		::System::Byte _padding0[0x4];
		::Il2CppArray<::RPG::GameCore::DynamicParam*>* DynamicParam; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LINEUPAVATARDYNAMICPARAMITEM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LineupAvatarDynamicParamItem* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LineupAvatarDynamicParamItem*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LINEUPAVATARDYNAMICPARAMITEM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
