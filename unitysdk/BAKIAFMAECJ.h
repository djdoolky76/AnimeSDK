#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FEBNPKEKGFM.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class BAKIAFMAECJ;
class FCOEMCEDLNL;

#define BAKIAFMAECJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1CCF1A40)
#define BAKIAFMAECJ_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CCF1A50)
#define BAKIAFMAECJ_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CCF1A10)

inline static constexpr unsigned int BAKIAFMAECJ_TypeDefinitionIndex = 19917;

	class BAKIAFMAECJ : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::StringHash BBBAMBGCGPL; // 0x18
		::FEBNPKEKGFM MCLLALGABAB; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAKIAFMAECJ_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::BAKIAFMAECJ* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::BAKIAFMAECJ*))((::PBYTE)hIl2Cpp + BAKIAFMAECJ_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::BAKIAFMAECJ* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::BAKIAFMAECJ*))((::PBYTE)hIl2Cpp + BAKIAFMAECJ_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
