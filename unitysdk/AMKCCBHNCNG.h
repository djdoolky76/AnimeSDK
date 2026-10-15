#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateRinHouguOwnerType.h"
#include "unitysdk/System/Object.h"
class AMKCCBHNCNG;
class FCOEMCEDLNL;

#define AMKCCBHNCNG_CTOR_OFFSET UNITYSDK_OFFSET(0x1CCB2380)
#define AMKCCBHNCNG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CCB2250)

inline static constexpr unsigned int AMKCCBHNCNG_TypeDefinitionIndex = 11553;

	class AMKCCBHNCNG : public ::System::Object
	{
	public:
		::System::UInt32 KFFNBKGCCKO; // 0x10
		::RPG::GameCore::FateRinHouguOwnerType PHFMCACHFIJ; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMKCCBHNCNG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::AMKCCBHNCNG* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::AMKCCBHNCNG*))((::PBYTE)hIl2Cpp + AMKCCBHNCNG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
