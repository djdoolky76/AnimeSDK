#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class UIImageNode; }
namespace System { class String; }

#define RPG_GAMECORE_UIIMAGENODE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC6F540)
#define RPG_GAMECORE_UIIMAGENODE_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DC6F430)

namespace RPG::GameCore
{
	inline static constexpr unsigned int UIImageNode_TypeDefinitionIndex = 23837;

	class UIImageNode : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* Path; // 0x10
		::System::String* AssetPath; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UIIMAGENODE_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::UIImageNode* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::UIImageNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UIIMAGENODE_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
