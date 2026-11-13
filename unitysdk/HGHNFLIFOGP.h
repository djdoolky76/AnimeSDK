#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class HGHNFLIFOGP;

#define HGHNFLIFOGP_CTOR_OFFSET UNITYSDK_OFFSET(0x1E816540)
#define HGHNFLIFOGP_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E816550)
#define HGHNFLIFOGP_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E816500)

inline static constexpr unsigned int HGHNFLIFOGP_TypeDefinitionIndex = 24016;

	class HGHNFLIFOGP : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean MOKNCFJICIC; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGHNFLIFOGP_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::HGHNFLIFOGP* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::HGHNFLIFOGP*))((::PBYTE)hIl2Cpp + HGHNFLIFOGP_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::HGHNFLIFOGP* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::HGHNFLIFOGP*))((::PBYTE)hIl2Cpp + HGHNFLIFOGP_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
