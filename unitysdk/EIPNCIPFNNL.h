#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class EIPNCIPFNNL;
class FCOEMCEDLNL;

#define EIPNCIPFNNL_CTOR_OFFSET UNITYSDK_OFFSET(0x1F117D10)
#define EIPNCIPFNNL_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1F117D20)
#define EIPNCIPFNNL_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1F117C50)

inline static constexpr unsigned int EIPNCIPFNNL_TypeDefinitionIndex = 21498;

	class EIPNCIPFNNL : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIPNCIPFNNL_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::EIPNCIPFNNL* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::EIPNCIPFNNL*))((::PBYTE)hIl2Cpp + EIPNCIPFNNL_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::EIPNCIPFNNL* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::EIPNCIPFNNL*))((::PBYTE)hIl2Cpp + EIPNCIPFNNL_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
