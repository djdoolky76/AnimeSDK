#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FarmTypeConfig.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class StageInvasionMaterialRow; }

#define RPG_GAMECORE_STAGEINVASIONMATERIALROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB0F510)
#define RPG_GAMECORE_STAGEINVASIONMATERIALROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DB0F3C0)

namespace RPG::GameCore
{
	class StageInvasionMaterialRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::FarmTypeConfig>* FarmTypeList; // 0x10
		::System::UInt32 InvasionID; // 0x18
		::System::UInt32 MaterialType; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEINVASIONMATERIALROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::StageInvasionMaterialRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StageInvasionMaterialRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEINVASIONMATERIALROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
