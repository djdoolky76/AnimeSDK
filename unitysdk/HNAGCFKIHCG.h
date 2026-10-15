#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/TRFTwoState.h"
#include "unitysdk/System/Object.h"

#define HNAGCFKIHCG_CTOR_OFFSET UNITYSDK_OFFSET(0x1CAED0F0)

inline static constexpr unsigned int HNAGCFKIHCG_TypeDefinitionIndex = 42454;

	class HNAGCFKIHCG : public ::System::Object
	{
	public:
		::RPG::Client::LittleGame::TRFTwoState FMHBDAOIDED; // 0x10
		::System::UInt32 HFOPMEDKOKL; // 0x14
		::System::UInt32 KCGNEDIAJCO; // 0x18
		::System::Boolean CAGCHKJHMPD; // 0x1C
		::System::Boolean DHNLFCLHGPJ; // 0x1D
		::System::Boolean PGGCOLJAACF; // 0x1E
		::System::Boolean GJLIJFBONJG; // 0x1F
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNAGCFKIHCG_CTOR_OFFSET))(this);
		}

	};
