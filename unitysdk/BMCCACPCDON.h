#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/AHHNGJGLOKA.h"
class GIDHOABFFFP;
class ICONDBACCHJ;
class KNOOGHJPPBL;
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client::FateRin::Logging { class ILogger; }
namespace RPG::Client::FateRin::Logging { class ILoggerFactory; }

#define BMCCACPCDON_AFBGILALDLD_OFFSET UNITYSDK_OFFSET(0xBA86CA0)
#define BMCCACPCDON_CTOR_OFFSET UNITYSDK_OFFSET(0xBA86B10)
#define BMCCACPCDON_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBA87050)
#define BMCCACPCDON_EXPORTPROFILE_OFFSET UNITYSDK_OFFSET(0xBA86F10)
#define BMCCACPCDON_GET_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0xBA86B50)
#define BMCCACPCDON_GET_VERSION_OFFSET UNITYSDK_OFFSET(0xBA87090)

inline static constexpr unsigned int BMCCACPCDON_TypeDefinitionIndex = 81225;

	class BMCCACPCDON : public ::System::Object
	{
	public:
		::RPG::Client::FateRin::Logging::ILogger* JKCNFDEAMDJ; // 0x10
		::ICONDBACCHJ* LIIFJAEMFDP; // 0x18
		::KNOOGHJPPBL* CKHDGEHELHN; // 0x20
		::System::UInt32 OFEEMOCGHCA; // 0x28
		::System::UInt32 EOLDMPDDFEB; // 0x2C
		::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2, ::KNOOGHJPPBL* a3, ::ICONDBACCHJ* a4, ::RPG::Client::FateRin::Logging::ILoggerFactory* a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::KNOOGHJPPBL*, ::ICONDBACCHJ*, ::RPG::Client::FateRin::Logging::ILoggerFactory*))((::PBYTE)hIl2Cpp + BMCCACPCDON_CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::AHHNGJGLOKA get_Identifier()
		{
			return ((::AHHNGJGLOKA(*)(::PVOID))((::PBYTE)hIl2Cpp + BMCCACPCDON_GET_IDENTIFIER_OFFSET))(this);
		}

		::System::Void ExportProfile(::GIDHOABFFFP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GIDHOABFFFP*))((::PBYTE)hIl2Cpp + BMCCACPCDON_EXPORTPROFILE_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMCCACPCDON_DISPOSE_OFFSET))(this);
		}

		::System::UInt32 get_Version()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BMCCACPCDON_GET_VERSION_OFFSET))(this);
		}

		::RPG::AvatarSystem::IAvatar* AFBGILALDLD()
		{
			return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID))((::PBYTE)hIl2Cpp + BMCCACPCDON_AFBGILALDLD_OFFSET))(this);
		}

	};
