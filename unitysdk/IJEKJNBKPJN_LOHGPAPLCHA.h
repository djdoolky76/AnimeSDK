#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::Client { class MonoEffect; }

#define IJEKJNBKPJN_LOHGPAPLCHA_CTOR_OFFSET UNITYSDK_OFFSET(0x2E7CC30)
#define IJEKJNBKPJN_LOHGPAPLCHA_HBFKMECBOND_OFFSET UNITYSDK_OFFSET(0x16465E90)
#define IJEKJNBKPJN_LOHGPAPLCHA_JGIAAGKKOAN_OFFSET UNITYSDK_OFFSET(0x16465E10)
#define IJEKJNBKPJN_LOHGPAPLCHA_NIOPOKCOKKB_OFFSET UNITYSDK_OFFSET(0x2E81E00)

inline static constexpr unsigned int IJEKJNBKPJN_LOHGPAPLCHA_TypeDefinitionIndex = 57145;

	struct alignas(8) IJEKJNBKPJN_LOHGPAPLCHA
	{
		::System::UInt32 IGCDCFGJMCL; // 0x10
		::System::Byte _padding0[0x4];
		::RPG::Client::MonoEffect* LBNBPMIFDHI; // 0x18
		::System::Void _ctor(::RPG::Client::MonoEffect* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*))((::PBYTE)hIl2Cpp + IJEKJNBKPJN_LOHGPAPLCHA_CTOR_OFFSET))(this, a1);
		}

		::RPG::Client::MonoEffect* NIOPOKCOKKB()
		{
			return ((::RPG::Client::MonoEffect*(*)(::PVOID))((::PBYTE)hIl2Cpp + IJEKJNBKPJN_LOHGPAPLCHA_NIOPOKCOKKB_OFFSET))(this);
		}

		/*
		static ::System::Boolean JGIAAGKKOAN(::IJEKJNBKPJN_LOHGPAPLCHA a1)
		{
			return ((::System::Boolean(*)(::IJEKJNBKPJN_LOHGPAPLCHA))((::PBYTE)hIl2Cpp + IJEKJNBKPJN_LOHGPAPLCHA_JGIAAGKKOAN_OFFSET))(a1);
		}
		*/

		/*
		static ::System::Boolean HBFKMECBOND(::IJEKJNBKPJN_LOHGPAPLCHA a1)
		{
			return ((::System::Boolean(*)(::IJEKJNBKPJN_LOHGPAPLCHA))((::PBYTE)hIl2Cpp + IJEKJNBKPJN_LOHGPAPLCHA_HBFKMECBOND_OFFSET))(a1);
		}
		*/

	};
