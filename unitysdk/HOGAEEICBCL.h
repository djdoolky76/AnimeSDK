#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DNFDBKCPBNM.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/AHHNGJGLOKA.h"
class GIDHOABFFFP;
class ICONDBACCHJ;
class KNOOGHJPPBL;
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client::FateRin::Logging { class ILogger; }
namespace RPG::Client::FateRin::Logging { class ILoggerFactory; }

#define HOGAEEICBCL_AFBGILALDLD_OFFSET UNITYSDK_OFFSET(0x15DA7270)
#define HOGAEEICBCL_CTOR_OFFSET UNITYSDK_OFFSET(0x15DA70E0)
#define HOGAEEICBCL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15DA7620)
#define HOGAEEICBCL_EXPORTPROFILE_OFFSET UNITYSDK_OFFSET(0x15DA74E0)
#define HOGAEEICBCL_GET_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0x15DA7120)
#define HOGAEEICBCL_GET_VERSION_OFFSET UNITYSDK_OFFSET(0x15DA7660)

inline static constexpr unsigned int HOGAEEICBCL_TypeDefinitionIndex = 81223;

	class HOGAEEICBCL : public ::System::Object
	{
	public:
		::ICONDBACCHJ* LIIFJAEMFDP; // 0x10
		::RPG::Client::FateRin::Logging::ILogger* JKCNFDEAMDJ; // 0x18
		::KNOOGHJPPBL* CKHDGEHELHN; // 0x20
		::System::UInt32 EOLDMPDDFEB; // 0x28
		::DNFDBKCPBNM CJEMKBMCMBI; // 0x2C
		::System::Void _ctor(::DNFDBKCPBNM a1, ::System::UInt32 a2, ::KNOOGHJPPBL* a3, ::ICONDBACCHJ* a4, ::RPG::Client::FateRin::Logging::ILoggerFactory* a5)
		{
			return ((::System::Void(*)(::PVOID, ::DNFDBKCPBNM, ::System::UInt32, ::KNOOGHJPPBL*, ::ICONDBACCHJ*, ::RPG::Client::FateRin::Logging::ILoggerFactory*))((::PBYTE)hIl2Cpp + HOGAEEICBCL_CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::AHHNGJGLOKA get_Identifier()
		{
			return ((::AHHNGJGLOKA(*)(::PVOID))((::PBYTE)hIl2Cpp + HOGAEEICBCL_GET_IDENTIFIER_OFFSET))(this);
		}

		::System::Void ExportProfile(::GIDHOABFFFP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GIDHOABFFFP*))((::PBYTE)hIl2Cpp + HOGAEEICBCL_EXPORTPROFILE_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOGAEEICBCL_DISPOSE_OFFSET))(this);
		}

		::System::UInt32 get_Version()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HOGAEEICBCL_GET_VERSION_OFFSET))(this);
		}

		::RPG::AvatarSystem::IAvatar* AFBGILALDLD()
		{
			return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOGAEEICBCL_AFBGILALDLD_OFFSET))(this);
		}

	};
