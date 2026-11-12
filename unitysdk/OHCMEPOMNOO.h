#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueTournMode.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class IRogueTournBuildRefDataItem; }
namespace System { class Exception; }

#define OHCMEPOMNOO_CHLLIFANPHB_OFFSET UNITYSDK_OFFSET(0xC71B650)
#define OHCMEPOMNOO_CLEAR_OFFSET UNITYSDK_OFFSET(0xC719A00)
#define OHCMEPOMNOO_CTOR_OFFSET UNITYSDK_OFFSET(0xC71C1D0)
#define OHCMEPOMNOO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC719A50)
#define OHCMEPOMNOO_DJMAKDCNPDA_OFFSET UNITYSDK_OFFSET(0xC719AA0)
#define OHCMEPOMNOO_EFPFOMHCBAD_OFFSET UNITYSDK_OFFSET(0xC719B70)
#define OHCMEPOMNOO_FENJPHODMLN_OFFSET UNITYSDK_OFFSET(0xC7199B0)

inline static constexpr unsigned int OHCMEPOMNOO_TypeDefinitionIndex = 69491;

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
