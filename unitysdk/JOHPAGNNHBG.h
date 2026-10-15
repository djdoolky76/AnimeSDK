#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GDEJLBOEHMG.h"
#include "unitysdk/RPG/Client/AdvSkillAfterPacketActionType.h"

#define JOHPAGNNHBG_CLEAR_OFFSET UNITYSDK_OFFSET(0xB29A0A0)
#define JOHPAGNNHBG_CTOR_OFFSET UNITYSDK_OFFSET(0xB29A160)
#define JOHPAGNNHBG_NMOCNLLMIDH_OFFSET UNITYSDK_OFFSET(0xB29A120)

inline static constexpr unsigned int JOHPAGNNHBG_TypeDefinitionIndex = 62021;

	class JOHPAGNNHBG : public ::GDEJLBOEHMG
	{
	public:
		::System::UInt32 BEHIIKJBFAI; // 0x18
		::System::UInt32 DDBPHBGIDDO; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOHPAGNNHBG_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOHPAGNNHBG_CLEAR_OFFSET))(this);
		}

		::RPG::Client::AdvSkillAfterPacketActionType NMOCNLLMIDH()
		{
			return ((::RPG::Client::AdvSkillAfterPacketActionType(*)(::PVOID))((::PBYTE)hIl2Cpp + JOHPAGNNHBG_NMOCNLLMIDH_OFFSET))(this);
		}

	};
