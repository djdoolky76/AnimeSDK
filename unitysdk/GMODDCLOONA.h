#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class GMODDCLOONA;

#define GMODDCLOONA_CTOR_OFFSET UNITYSDK_OFFSET(0x1CE3D550)
#define GMODDCLOONA_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CE3D560)
#define GMODDCLOONA_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CE3D490)

inline static constexpr unsigned int GMODDCLOONA_TypeDefinitionIndex = 21156;

	class GMODDCLOONA : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMODDCLOONA_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::GMODDCLOONA* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::GMODDCLOONA*))((::PBYTE)hIl2Cpp + GMODDCLOONA_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::GMODDCLOONA* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::GMODDCLOONA*))((::PBYTE)hIl2Cpp + GMODDCLOONA_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
