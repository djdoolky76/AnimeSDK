#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DBGDNLLDPFI.h"
#include "unitysdk/RPG/GameCore/LogSamplerType.h"
namespace System { class String; }

#define MDHBOCMLPAD_CTOR_OFFSET UNITYSDK_OFFSET(0xB89E720)
#define MDHBOCMLPAD_ELEPDOMDAGA_OFFSET UNITYSDK_OFFSET(0xB89E5D0)
#define MDHBOCMLPAD_FPKLDCGAJGP_OFFSET UNITYSDK_OFFSET(0xB89E610)
#define MDHBOCMLPAD_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xB89E360)
#define MDHBOCMLPAD_JAILHGGFLDH_OFFSET UNITYSDK_OFFSET(0xB89E370)

inline static constexpr unsigned int MDHBOCMLPAD_TypeDefinitionIndex = 56116;

	class MDHBOCMLPAD : public ::DBGDNLLDPFI
	{
	public:
		::System::String* MCLLALGABAB; // 0x10
		::System::String* IFNAGLOMHBK; // 0x18
		::System::Byte KDHPKOFLNFM; // 0x20
		::System::Byte _padding0[0x3];
		::RPG::GameCore::LogSamplerType _Type_k__BackingField; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDHBOCMLPAD_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LogSamplerType get_Type()
		{
			return ((::RPG::GameCore::LogSamplerType(*)(::PVOID))((::PBYTE)hIl2Cpp + MDHBOCMLPAD_GET_TYPE_OFFSET))(this);
		}

		::System::Void JAILHGGFLDH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDHBOCMLPAD_JAILHGGFLDH_OFFSET))(this);
		}

		::System::Void FPKLDCGAJGP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDHBOCMLPAD_FPKLDCGAJGP_OFFSET))(this);
		}

		::System::Void ELEPDOMDAGA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDHBOCMLPAD_ELEPDOMDAGA_OFFSET))(this);
		}

	};
