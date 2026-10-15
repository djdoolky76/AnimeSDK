#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MaterialSubmitterReplyRow; }
namespace System { class String; }

#define RPG_GAMECORE_MATERIALSUBMITTERREPLYROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D85F490)
#define RPG_GAMECORE_MATERIALSUBMITTERREPLYROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D85ED30)

namespace RPG::GameCore
{
	class MaterialSubmitterReplyRow : public ::System::Object
	{
	public:
		::System::String* HeadIconPath; // 0x10
		::RPG::Client::TextID Content; // 0x18
		::System::UInt32 ID; // 0x28
		::System::UInt32 Tag; // 0x2C
		::RPG::Client::TextID PersonName; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATERIALSUBMITTERREPLYROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::MaterialSubmitterReplyRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MaterialSubmitterReplyRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATERIALSUBMITTERREPLYROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
