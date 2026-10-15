#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TrainPartyStatType.h"
#include "unitysdk/System/Object.h"
class ADPCCHJNMFD;
class FCOEMCEDLNL;

#define ADPCCHJNMFD_CTOR_OFFSET UNITYSDK_OFFSET(0x1CC7F110)
#define ADPCCHJNMFD_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CC7EFE0)

inline static constexpr unsigned int ADPCCHJNMFD_TypeDefinitionIndex = 15315;

	class ADPCCHJNMFD : public ::System::Object
	{
	public:
		::System::UInt32 GPIGNHPKFFB; // 0x10
		::RPG::GameCore::TrainPartyStatType LLCOEPJFGPE; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADPCCHJNMFD_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::ADPCCHJNMFD* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::ADPCCHJNMFD*))((::PBYTE)hIl2Cpp + ADPCCHJNMFD_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
