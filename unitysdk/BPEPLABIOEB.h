#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/RogueMiracleIdentifier.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class IRogueMiracle; }
namespace System { class Object; }

#define BPEPLABIOEB_CTOR_OFFSET UNITYSDK_OFFSET(0xC1A41F0)
#define BPEPLABIOEB_IJOONKNIDKI_OFFSET UNITYSDK_OFFSET(0xC1A4200)
#define BPEPLABIOEB_MNJBPJFMLJD_OFFSET UNITYSDK_OFFSET(0xC1A4380)

inline static constexpr unsigned int BPEPLABIOEB_TypeDefinitionIndex = 67261;

	class BPEPLABIOEB : public ::System::Object
	{
	public:
		::RPG::Client::IRogueMiracle* IOOJDBPIGPB; // 0x10
		::RPG::Client::RogueMiracleIdentifier LNPLJMDCPEP; // 0x18
		::System::Void _ctor(::RPG::Client::RogueMiracleIdentifier a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueMiracleIdentifier))((::PBYTE)hIl2Cpp + BPEPLABIOEB_CTOR_OFFSET))(this, a1);
		}

		::System::Object* IJOONKNIDKI()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + BPEPLABIOEB_IJOONKNIDKI_OFFSET))(this);
		}

		::RPG::Client::IRogueMiracle* MNJBPJFMLJD()
		{
			return ((::RPG::Client::IRogueMiracle*(*)(::PVOID))((::PBYTE)hIl2Cpp + BPEPLABIOEB_MNJBPJFMLJD_OFFSET))(this);
		}

	};
