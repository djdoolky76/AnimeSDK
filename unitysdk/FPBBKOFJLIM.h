#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/Match3/OpponentRole.h"

#define FPBBKOFJLIM_CFJJINNAACG_OFFSET UNITYSDK_OFFSET(0x3C31C50)
#define FPBBKOFJLIM_CTOR_OFFSET UNITYSDK_OFFSET(0x3C31BD0)
#define FPBBKOFJLIM_JHNGGOAGNBF_OFFSET UNITYSDK_OFFSET(0x3C31D00)
#define FPBBKOFJLIM_KMJDCAGFIAJ_OFFSET UNITYSDK_OFFSET(0x3C31CA0)
#define FPBBKOFJLIM_OKGNLJPFCPC_OFFSET UNITYSDK_OFFSET(0x3C31BF0)

inline static constexpr unsigned int FPBBKOFJLIM_TypeDefinitionIndex = 42272;

	struct alignas(4) FPBBKOFJLIM
	{
		::RPG::Client::LittleGame::Match3::OpponentRole KLBOCCNGGGF; // 0x10
		::RPG::Client::LittleGame::Match3::OpponentRole ADIJMBHBFAG; // 0x14
		::System::UInt32 HCHPPFMICDN; // 0x18
		::System::UInt32 IPJIDOBCFPO; // 0x1C
		::System::Void _ctor(::RPG::Client::LittleGame::Match3::OpponentRole a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::Match3::OpponentRole, ::System::UInt32))((::PBYTE)hIl2Cpp + FPBBKOFJLIM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean OKGNLJPFCPC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FPBBKOFJLIM_OKGNLJPFCPC_OFFSET))(this);
		}

		::System::Boolean CFJJINNAACG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FPBBKOFJLIM_CFJJINNAACG_OFFSET))(this);
		}

		::System::Boolean KMJDCAGFIAJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FPBBKOFJLIM_KMJDCAGFIAJ_OFFSET))(this);
		}

		::System::Boolean JHNGGOAGNBF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FPBBKOFJLIM_JHNGGOAGNBF_OFFSET))(this);
		}

	};
