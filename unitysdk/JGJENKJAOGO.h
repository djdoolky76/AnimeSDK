#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DBGDNLLDPFI.h"
#include "unitysdk/RPG/GameCore/LogSamplerType.h"
namespace System { class String; }

#define JGJENKJAOGO_CTOR_OFFSET UNITYSDK_OFFSET(0xB194710)
#define JGJENKJAOGO_ELEPDOMDAGA_OFFSET UNITYSDK_OFFSET(0xB194640)
#define JGJENKJAOGO_FPKLDCGAJGP_OFFSET UNITYSDK_OFFSET(0xB194680)
#define JGJENKJAOGO_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xB194450)
#define JGJENKJAOGO_JAILHGGFLDH_OFFSET UNITYSDK_OFFSET(0xB194460)

inline static constexpr unsigned int JGJENKJAOGO_TypeDefinitionIndex = 56121;

	class JGJENKJAOGO : public ::DBGDNLLDPFI
	{
	public:
		::System::String* BBMMBAKDJBC; // 0x10
		::System::String* MMILCIBMANG; // 0x18
		::RPG::GameCore::LogSamplerType _Type_k__BackingField; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGJENKJAOGO_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LogSamplerType get_Type()
		{
			return ((::RPG::GameCore::LogSamplerType(*)(::PVOID))((::PBYTE)hIl2Cpp + JGJENKJAOGO_GET_TYPE_OFFSET))(this);
		}

		::System::Void JAILHGGFLDH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGJENKJAOGO_JAILHGGFLDH_OFFSET))(this);
		}

		::System::Void FPKLDCGAJGP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGJENKJAOGO_FPKLDCGAJGP_OFFSET))(this);
		}

		::System::Void ELEPDOMDAGA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGJENKJAOGO_ELEPDOMDAGA_OFFSET))(this);
		}

	};
