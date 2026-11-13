#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class LuaUIController; }
namespace RPG::Client::ComicDessert { class ComicDessertLoadingViewModel; }
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Promises { class Promise; }

#define LNDPPEDGDGK_LMAKDHLPAMP_CTOR_OFFSET UNITYSDK_OFFSET(0x1AFE13D0)

inline static constexpr unsigned int LNDPPEDGDGK_LMAKDHLPAMP_TypeDefinitionIndex = 77115;

	class LNDPPEDGDGK_LMAKDHLPAMP : public ::System::Object
	{
	public:
		::RPG::Client::Promises::Promise* IIHHCNIDBKD; // 0x10
		::RPG::Client::ComicDessert::ComicDessertLoadingViewModel* NONBAAINLPB; // 0x18
		::RPG::Client::Promises::IPromise* ACFOPAANMAD; // 0x20
		::RPG::Client::LuaUIController* JIIKAEMELPJ; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNDPPEDGDGK_LMAKDHLPAMP_CTOR_OFFSET))(this);
		}

	};
