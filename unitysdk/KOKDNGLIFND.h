#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueTournMode.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class KOKDNGLIFND;

#define KOKDNGLIFND_CTOR_OFFSET UNITYSDK_OFFSET(0x1D093FA0)
#define KOKDNGLIFND_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D093E30)

inline static constexpr unsigned int KOKDNGLIFND_TypeDefinitionIndex = 14985;

	class KOKDNGLIFND : public ::System::Object
	{
	public:
		::System::UInt32 ADHGMAGMGJE; // 0x10
		::System::UInt32 AAGKEBFHLMC; // 0x14
		::RPG::GameCore::RogueTournMode HILINOJPLGA; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOKDNGLIFND_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::KOKDNGLIFND* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::KOKDNGLIFND*))((::PBYTE)hIl2Cpp + KOKDNGLIFND_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
