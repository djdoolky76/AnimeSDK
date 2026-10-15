#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DBGDNLLDPFI.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/LogSamplerType.h"
namespace System { class String; }

#define GKIIALDPFID_CTOR_OFFSET UNITYSDK_OFFSET(0x15A98B70)
#define GKIIALDPFID_ELEPDOMDAGA_OFFSET UNITYSDK_OFFSET(0x15A989A0)
#define GKIIALDPFID_FPKLDCGAJGP_OFFSET UNITYSDK_OFFSET(0x15A989E0)
#define GKIIALDPFID_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x15A986D0)
#define GKIIALDPFID_JAILHGGFLDH_OFFSET UNITYSDK_OFFSET(0x15A986E0)

inline static constexpr unsigned int GKIIALDPFID_TypeDefinitionIndex = 56151;

	class GKIIALDPFID : public ::DBGDNLLDPFI
	{
	public:
		::System::String* MFIEDDGBIPH; // 0x10
		::RPG::GameCore::FixPoint KHBBNDBJAFK; // 0x18
		::RPG::GameCore::FixPoint FOBILLOEFJK; // 0x20
		::RPG::GameCore::LogSamplerType _Type_k__BackingField; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKIIALDPFID_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LogSamplerType get_Type()
		{
			return ((::RPG::GameCore::LogSamplerType(*)(::PVOID))((::PBYTE)hIl2Cpp + GKIIALDPFID_GET_TYPE_OFFSET))(this);
		}

		::System::Void JAILHGGFLDH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKIIALDPFID_JAILHGGFLDH_OFFSET))(this);
		}

		::System::Void FPKLDCGAJGP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKIIALDPFID_FPKLDCGAJGP_OFFSET))(this);
		}

		::System::Void ELEPDOMDAGA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKIIALDPFID_ELEPDOMDAGA_OFFSET))(this);
		}

	};
