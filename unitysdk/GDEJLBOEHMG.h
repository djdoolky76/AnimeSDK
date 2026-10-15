#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AdvSkillAfterPacketActionType.h"
#include "unitysdk/System/Object.h"

#define GDEJLBOEHMG_CLEAR_OFFSET UNITYSDK_OFFSET(0x1598FCE0)
#define GDEJLBOEHMG_CTOR_OFFSET UNITYSDK_OFFSET(0x1598FCD0)
#define GDEJLBOEHMG_NMOCNLLMIDH_OFFSET UNITYSDK_OFFSET(0x1598FD30)

inline static constexpr unsigned int GDEJLBOEHMG_TypeDefinitionIndex = 62020;

	class GDEJLBOEHMG : public ::System::Object
	{
	public:
		::System::UInt32 GAJHJOBICAL; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDEJLBOEHMG_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDEJLBOEHMG_CLEAR_OFFSET))(this);
		}

		::RPG::Client::AdvSkillAfterPacketActionType NMOCNLLMIDH()
		{
			return ((::RPG::Client::AdvSkillAfterPacketActionType(*)(::PVOID))((::PBYTE)hIl2Cpp + GDEJLBOEHMG_NMOCNLLMIDH_OFFSET))(this);
		}

	};
