#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DBGDNLLDPFI.h"
#include "unitysdk/RPG/GameCore/LogSamplerType.h"
namespace System { class String; }

#define FIIDICLONBI_CTOR_OFFSET UNITYSDK_OFFSET(0x1579DB70)
#define FIIDICLONBI_ELEPDOMDAGA_OFFSET UNITYSDK_OFFSET(0x1579DAB0)
#define FIIDICLONBI_FPKLDCGAJGP_OFFSET UNITYSDK_OFFSET(0x1579DAF0)
#define FIIDICLONBI_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1579D8E0)
#define FIIDICLONBI_JAILHGGFLDH_OFFSET UNITYSDK_OFFSET(0x1579D8F0)

inline static constexpr unsigned int FIIDICLONBI_TypeDefinitionIndex = 56122;

	class FIIDICLONBI : public ::DBGDNLLDPFI
	{
	public:
		::System::String* GIHGIIBPBMP; // 0x10
		::RPG::GameCore::LogSamplerType _Type_k__BackingField; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIIDICLONBI_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LogSamplerType get_Type()
		{
			return ((::RPG::GameCore::LogSamplerType(*)(::PVOID))((::PBYTE)hIl2Cpp + FIIDICLONBI_GET_TYPE_OFFSET))(this);
		}

		::System::Void JAILHGGFLDH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIIDICLONBI_JAILHGGFLDH_OFFSET))(this);
		}

		::System::Void FPKLDCGAJGP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIIDICLONBI_FPKLDCGAJGP_OFFSET))(this);
		}

		::System::Void ELEPDOMDAGA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIIDICLONBI_ELEPDOMDAGA_OFFSET))(this);
		}

	};
