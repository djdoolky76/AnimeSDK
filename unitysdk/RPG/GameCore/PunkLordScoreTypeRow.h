#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/PunkLordMonsterRare.h"
#include "unitysdk/RPG/GameCore/PunkLordScoreFinishType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PunkLordScoreTypeRow; }

#define RPG_GAMECORE_PUNKLORDSCORETYPEROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D930280)
#define RPG_GAMECORE_PUNKLORDSCORETYPEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D930070)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PunkLordScoreTypeRow_TypeDefinitionIndex = 12299;

	class PunkLordScoreTypeRow : public ::System::Object
	{
	public:
		::System::UInt32 FinishPoint; // 0x10
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID FinishName; // 0x18
		::RPG::GameCore::PunkLordMonsterRare FinishRare; // 0x28
		::RPG::GameCore::PunkLordScoreFinishType FinishID; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PUNKLORDSCORETYPEROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::PunkLordScoreTypeRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PunkLordScoreTypeRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PUNKLORDSCORETYPEROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
