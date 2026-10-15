#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class MGLNOOOBBMK;
namespace RPG::GameCore { class DynamicFloat; }

#define MGLNOOOBBMK_CTOR_OFFSET UNITYSDK_OFFSET(0x1D13AD30)
#define MGLNOOOBBMK_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D13AD40)
#define MGLNOOOBBMK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D13AD00)

inline static constexpr unsigned int MGLNOOOBBMK_TypeDefinitionIndex = 23114;

	class MGLNOOOBBMK : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* DKOOHFBFJPL; // 0x18
		::RPG::GameCore::DynamicFloat* NKAACMGNNPK; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGLNOOOBBMK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::MGLNOOOBBMK* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::MGLNOOOBBMK*))((::PBYTE)hIl2Cpp + MGLNOOOBBMK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::MGLNOOOBBMK* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::MGLNOOOBBMK*))((::PBYTE)hIl2Cpp + MGLNOOOBBMK_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
