#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DBGDNLLDPFI.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/LogSamplerType.h"

#define LDAPJCKOHNN_CTOR_OFFSET UNITYSDK_OFFSET(0xB61B980)
#define LDAPJCKOHNN_ELEPDOMDAGA_OFFSET UNITYSDK_OFFSET(0xB61B750)
#define LDAPJCKOHNN_FPKLDCGAJGP_OFFSET UNITYSDK_OFFSET(0xB61B790)
#define LDAPJCKOHNN_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xB61B420)
#define LDAPJCKOHNN_JAILHGGFLDH_OFFSET UNITYSDK_OFFSET(0xB61B430)

	class LDAPJCKOHNN : public ::DBGDNLLDPFI
	{
	public:
		::RPG::GameCore::FixPoint DFLENFKEMPM; // 0x10
		::RPG::GameCore::LogSamplerType _Type_k__BackingField; // 0x18
		::System::Byte _padding0[0x4];
		::RPG::GameCore::FixPoint BGOIDNBFIMC; // 0x20
		::RPG::GameCore::FixPoint OIEBGFOEOKG; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDAPJCKOHNN_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LogSamplerType get_Type()
		{
			return ((::RPG::GameCore::LogSamplerType(*)(::PVOID))((::PBYTE)hIl2Cpp + LDAPJCKOHNN_GET_TYPE_OFFSET))(this);
		}

		::System::Void JAILHGGFLDH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDAPJCKOHNN_JAILHGGFLDH_OFFSET))(this);
		}

		::System::Void FPKLDCGAJGP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDAPJCKOHNN_FPKLDCGAJGP_OFFSET))(this);
		}

		::System::Void ELEPDOMDAGA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDAPJCKOHNN_ELEPDOMDAGA_OFFSET))(this);
		}

	};
