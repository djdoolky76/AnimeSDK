#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DBGDNLLDPFI.h"
#include "unitysdk/RPG/GameCore/LogSamplerType.h"
namespace System { class String; }

#define INPJLPAFHAK_CTOR_OFFSET UNITYSDK_OFFSET(0x164FA280)
#define INPJLPAFHAK_ELEPDOMDAGA_OFFSET UNITYSDK_OFFSET(0x164FA1C0)
#define INPJLPAFHAK_FPKLDCGAJGP_OFFSET UNITYSDK_OFFSET(0x164FA200)
#define INPJLPAFHAK_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x164F9FF0)
#define INPJLPAFHAK_JAILHGGFLDH_OFFSET UNITYSDK_OFFSET(0x164FA000)

inline static constexpr unsigned int INPJLPAFHAK_TypeDefinitionIndex = 56163;

	class INPJLPAFHAK : public ::DBGDNLLDPFI
	{
	public:
		::System::String* EOBLJJBOBIN; // 0x10
		::RPG::GameCore::LogSamplerType _Type_k__BackingField; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INPJLPAFHAK_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LogSamplerType get_Type()
		{
			return ((::RPG::GameCore::LogSamplerType(*)(::PVOID))((::PBYTE)hIl2Cpp + INPJLPAFHAK_GET_TYPE_OFFSET))(this);
		}

		::System::Void JAILHGGFLDH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INPJLPAFHAK_JAILHGGFLDH_OFFSET))(this);
		}

		::System::Void FPKLDCGAJGP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INPJLPAFHAK_FPKLDCGAJGP_OFFSET))(this);
		}

		::System::Void ELEPDOMDAGA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INPJLPAFHAK_ELEPDOMDAGA_OFFSET))(this);
		}

	};
