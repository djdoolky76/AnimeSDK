#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::Client { class MonoEffect; }

#define GNHOCJLBCEB_IJEOCDIFFME_CTOR_OFFSET UNITYSDK_OFFSET(0x2E7CC30)
#define GNHOCJLBCEB_IJEOCDIFFME_HBFKMECBOND_OFFSET UNITYSDK_OFFSET(0x15B10F00)
#define GNHOCJLBCEB_IJEOCDIFFME_JGIAAGKKOAN_OFFSET UNITYSDK_OFFSET(0x15B0FBD0)
#define GNHOCJLBCEB_IJEOCDIFFME_NIOPOKCOKKB_OFFSET UNITYSDK_OFFSET(0x2E7CC20)

inline static constexpr unsigned int GNHOCJLBCEB_IJEOCDIFFME_TypeDefinitionIndex = 57342;

	struct alignas(8) GNHOCJLBCEB_IJEOCDIFFME
	{
		::System::UInt32 IGCDCFGJMCL; // 0x10
		::System::Byte _padding0[0x4];
		::RPG::Client::MonoEffect* LBNBPMIFDHI; // 0x18
		::System::Void _ctor(::RPG::Client::MonoEffect* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*))((::PBYTE)hIl2Cpp + GNHOCJLBCEB_IJEOCDIFFME_CTOR_OFFSET))(this, a1);
		}

		::RPG::Client::MonoEffect* NIOPOKCOKKB()
		{
			return ((::RPG::Client::MonoEffect*(*)(::PVOID))((::PBYTE)hIl2Cpp + GNHOCJLBCEB_IJEOCDIFFME_NIOPOKCOKKB_OFFSET))(this);
		}

		/*
		static ::System::Boolean JGIAAGKKOAN(::GNHOCJLBCEB_IJEOCDIFFME a1)
		{
			return ((::System::Boolean(*)(::GNHOCJLBCEB_IJEOCDIFFME))((::PBYTE)hIl2Cpp + GNHOCJLBCEB_IJEOCDIFFME_JGIAAGKKOAN_OFFSET))(a1);
		}
		*/

		/*
		static ::System::Boolean HBFKMECBOND(::GNHOCJLBCEB_IJEOCDIFFME a1)
		{
			return ((::System::Boolean(*)(::GNHOCJLBCEB_IJEOCDIFFME))((::PBYTE)hIl2Cpp + GNHOCJLBCEB_IJEOCDIFFME_HBFKMECBOND_OFFSET))(a1);
		}
		*/

	};
