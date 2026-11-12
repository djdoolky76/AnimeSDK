#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FarmTypeConfig.h"
#include "unitysdk/RPG/GameCore/MappingInfoType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ItemConfig; }
namespace RPG::GameCore { class MappingInfoRow; }

#define RPG_GAMECORE_MAPPINGINFOROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA50A70)
#define RPG_GAMECORE_MAPPINGINFOROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EA50110)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MappingInfoRow_TypeDefinitionIndex = 12625;

	class MappingInfoRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::ItemConfig*>* DisplayItemList; // 0x10
		::Il2CppArray<::System::UInt32>* ShowMonsterList; // 0x18
		::System::UInt32 WorldLevel; // 0x20
		::RPG::GameCore::FarmTypeConfig FarmType; // 0x24
		::RPG::Client::TextID Desc; // 0x28
		::RPG::GameCore::MappingInfoType Type; // 0x38
		::System::UInt32 ID; // 0x3C
		::System::Boolean IsShowInFog; // 0x40
		::System::Boolean isShowCleared; // 0x41
		::System::Boolean IsShowMonsterSummon; // 0x42
		::System::Byte _padding0[0x5];
		::RPG::Client::TextID Name; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPPINGINFOROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::MappingInfoRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MappingInfoRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPPINGINFOROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
