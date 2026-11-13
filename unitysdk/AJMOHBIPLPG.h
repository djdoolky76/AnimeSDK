#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class AJMOHBIPLPG;
class FCOEMCEDLNL;
namespace RPG::GameCore { class FourRotateVoxelPortalTarget; }

#define AJMOHBIPLPG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E041BA0)
#define AJMOHBIPLPG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E041BB0)
#define AJMOHBIPLPG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E041B70)

inline static constexpr unsigned int AJMOHBIPLPG_TypeDefinitionIndex = 21835;

	class AJMOHBIPLPG : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::FourRotateVoxelPortalTarget* MCLLALGABAB; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJMOHBIPLPG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::AJMOHBIPLPG* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::AJMOHBIPLPG*))((::PBYTE)hIl2Cpp + AJMOHBIPLPG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::AJMOHBIPLPG* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::AJMOHBIPLPG*))((::PBYTE)hIl2Cpp + AJMOHBIPLPG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
