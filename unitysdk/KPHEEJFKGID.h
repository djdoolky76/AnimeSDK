#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DBGDNLLDPFI.h"
#include "unitysdk/RPG/GameCore/LogSamplerType.h"
namespace System { class String; }

#define KPHEEJFKGID_CTOR_OFFSET UNITYSDK_OFFSET(0xB5BDBA0)
#define KPHEEJFKGID_ELEPDOMDAGA_OFFSET UNITYSDK_OFFSET(0xB5BD9E0)
#define KPHEEJFKGID_FPKLDCGAJGP_OFFSET UNITYSDK_OFFSET(0xB5BDAA0)
#define KPHEEJFKGID_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xB5BD720)
#define KPHEEJFKGID_JAILHGGFLDH_OFFSET UNITYSDK_OFFSET(0xB5BD730)

inline static constexpr unsigned int KPHEEJFKGID_TypeDefinitionIndex = 56117;

	class KPHEEJFKGID : public ::DBGDNLLDPFI
	{
	public:
		::System::String* KBKOGLCAEKG; // 0x10
		::System::String* BHLPBOBCJFK; // 0x18
		::System::String* DINBCKPJJEL; // 0x20
		::System::String* PMGPFPNHJAA; // 0x28
		::RPG::GameCore::LogSamplerType _Type_k__BackingField; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPHEEJFKGID_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LogSamplerType get_Type()
		{
			return ((::RPG::GameCore::LogSamplerType(*)(::PVOID))((::PBYTE)hIl2Cpp + KPHEEJFKGID_GET_TYPE_OFFSET))(this);
		}

		::System::Void JAILHGGFLDH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPHEEJFKGID_JAILHGGFLDH_OFFSET))(this);
		}

		::System::Void FPKLDCGAJGP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPHEEJFKGID_FPKLDCGAJGP_OFFSET))(this);
		}

		::System::Void ELEPDOMDAGA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPHEEJFKGID_ELEPDOMDAGA_OFFSET))(this);
		}

	};
