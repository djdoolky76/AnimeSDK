#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/ShaderPropertySetType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicVector4; }
namespace RPG::GameCore { class ShaderPropertySetItem; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_SHADERPROPERTYSETITEM_CTOR_OFFSET UNITYSDK_OFFSET(0x1DACEA30)
#define RPG_GAMECORE_SHADERPROPERTYSETITEM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DACE820)

namespace RPG::GameCore
{
	class ShaderPropertySetItem : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* Name; // 0x10
		::RPG::GameCore::ShaderPropertySetType Type; // 0x18
		::System::Byte _padding0[0x4];
		::RPG::GameCore::DynamicFloat* Float; // 0x20
		::RPG::GameCore::DynamicVector4* Vector4; // 0x28
		::RPG::GameCore::TargetEvaluator* TargetParam; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHADERPROPERTYSETITEM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShaderPropertySetItem* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShaderPropertySetItem*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHADERPROPERTYSETITEM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
