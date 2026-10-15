#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateRinHouguOwnerType.h"
#include "unitysdk/System/Object.h"
class FEIPLKMMIOI;
namespace RPG::Client::FateRin::Avatar { class IFateRinAvatarViewModel; }
namespace RPG::Client::FateRin::Logging { class ILogger; }
namespace RPG::Client::FateRin::Logging { class ILoggerFactory; }

#define PCPLDNFFLMF_CTOR_OFFSET UNITYSDK_OFFSET(0xC00B450)
#define PCPLDNFFLMF_OKABKEJCCNN_OFFSET UNITYSDK_OFFSET(0xC00B500)

	class PCPLDNFFLMF : public ::System::Object
	{
	public:
		::RPG::Client::FateRin::Logging::ILogger* JKCNFDEAMDJ; // 0x10
		::FEIPLKMMIOI* DEEMJACOGII; // 0x18
		::System::Void _ctor(::FEIPLKMMIOI* a1, ::RPG::Client::FateRin::Logging::ILoggerFactory* a2)
		{
			return ((::System::Void(*)(::PVOID, ::FEIPLKMMIOI*, ::RPG::Client::FateRin::Logging::ILoggerFactory*))((::PBYTE)hIl2Cpp + PCPLDNFFLMF_CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::Client::FateRin::Avatar::IFateRinAvatarViewModel* OKABKEJCCNN(::RPG::GameCore::FateRinHouguOwnerType a1)
		{
			return ((::RPG::Client::FateRin::Avatar::IFateRinAvatarViewModel*(*)(::PVOID, ::RPG::GameCore::FateRinHouguOwnerType))((::PBYTE)hIl2Cpp + PCPLDNFFLMF_OKABKEJCCNN_OFFSET))(this, a1);
		}

	};
