#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DBGDNLLDPFI.h"
#include "unitysdk/RPG/GameCore/LogSamplerType.h"
namespace System { class String; }

#define MHILOAIABIG_CTOR_OFFSET UNITYSDK_OFFSET(0xB93D770)
#define MHILOAIABIG_ELEPDOMDAGA_OFFSET UNITYSDK_OFFSET(0xB93D670)
#define MHILOAIABIG_FPKLDCGAJGP_OFFSET UNITYSDK_OFFSET(0xB93D6B0)
#define MHILOAIABIG_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xB93D460)
#define MHILOAIABIG_JAILHGGFLDH_OFFSET UNITYSDK_OFFSET(0xB93D470)

inline static constexpr unsigned int MHILOAIABIG_TypeDefinitionIndex = 56128;

	class MHILOAIABIG : public ::DBGDNLLDPFI
	{
	public:
		::System::String* HCOAKLFBOCK; // 0x10
		::RPG::GameCore::LogSamplerType _Type_k__BackingField; // 0x18
		::System::UInt32 CEGOPEIKDLA; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHILOAIABIG_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LogSamplerType get_Type()
		{
			return ((::RPG::GameCore::LogSamplerType(*)(::PVOID))((::PBYTE)hIl2Cpp + MHILOAIABIG_GET_TYPE_OFFSET))(this);
		}

		::System::Void JAILHGGFLDH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHILOAIABIG_JAILHGGFLDH_OFFSET))(this);
		}

		::System::Void FPKLDCGAJGP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHILOAIABIG_FPKLDCGAJGP_OFFSET))(this);
		}

		::System::Void ELEPDOMDAGA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHILOAIABIG_ELEPDOMDAGA_OFFSET))(this);
		}

	};
