#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/TRFTwoState.h"
#include "unitysdk/System/Object.h"

#define HNAGCFKIHCG_CTOR_OFFSET UNITYSDK_OFFSET(0x1EFB3300)

inline static constexpr unsigned int HNAGCFKIHCG_TypeDefinitionIndex = 43429;

	class HNAGCFKIHCG : public ::System::Object
	{
	public:
		::System::Boolean GJLIJFBONJG; // 0x10
		::System::Boolean PGGCOLJAACF; // 0x11
		::System::Boolean CAGCHKJHMPD; // 0x12
		::System::Boolean DHNLFCLHGPJ; // 0x13
		::System::UInt32 HFOPMEDKOKL; // 0x14
		::System::UInt32 KCGNEDIAJCO; // 0x18
		::RPG::Client::LittleGame::TRFTwoState FMHBDAOIDED; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNAGCFKIHCG_CTOR_OFFSET))(this);
		}

	};
