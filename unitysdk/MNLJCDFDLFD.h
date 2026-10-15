#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CustomScreenTransferType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class MNLJCDFDLFD;

#define MNLJCDFDLFD_CTOR_OFFSET UNITYSDK_OFFSET(0x1D1D8560)
#define MNLJCDFDLFD_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D1D8570)
#define MNLJCDFDLFD_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D1D8530)

	class MNLJCDFDLFD : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::CustomScreenTransferType GFNDAICDKAF; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNLJCDFDLFD_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::MNLJCDFDLFD* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::MNLJCDFDLFD*))((::PBYTE)hIl2Cpp + MNLJCDFDLFD_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::MNLJCDFDLFD* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::MNLJCDFDLFD*))((::PBYTE)hIl2Cpp + MNLJCDFDLFD_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
