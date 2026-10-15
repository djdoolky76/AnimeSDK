#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class GMHCOKHCONB;

#define GMHCOKHCONB_CTOR_OFFSET UNITYSDK_OFFSET(0x1CE68D50)
#define GMHCOKHCONB_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CE68D60)
#define GMHCOKHCONB_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CE68C90)

inline static constexpr unsigned int GMHCOKHCONB_TypeDefinitionIndex = 19936;

	class GMHCOKHCONB : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMHCOKHCONB_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::GMHCOKHCONB* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::GMHCOKHCONB*))((::PBYTE)hIl2Cpp + GMHCOKHCONB_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::GMHCOKHCONB* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::GMHCOKHCONB*))((::PBYTE)hIl2Cpp + GMHCOKHCONB_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
