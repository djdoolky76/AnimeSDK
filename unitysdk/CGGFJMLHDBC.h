#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/PixAir/PixAirEquipmentState.h"
#include "unitysdk/RPG/GameCore/PixAirEnchantmentType.h"
#include "unitysdk/RPG/GameCore/PixAirEquipTag.h"
#include "unitysdk/RPG/GameCore/PixAirSlotType.h"
#include "unitysdk/System/Object.h"
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CGGFJMLHDBC_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA62040)

inline static constexpr unsigned int CGGFJMLHDBC_TypeDefinitionIndex = 44665;

	class CGGFJMLHDBC : public ::System::Object
	{
	public:
		::System::Collections::Generic::HashSet_1<::RPG::GameCore::PixAirEquipTag>* OJFFPIIKPDJ; // 0x10
		::System::Int32 NMOKIHDMMNG; // 0x18
		::System::UInt32 AAGKEBFHLMC; // 0x1C
		::RPG::Client::LittleGame::PixAir::PixAirEquipmentState MEPFOEEGBEA; // 0x20
		::RPG::GameCore::PixAirSlotType MPADIDFJBEF; // 0x24
		::System::Int32 EEFIPNFMELC; // 0x28
		::System::Int32 NPHAJEKCBKF; // 0x2C
		::RPG::GameCore::PixAirEnchantmentType CCBIIDDBFGK; // 0x30
		::System::Boolean NCCJHHCGFHF; // 0x34
		::System::Boolean HGEOCDHCKFN; // 0x35
		::System::Byte _padding0[0x2];
		::System::Int32 NBFOFKGNNIO; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGGFJMLHDBC_CTOR_OFFSET))(this);
		}

	};
