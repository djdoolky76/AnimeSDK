#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FateRin/Card/FateRinHandbookCardTabType.h"
#include "unitysdk/RPG/GameCore/FateRinHouguOwnerType.h"
#include "unitysdk/System/Object.h"
class BEIJCJFHANG;
class FEIPLKMMIOI;
namespace RPG::Client::FateRin::Card { class IFateRinHandbookCardTabViewModel; }

#define EFONDDJNOEA_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x13A5EF80)
#define EFONDDJNOEA_CTOR_OFFSET UNITYSDK_OFFSET(0x13A5EED0)

	class EFONDDJNOEA : public ::System::Object
	{
	public:
		::BEIJCJFHANG* LBNAGLIGKIO; // 0x10
		::FEIPLKMMIOI* DEEMJACOGII; // 0x18
		::System::Void _ctor(::BEIJCJFHANG* a1, ::FEIPLKMMIOI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::BEIJCJFHANG*, ::FEIPLKMMIOI*))((::PBYTE)hIl2Cpp + EFONDDJNOEA_CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::Client::FateRin::Card::IFateRinHandbookCardTabViewModel* BPLPBPMEODA(::RPG::Client::FateRin::Card::FateRinHandbookCardTabType a1, ::RPG::GameCore::FateRinHouguOwnerType a2)
		{
			return ((::RPG::Client::FateRin::Card::IFateRinHandbookCardTabViewModel*(*)(::PVOID, ::RPG::Client::FateRin::Card::FateRinHandbookCardTabType, ::RPG::GameCore::FateRinHouguOwnerType))((::PBYTE)hIl2Cpp + EFONDDJNOEA_BPLPBPMEODA_OFFSET))(this, a1, a2);
		}

	};
