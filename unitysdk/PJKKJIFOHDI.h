#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DBGDNLLDPFI.h"
#include "unitysdk/RPG/GameCore/LogSamplerType.h"
namespace System { class String; }

#define PJKKJIFOHDI_CTOR_OFFSET UNITYSDK_OFFSET(0xC291660)
#define PJKKJIFOHDI_ELEPDOMDAGA_OFFSET UNITYSDK_OFFSET(0xC291580)
#define PJKKJIFOHDI_FPKLDCGAJGP_OFFSET UNITYSDK_OFFSET(0xC2915C0)
#define PJKKJIFOHDI_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xC291370)
#define PJKKJIFOHDI_JAILHGGFLDH_OFFSET UNITYSDK_OFFSET(0xC291380)

inline static constexpr unsigned int PJKKJIFOHDI_TypeDefinitionIndex = 56134;

	class PJKKJIFOHDI : public ::DBGDNLLDPFI
	{
	public:
		::System::String* KPHCFCEBAJE; // 0x10
		::System::String* FCOOFCJFFNP; // 0x18
		::System::String* LMCAMBGAGDE; // 0x20
		::RPG::GameCore::LogSamplerType _Type_k__BackingField; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJKKJIFOHDI_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LogSamplerType get_Type()
		{
			return ((::RPG::GameCore::LogSamplerType(*)(::PVOID))((::PBYTE)hIl2Cpp + PJKKJIFOHDI_GET_TYPE_OFFSET))(this);
		}

		::System::Void JAILHGGFLDH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJKKJIFOHDI_JAILHGGFLDH_OFFSET))(this);
		}

		::System::Void FPKLDCGAJGP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJKKJIFOHDI_FPKLDCGAJGP_OFFSET))(this);
		}

		::System::Void ELEPDOMDAGA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJKKJIFOHDI_ELEPDOMDAGA_OFFSET))(this);
		}

	};
