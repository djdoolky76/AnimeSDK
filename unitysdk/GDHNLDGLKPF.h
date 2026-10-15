#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DBGDNLLDPFI.h"
#include "unitysdk/RPG/GameCore/LogSamplerType.h"
namespace System { class String; }

#define GDHNLDGLKPF_CTOR_OFFSET UNITYSDK_OFFSET(0x1599D070)
#define GDHNLDGLKPF_ELEPDOMDAGA_OFFSET UNITYSDK_OFFSET(0x1599CFB0)
#define GDHNLDGLKPF_FPKLDCGAJGP_OFFSET UNITYSDK_OFFSET(0x1599CFF0)
#define GDHNLDGLKPF_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1599CDE0)
#define GDHNLDGLKPF_JAILHGGFLDH_OFFSET UNITYSDK_OFFSET(0x1599CDF0)

inline static constexpr unsigned int GDHNLDGLKPF_TypeDefinitionIndex = 56120;

	class GDHNLDGLKPF : public ::DBGDNLLDPFI
	{
	public:
		::System::String* GIHGIIBPBMP; // 0x10
		::RPG::GameCore::LogSamplerType _Type_k__BackingField; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDHNLDGLKPF_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LogSamplerType get_Type()
		{
			return ((::RPG::GameCore::LogSamplerType(*)(::PVOID))((::PBYTE)hIl2Cpp + GDHNLDGLKPF_GET_TYPE_OFFSET))(this);
		}

		::System::Void JAILHGGFLDH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDHNLDGLKPF_JAILHGGFLDH_OFFSET))(this);
		}

		::System::Void FPKLDCGAJGP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDHNLDGLKPF_FPKLDCGAJGP_OFFSET))(this);
		}

		::System::Void ELEPDOMDAGA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDHNLDGLKPF_ELEPDOMDAGA_OFFSET))(this);
		}

	};
