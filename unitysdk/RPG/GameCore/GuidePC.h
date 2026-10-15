#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GuidePC; }
namespace System { class String; }

#define RPG_GAMECORE_GUIDEPC_CTOR_OFFSET UNITYSDK_OFFSET(0x1D721170)
#define RPG_GAMECORE_GUIDEPC_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D720DD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GuidePC_TypeDefinitionIndex = 24336;

	class GuidePC : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Boolean UsePCGuide; // 0x10
		::System::Boolean Skip; // 0x11
		::System::Byte _padding0[0x2];
		::System::Int32 GuideResID; // 0x14
		::System::String* Path; // 0x18
		::System::Boolean CopyAnchorAndSale; // 0x20
		::System::Byte _padding1[0x3];
		::System::Single OffsetX; // 0x24
		::System::Single OffsetY; // 0x28
		::System::Single Scale; // 0x2C
		::System::String* Animation; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GUIDEPC_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::GuidePC* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GuidePC*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GUIDEPC_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
