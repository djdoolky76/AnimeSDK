#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueMapRow; }

#define RPG_GAMECORE_ROGUEMAPROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9DAE70)
#define RPG_GAMECORE_ROGUEMAPROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D9DA130)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueMapRow_TypeDefinitionIndex = 14707;

	class RogueMapRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* NextSiteIDList; // 0x10
		::System::Single PosX; // 0x18
		::System::UInt32 RogueMapID; // 0x1C
		::System::Single MonsterWarningRatio; // 0x20
		::System::Single PosY; // 0x24
		::System::Boolean IsStart; // 0x28
		::System::Byte _padding0[0x3];
		::System::UInt32 SiteID; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAPROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueMapRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueMapRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAPROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
