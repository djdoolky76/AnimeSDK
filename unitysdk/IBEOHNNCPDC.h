#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TextID.h"
namespace RPG::GameCore { class ChenLingEnchantRow; }

#define IBEOHNNCPDC_CTOR_OFFSET UNITYSDK_OFFSET(0x15E30EF0)
#define IBEOHNNCPDC_GET_ID_OFFSET UNITYSDK_OFFSET(0x15E30F10)
#define IBEOHNNCPDC_MLMGEFIOION_OFFSET UNITYSDK_OFFSET(0x15E30F90)
#define IBEOHNNCPDC_PDAENODHFCM_OFFSET UNITYSDK_OFFSET(0x15E30F30)
#define IBEOHNNCPDC_PNLLINHJDJF_OFFSET UNITYSDK_OFFSET(0x15E31050)
#define IBEOHNNCPDC_SET_ID_OFFSET UNITYSDK_OFFSET(0x15E30F20)

inline static constexpr unsigned int IBEOHNNCPDC_TypeDefinitionIndex = 61430;

	class IBEOHNNCPDC : public ::System::Object
	{
	public:
		::System::UInt32 _ID_k__BackingField; // 0x10
		::System::Void _ctor(::RPG::GameCore::ChenLingEnchantRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChenLingEnchantRow*))((::PBYTE)hIl2Cpp + IBEOHNNCPDC_CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IBEOHNNCPDC_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IBEOHNNCPDC_SET_ID_OFFSET))(this, a1);
		}

		::RPG::GameCore::ChenLingEnchantRow* PDAENODHFCM()
		{
			return ((::RPG::GameCore::ChenLingEnchantRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + IBEOHNNCPDC_PDAENODHFCM_OFFSET))(this);
		}

		::RPG::Client::TextID MLMGEFIOION()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + IBEOHNNCPDC_MLMGEFIOION_OFFSET))(this);
		}

		::RPG::Client::TextID PNLLINHJDJF()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + IBEOHNNCPDC_PNLLINHJDJF_OFFSET))(this);
		}

	};
