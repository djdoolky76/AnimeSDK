#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AJHEFPNNKKC;
class ICONDBACCHJ;
class KNOOGHJPPBL;
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client::FateRin::Logging { class ILoggerFactory; }

#define LFACJHHPEEF_CTOR_OFFSET UNITYSDK_OFFSET(0xB65E5D0)
#define LFACJHHPEEF_DGJLPOLHKLN_OFFSET UNITYSDK_OFFSET(0xB65E5F0)
#define LFACJHHPEEF_DJPOOEOFGFF_OFFSET UNITYSDK_OFFSET(0xB65E8B0)
#define LFACJHHPEEF_FOIEPBGNABP_OFFSET UNITYSDK_OFFSET(0xB65E830)
#define LFACJHHPEEF_HKKPPEKIIEJ_OFFSET UNITYSDK_OFFSET(0xB65E7B0)

	class LFACJHHPEEF : public ::System::Object
	{
	public:
		::ICONDBACCHJ* LIIFJAEMFDP; // 0x10
		::KNOOGHJPPBL* CKHDGEHELHN; // 0x18
		::RPG::Client::FateRin::Logging::ILoggerFactory* DADFMAKONCJ; // 0x20
		::AJHEFPNNKKC* MOHKEEEHFOB; // 0x28
		::System::Void _ctor(::KNOOGHJPPBL* a1, ::ICONDBACCHJ* a2, ::AJHEFPNNKKC* a3, ::RPG::Client::FateRin::Logging::ILoggerFactory* a4)
		{
			return ((::System::Void(*)(::PVOID, ::KNOOGHJPPBL*, ::ICONDBACCHJ*, ::AJHEFPNNKKC*, ::RPG::Client::FateRin::Logging::ILoggerFactory*))((::PBYTE)hIl2Cpp + LFACJHHPEEF_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::RPG::AvatarSystem::IAvatar* DGJLPOLHKLN(::System::UInt32 a1)
		{
			return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LFACJHHPEEF_DGJLPOLHKLN_OFFSET))(this, a1);
		}

		::RPG::AvatarSystem::IAvatar* DJPOOEOFGFF(::System::UInt32 a1)
		{
			return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LFACJHHPEEF_DJPOOEOFGFF_OFFSET))(this, a1);
		}

		::System::UInt32 HKKPPEKIIEJ(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LFACJHHPEEF_HKKPPEKIIEJ_OFFSET))(this, a1);
		}

		::System::UInt32 FOIEPBGNABP(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LFACJHHPEEF_FOIEPBGNABP_OFFSET))(this, a1);
		}

	};
