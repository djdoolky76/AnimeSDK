#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AHEFENOJHLH;
namespace RPG::Client::FateRin::Logging { class ILogger; }
namespace RPG::Client::FateRin::Logging { class ILoggerFactory; }
namespace System { class Type; }

#define GEGDGJHCPEK_CTOR_OFFSET UNITYSDK_OFFSET(0x159D4D80)
#define GEGDGJHCPEK_DHKAAJOEJHB_OFFSET UNITYSDK_OFFSET(0x159D4E00)
#define GEGDGJHCPEK_FNAAJGAHIAI_OFFSET UNITYSDK_OFFSET(0x159D4E60)
#define GEGDGJHCPEK_IHPAKOMCHGP_OFFSET UNITYSDK_OFFSET(0x159D4EB0)

inline static constexpr unsigned int GEGDGJHCPEK_TypeDefinitionIndex = 81211;

	class GEGDGJHCPEK : public ::System::Object
	{
	public:
		::RPG::Client::FateRin::Logging::ILogger* JKCNFDEAMDJ; // 0x10
		::System::Void _ctor(::RPG::Client::FateRin::Logging::ILoggerFactory* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::Logging::ILoggerFactory*))((::PBYTE)hIl2Cpp + GEGDGJHCPEK_CTOR_OFFSET))(this, a1);
		}

		::System::Type* DHKAAJOEJHB()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + GEGDGJHCPEK_DHKAAJOEJHB_OFFSET))(this);
		}

		::Il2CppArray<::System::Type*>* FNAAJGAHIAI()
		{
			return ((::Il2CppArray<::System::Type*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GEGDGJHCPEK_FNAAJGAHIAI_OFFSET))(this);
		}

		::System::Void IHPAKOMCHGP(::AHEFENOJHLH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AHEFENOJHLH*))((::PBYTE)hIl2Cpp + GEGDGJHCPEK_IHPAKOMCHGP_OFFSET))(this, a1);
		}

	};
