#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/PixAir/PixAirEquipmentState.h"
#include "unitysdk/RPG/GameCore/PixAirEnchantmentType.h"
#include "unitysdk/RPG/GameCore/PixAirEquipTag.h"
#include "unitysdk/RPG/GameCore/PixAirSlotType.h"
#include "unitysdk/System/Object.h"
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CGGFJMLHDBC_CTOR_OFFSET UNITYSDK_OFFSET(0x1D2DDC80)

inline static constexpr unsigned int CGGFJMLHDBC_TypeDefinitionIndex = 44665;

	class CGGFJMLHDBC : public ::System::Object
	{
	public:
		::System::Collections::Generic::HashSet_1<::RPG::GameCore::PixAirEquipTag>* OJFFPIIKPDJ; // 0x10
		::RPG::GameCore::PixAirEnchantmentType CCBIIDDBFGK; // 0x18
		::System::UInt32 AAGKEBFHLMC; // 0x1C
		::System::Int32 NMOKIHDMMNG; // 0x20
		::System::Boolean HGEOCDHCKFN; // 0x24
		::System::Boolean NCCJHHCGFHF; // 0x25
		::System::Byte _padding0[0x2];
		::RPG::GameCore::PixAirSlotType MPADIDFJBEF; // 0x28
		::RPG::Client::LittleGame::PixAir::PixAirEquipmentState MEPFOEEGBEA; // 0x2C
		::System::Int32 NBFOFKGNNIO; // 0x30
		::System::Int32 EEFIPNFMELC; // 0x34
		::System::Int32 NPHAJEKCBKF; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGGFJMLHDBC_CTOR_OFFSET))(this);
		}

	};
