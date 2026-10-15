#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/HeliobusTemplateType.h"
#include "unitysdk/RPG/GameCore/HeliobusTendencyType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class HeliobusTemplateRow; }
namespace System { class String; }

#define RPG_GAMECORE_HELIOBUSTEMPLATEROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7668F0)
#define RPG_GAMECORE_HELIOBUSTEMPLATEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D766130)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HeliobusTemplateRow_TypeDefinitionIndex = 13749;

	class HeliobusTemplateRow : public ::System::Object
	{
	public:
		::System::String* PrefabPathNormal; // 0x10
		::System::String* PrefabPathSmall; // 0x18
		::System::UInt32 PostImgID; // 0x20
		::System::UInt32 HeliobusTemplateID; // 0x24
		::RPG::GameCore::HeliobusTendencyType TemplateTendency; // 0x28
		::RPG::GameCore::HeliobusTemplateType TemplateType; // 0x2C
		::RPG::Client::TextID HeliobusTemplateTitle; // 0x30
		::RPG::Client::TextID HeliobusTemplateContent; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSTEMPLATEROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::HeliobusTemplateRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::HeliobusTemplateRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSTEMPLATEROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
