#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueNousSurfaceTagRow; }

#define RPG_GAMECORE_ROGUENOUSSURFACETAGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA28280)
#define RPG_GAMECORE_ROGUENOUSSURFACETAGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DA27C00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueNousSurfaceTagRow_TypeDefinitionIndex = 14909;

	class RogueNousSurfaceTagRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID TagName; // 0x10
		::System::UInt32 TagID; // 0x20
		::System::UInt32 Sort; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSSURFACETAGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueNousSurfaceTagRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueNousSurfaceTagRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSSURFACETAGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
