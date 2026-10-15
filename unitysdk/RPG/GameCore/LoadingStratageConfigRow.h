#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LoadingStratageType.h"
#include "unitysdk/System/Object.h"
class BPANGADOKAM;
class FCOEMCEDLNL;
namespace RPG::GameCore { class LoadingStratageConfigRow; }

#define RPG_GAMECORE_LOADINGSTRATAGECONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7ECDB0)
#define RPG_GAMECORE_LOADINGSTRATAGECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D7ECB20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LoadingStratageConfigRow_TypeDefinitionIndex = 13995;

	class LoadingStratageConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* MissionIDList; // 0x10
		::Il2CppArray<::BPANGADOKAM*>* FloorOperation; // 0x18
		::Il2CppArray<::System::UInt32>* AvailableEntranceIDList; // 0x20
		::System::UInt32 Priority; // 0x28
		::System::UInt32 LoadingID; // 0x2C
		::System::UInt32 LoadingType; // 0x30
		::RPG::GameCore::LoadingStratageType StratageType; // 0x34
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOADINGSTRATAGECONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::LoadingStratageConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LoadingStratageConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOADINGSTRATAGECONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
