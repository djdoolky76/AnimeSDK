#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AIOKAIODPOL.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class RogueTournTitanBless; }
namespace System { class Object; }

#define HJHEFPKCMAE_CTOR_OFFSET UNITYSDK_OFFSET(0x15D14FF0)
#define HJHEFPKCMAE_IJOONKNIDKI_OFFSET UNITYSDK_OFFSET(0x15D15000)
#define HJHEFPKCMAE_PPPGGHJEIKJ_OFFSET UNITYSDK_OFFSET(0x15D15110)

inline static constexpr unsigned int HJHEFPKCMAE_TypeDefinitionIndex = 67258;

	class HJHEFPKCMAE : public ::System::Object
	{
	public:
		::RPG::Client::RogueTournTitanBless* NGFAHJJJFOC; // 0x10
		::AIOKAIODPOL LNPLJMDCPEP; // 0x18
		::System::Void _ctor(::AIOKAIODPOL a1)
		{
			return ((::System::Void(*)(::PVOID, ::AIOKAIODPOL))((::PBYTE)hIl2Cpp + HJHEFPKCMAE_CTOR_OFFSET))(this, a1);
		}

		::System::Object* IJOONKNIDKI()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + HJHEFPKCMAE_IJOONKNIDKI_OFFSET))(this);
		}

		::RPG::Client::RogueTournTitanBless* PPPGGHJEIKJ()
		{
			return ((::RPG::Client::RogueTournTitanBless*(*)(::PVOID))((::PBYTE)hIl2Cpp + HJHEFPKCMAE_PPPGGHJEIKJ_OFFSET))(this);
		}

	};
