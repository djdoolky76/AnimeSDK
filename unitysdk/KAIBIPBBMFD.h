#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class ChenLingEnchantLevelRow; }

#define KAIBIPBBMFD_CEDHDEKHHFD_OFFSET UNITYSDK_OFFSET(0xB2D2250)
#define KAIBIPBBMFD_CTOR_OFFSET UNITYSDK_OFFSET(0xB2D20E0)
#define KAIBIPBBMFD_GET_ENCHANTID_OFFSET UNITYSDK_OFFSET(0xB2D2100)
#define KAIBIPBBMFD_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0xB2D2120)
#define KAIBIPBBMFD_PDAENODHFCM_OFFSET UNITYSDK_OFFSET(0xB2D2140)
#define KAIBIPBBMFD_PDFIOIAAMCM_OFFSET UNITYSDK_OFFSET(0xB2D21B0)
#define KAIBIPBBMFD_SET_ENCHANTID_OFFSET UNITYSDK_OFFSET(0xB2D2110)
#define KAIBIPBBMFD_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0xB2D2130)

inline static constexpr unsigned int KAIBIPBBMFD_TypeDefinitionIndex = 61432;

	class KAIBIPBBMFD : public ::System::Object
	{
	public:
		::System::UInt32 _Level_k__BackingField; // 0x10
		::System::UInt32 _EnchantID_k__BackingField; // 0x14
		::System::Void _ctor(::RPG::GameCore::ChenLingEnchantLevelRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChenLingEnchantLevelRow*))((::PBYTE)hIl2Cpp + KAIBIPBBMFD_CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 get_EnchantID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KAIBIPBBMFD_GET_ENCHANTID_OFFSET))(this);
		}

		::System::Void set_EnchantID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KAIBIPBBMFD_SET_ENCHANTID_OFFSET))(this, a1);
		}

		::System::UInt32 get_Level()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KAIBIPBBMFD_GET_LEVEL_OFFSET))(this);
		}

		::System::Void set_Level(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KAIBIPBBMFD_SET_LEVEL_OFFSET))(this, a1);
		}

		::RPG::GameCore::ChenLingEnchantLevelRow* PDAENODHFCM()
		{
			return ((::RPG::GameCore::ChenLingEnchantLevelRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + KAIBIPBBMFD_PDAENODHFCM_OFFSET))(this);
		}

		::System::UInt32 PDFIOIAAMCM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KAIBIPBBMFD_PDFIOIAAMCM_OFFSET))(this);
		}

		::System::UInt32 CEDHDEKHHFD()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KAIBIPBBMFD_CEDHDEKHHFD_OFFSET))(this);
		}

	};
