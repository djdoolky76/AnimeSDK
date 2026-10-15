#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FNIDIOCNBBI.h"
#include "unitysdk/RPG/Client/MatchThreeBoardEnvTag.h"
class MDEIHNCFHLH;
namespace RPG::Client { class MatchThreeBoard; }

#define MDEIHNCFHLH_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xB8A2FD0)
#define MDEIHNCFHLH_CTOR_OFFSET UNITYSDK_OFFSET(0xB8A3150)
#define MDEIHNCFHLH_ONCLEAR_OFFSET UNITYSDK_OFFSET(0xB8A3100)
#define MDEIHNCFHLH_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0xB8A3050)

	class MDEIHNCFHLH : public ::FNIDIOCNBBI
	{
	public:
		::RPG::Client::MatchThreeBoardEnvTag ACLIJDIAIJG; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDEIHNCFHLH_CTOR_OFFSET))(this);
		}

		static ::MDEIHNCFHLH* BPLPBPMEODA(::RPG::Client::MatchThreeBoard* a1)
		{
			return ((::MDEIHNCFHLH*(*)(::RPG::Client::MatchThreeBoard*))((::PBYTE)hIl2Cpp + MDEIHNCFHLH_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDEIHNCFHLH_ONEXECUTE_OFFSET))(this);
		}

		::System::Void OnClear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDEIHNCFHLH_ONCLEAR_OFFSET))(this);
		}

	};
