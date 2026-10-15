#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CEBEOIBOBPA.h"
#include "unitysdk/DBGDNLLDPFI.h"
#include "unitysdk/RPG/GameCore/LogSamplerType.h"
namespace System { class String; }

#define EMDHLGCHNCM_CTOR_OFFSET UNITYSDK_OFFSET(0x15531840)
#define EMDHLGCHNCM_ELEPDOMDAGA_OFFSET UNITYSDK_OFFSET(0x15531770)
#define EMDHLGCHNCM_FPKLDCGAJGP_OFFSET UNITYSDK_OFFSET(0x155317B0)
#define EMDHLGCHNCM_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x15531580)
#define EMDHLGCHNCM_JAILHGGFLDH_OFFSET UNITYSDK_OFFSET(0x15531590)

inline static constexpr unsigned int EMDHLGCHNCM_TypeDefinitionIndex = 56140;

	class EMDHLGCHNCM : public ::DBGDNLLDPFI
	{
	public:
		::CEBEOIBOBPA GPKCGOLOJKC; // 0x10
		::System::String* IFNAGLOMHBK; // 0x28
		::RPG::GameCore::LogSamplerType _Type_k__BackingField; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMDHLGCHNCM_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LogSamplerType get_Type()
		{
			return ((::RPG::GameCore::LogSamplerType(*)(::PVOID))((::PBYTE)hIl2Cpp + EMDHLGCHNCM_GET_TYPE_OFFSET))(this);
		}

		::System::Void JAILHGGFLDH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMDHLGCHNCM_JAILHGGFLDH_OFFSET))(this);
		}

		::System::Void FPKLDCGAJGP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMDHLGCHNCM_FPKLDCGAJGP_OFFSET))(this);
		}

		::System::Void ELEPDOMDAGA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMDHLGCHNCM_ELEPDOMDAGA_OFFSET))(this);
		}

	};
