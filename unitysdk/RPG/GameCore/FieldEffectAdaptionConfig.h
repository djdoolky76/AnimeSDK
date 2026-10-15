#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FieldEffectAdaptionConfig; }
namespace System { class String; }

#define RPG_GAMECORE_FIELDEFFECTADAPTIONCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D672FA0)
#define RPG_GAMECORE_FIELDEFFECTADAPTIONCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D672DC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FieldEffectAdaptionConfig_TypeDefinitionIndex = 16511;

	class FieldEffectAdaptionConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* EffectPath; // 0x10
		::System::Single Scale; // 0x18
		::RPG::MVector3 PositionOffset; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIELDEFFECTADAPTIONCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FieldEffectAdaptionConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FieldEffectAdaptionConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIELDEFFECTADAPTIONCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
