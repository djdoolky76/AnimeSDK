#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DBGDNLLDPFI.h"
#include "unitysdk/RPG/GameCore/LogSamplerType.h"
namespace System { class String; }

#define OFALKOGCAIA_CTOR_OFFSET UNITYSDK_OFFSET(0xBE34390)
#define OFALKOGCAIA_ELEPDOMDAGA_OFFSET UNITYSDK_OFFSET(0xBE34170)
#define OFALKOGCAIA_FPKLDCGAJGP_OFFSET UNITYSDK_OFFSET(0xBE341B0)
#define OFALKOGCAIA_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xBE33E50)
#define OFALKOGCAIA_JAILHGGFLDH_OFFSET UNITYSDK_OFFSET(0xBE33E60)

inline static constexpr unsigned int OFALKOGCAIA_TypeDefinitionIndex = 56107;

	class OFALKOGCAIA : public ::DBGDNLLDPFI
	{
	public:
		::System::String* EOBLJJBOBIN; // 0x10
		::System::String* MCLLALGABAB; // 0x18
		::System::Byte JBCBONFABOM; // 0x20
		::System::Byte _padding0[0x3];
		::System::Int32 HFOGMCJCIAI; // 0x24
		::RPG::GameCore::LogSamplerType _Type_k__BackingField; // 0x28
		::System::Int32 KBAPBCNJHDB; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFALKOGCAIA_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LogSamplerType get_Type()
		{
			return ((::RPG::GameCore::LogSamplerType(*)(::PVOID))((::PBYTE)hIl2Cpp + OFALKOGCAIA_GET_TYPE_OFFSET))(this);
		}

		::System::Void JAILHGGFLDH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFALKOGCAIA_JAILHGGFLDH_OFFSET))(this);
		}

		::System::Void FPKLDCGAJGP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFALKOGCAIA_FPKLDCGAJGP_OFFSET))(this);
		}

		::System::Void ELEPDOMDAGA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFALKOGCAIA_ELEPDOMDAGA_OFFSET))(this);
		}

	};
