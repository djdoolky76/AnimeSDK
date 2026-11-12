#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class ChenLingEnchantLevelRow; }

#define KAIBIPBBMFD_CEDHDEKHHFD_OFFSET UNITYSDK_OFFSET(0xBB5CD40)
#define KAIBIPBBMFD_CTOR_OFFSET UNITYSDK_OFFSET(0xBB5CBC0)
#define KAIBIPBBMFD_GET_ENCHANTID_OFFSET UNITYSDK_OFFSET(0xBB5CBF0)
#define KAIBIPBBMFD_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0xBB5CC10)
#define KAIBIPBBMFD_PDAENODHFCM_OFFSET UNITYSDK_OFFSET(0xBB5CC30)
#define KAIBIPBBMFD_PDFIOIAAMCM_OFFSET UNITYSDK_OFFSET(0xBB5CCA0)
#define KAIBIPBBMFD_SET_ENCHANTID_OFFSET UNITYSDK_OFFSET(0xBB5CC00)
#define KAIBIPBBMFD_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0xBB5CC20)

inline static constexpr unsigned int KAIBIPBBMFD_TypeDefinitionIndex = 62817;

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
