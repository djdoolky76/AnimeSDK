#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueTournMode.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class IRogueTournBuildRefDataItem; }
namespace System { class Exception; }

#define OHCMEPOMNOO_CHLLIFANPHB_OFFSET UNITYSDK_OFFSET(0xBE59EA0)
#define OHCMEPOMNOO_CLEAR_OFFSET UNITYSDK_OFFSET(0xBE58250)
#define OHCMEPOMNOO_CTOR_OFFSET UNITYSDK_OFFSET(0xBE5AA20)
#define OHCMEPOMNOO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBE582A0)
#define OHCMEPOMNOO_DJMAKDCNPDA_OFFSET UNITYSDK_OFFSET(0xBE582F0)
#define OHCMEPOMNOO_EFPFOMHCBAD_OFFSET UNITYSDK_OFFSET(0xBE583C0)
#define OHCMEPOMNOO_FENJPHODMLN_OFFSET UNITYSDK_OFFSET(0xBE58200)

inline static constexpr unsigned int OHCMEPOMNOO_TypeDefinitionIndex = 67547;

	class OHCMEPOMNOO : public ::System::Object
	{
	public:
		::RPG::GameCore::RogueTournMode OAOHOIOCPAE; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHCMEPOMNOO_CTOR_OFFSET))(this);
		}

		::System::Void FENJPHODMLN(::RPG::GameCore::RogueTournMode a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueTournMode))((::PBYTE)hIl2Cpp + OHCMEPOMNOO_FENJPHODMLN_OFFSET))(this, a1);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHCMEPOMNOO_CLEAR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHCMEPOMNOO_DISPOSE_OFFSET))(this);
		}

		::System::Boolean DJMAKDCNPDA(::RPG::Client::IRogueTournBuildRefDataItem* a1, ::System::Exception* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IRogueTournBuildRefDataItem*, ::System::Exception*))((::PBYTE)hIl2Cpp + OHCMEPOMNOO_DJMAKDCNPDA_OFFSET))(this, a1, a2);
		}

		::System::Void EFPFOMHCBAD(::RPG::Client::IRogueTournBuildRefDataItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IRogueTournBuildRefDataItem*))((::PBYTE)hIl2Cpp + OHCMEPOMNOO_EFPFOMHCBAD_OFFSET))(this, a1);
		}

		::System::Void CHLLIFANPHB(::RPG::Client::IRogueTournBuildRefDataItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IRogueTournBuildRefDataItem*))((::PBYTE)hIl2Cpp + OHCMEPOMNOO_CHLLIFANPHB_OFFSET))(this, a1);
		}

	};
