#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"

#define GJJKGFLKBPH_COEONDABKIH_OFFSET UNITYSDK_OFFSET(0x3E63FD0)
#define GJJKGFLKBPH_GET_CONDITIONTEXT_OFFSET UNITYSDK_OFFSET(0x3DBBF00)
#define GJJKGFLKBPH_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x7CED80)
#define GJJKGFLKBPH_GET_ISOBTAINED_OFFSET UNITYSDK_OFFSET(0x3DF3040)
#define GJJKGFLKBPH_GET_TOTAL_OFFSET UNITYSDK_OFFSET(0x7CEA10)
#define GJJKGFLKBPH_SET_CONDITIONTEXT_OFFSET UNITYSDK_OFFSET(0x3E42150)
#define GJJKGFLKBPH_SET_CURRENT_OFFSET UNITYSDK_OFFSET(0xADCE20)
#define GJJKGFLKBPH_SET_ISOBTAINED_OFFSET UNITYSDK_OFFSET(0x3E63FC0)
#define GJJKGFLKBPH_SET_TOTAL_OFFSET UNITYSDK_OFFSET(0xFDBF80)

inline static constexpr unsigned int GJJKGFLKBPH_TypeDefinitionIndex = 84845;

	struct alignas(4) GJJKGFLKBPH
	{
		::System::UInt32 _Current_k__BackingField; // 0x10
		::System::UInt32 _Total_k__BackingField; // 0x14
		::RPG::Client::TextID _ConditionText_k__BackingField; // 0x18
		::System::Boolean _IsObtained_k__BackingField; // 0x28
		::System::UInt32 get_Current()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GJJKGFLKBPH_GET_CURRENT_OFFSET))(this);
		}

		::System::Void set_Current(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GJJKGFLKBPH_SET_CURRENT_OFFSET))(this, a1);
		}

		::System::UInt32 get_Total()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GJJKGFLKBPH_GET_TOTAL_OFFSET))(this);
		}

		::System::Void set_Total(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GJJKGFLKBPH_SET_TOTAL_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_ConditionText()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + GJJKGFLKBPH_GET_CONDITIONTEXT_OFFSET))(this);
		}

		::System::Void set_ConditionText(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + GJJKGFLKBPH_SET_CONDITIONTEXT_OFFSET))(this, a1);
		}

		::System::Boolean get_IsObtained()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GJJKGFLKBPH_GET_ISOBTAINED_OFFSET))(this);
		}

		::System::Void set_IsObtained(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GJJKGFLKBPH_SET_ISOBTAINED_OFFSET))(this, a1);
		}

		::System::Single COEONDABKIH()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + GJJKGFLKBPH_COEONDABKIH_OFFSET))(this);
		}

	};
