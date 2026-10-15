#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CEBEOIBOBPA.h"
#include "unitysdk/DBGDNLLDPFI.h"
#include "unitysdk/RPG/GameCore/LogSamplerType.h"
namespace System { class String; }

#define KFALNBDIEEA_CTOR_OFFSET UNITYSDK_OFFSET(0xB3807F0)
#define KFALNBDIEEA_ELEPDOMDAGA_OFFSET UNITYSDK_OFFSET(0xB3806E0)
#define KFALNBDIEEA_FPKLDCGAJGP_OFFSET UNITYSDK_OFFSET(0xB380720)
#define KFALNBDIEEA_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xB3804D0)
#define KFALNBDIEEA_JAILHGGFLDH_OFFSET UNITYSDK_OFFSET(0xB3804E0)

inline static constexpr unsigned int KFALNBDIEEA_TypeDefinitionIndex = 56099;

	class KFALNBDIEEA : public ::DBGDNLLDPFI
	{
	public:
		::System::String* GMNPKDNIPJE; // 0x10
		::CEBEOIBOBPA PJJGPDNKMJH; // 0x18
		::RPG::GameCore::LogSamplerType _Type_k__BackingField; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFALNBDIEEA_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LogSamplerType get_Type()
		{
			return ((::RPG::GameCore::LogSamplerType(*)(::PVOID))((::PBYTE)hIl2Cpp + KFALNBDIEEA_GET_TYPE_OFFSET))(this);
		}

		::System::Void JAILHGGFLDH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFALNBDIEEA_JAILHGGFLDH_OFFSET))(this);
		}

		::System::Void FPKLDCGAJGP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFALNBDIEEA_FPKLDCGAJGP_OFFSET))(this);
		}

		::System::Void ELEPDOMDAGA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFALNBDIEEA_ELEPDOMDAGA_OFFSET))(this);
		}

	};
