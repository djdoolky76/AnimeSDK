#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class HoYoGroupStreamingTemplateItem; }
namespace System { class String; }

#define RPG_GAMECORE_HOYOGROUPSTREAMINGTEMPLATEITEM_CTOR_OFFSET UNITYSDK_OFFSET(0x1D771170)
#define RPG_GAMECORE_HOYOGROUPSTREAMINGTEMPLATEITEM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D771000)

namespace RPG::GameCore
{
	class HoYoGroupStreamingTemplateItem : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 FloorID; // 0x10
		::System::UInt32 GroupID; // 0x14
		::System::String* TemplateName; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HOYOGROUPSTREAMINGTEMPLATEITEM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::HoYoGroupStreamingTemplateItem* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::HoYoGroupStreamingTemplateItem*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HOYOGROUPSTREAMINGTEMPLATEITEM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
