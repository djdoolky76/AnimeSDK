#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CEBEOIBOBPA.h"
#include "unitysdk/DBGDNLLDPFI.h"
#include "unitysdk/RPG/GameCore/LogSamplerType.h"
namespace System { class String; }

#define CACDBDCILBL_CTOR_OFFSET UNITYSDK_OFFSET(0xC1BE060)
#define CACDBDCILBL_ELEPDOMDAGA_OFFSET UNITYSDK_OFFSET(0xC1BDF90)
#define CACDBDCILBL_FPKLDCGAJGP_OFFSET UNITYSDK_OFFSET(0xC1BDFD0)
#define CACDBDCILBL_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xC1BDDA0)
#define CACDBDCILBL_JAILHGGFLDH_OFFSET UNITYSDK_OFFSET(0xC1BDDB0)

inline static constexpr unsigned int CACDBDCILBL_TypeDefinitionIndex = 56142;

	class CACDBDCILBL : public ::DBGDNLLDPFI
	{
	public:
		::CEBEOIBOBPA GPKCGOLOJKC; // 0x10
		::System::String* BBMMBAKDJBC; // 0x28
		::RPG::GameCore::LogSamplerType _Type_k__BackingField; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CACDBDCILBL_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LogSamplerType get_Type()
		{
			return ((::RPG::GameCore::LogSamplerType(*)(::PVOID))((::PBYTE)hIl2Cpp + CACDBDCILBL_GET_TYPE_OFFSET))(this);
		}

		::System::Void JAILHGGFLDH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CACDBDCILBL_JAILHGGFLDH_OFFSET))(this);
		}

		::System::Void FPKLDCGAJGP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CACDBDCILBL_FPKLDCGAJGP_OFFSET))(this);
		}

		::System::Void ELEPDOMDAGA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CACDBDCILBL_ELEPDOMDAGA_OFFSET))(this);
		}

	};
