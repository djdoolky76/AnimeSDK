#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class NPOFNCLHNOH;

#define NPOFNCLHNOH_CTOR_OFFSET UNITYSDK_OFFSET(0x1D218D70)
#define NPOFNCLHNOH_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D218D80)
#define NPOFNCLHNOH_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D218D30)

inline static constexpr unsigned int NPOFNCLHNOH_TypeDefinitionIndex = 10222;

	class NPOFNCLHNOH : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean EHEIJCAOOKO; // 0x18
		::System::Boolean POJIBEBJKKP; // 0x19
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPOFNCLHNOH_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::NPOFNCLHNOH* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::NPOFNCLHNOH*))((::PBYTE)hIl2Cpp + NPOFNCLHNOH_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::NPOFNCLHNOH* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::NPOFNCLHNOH*))((::PBYTE)hIl2Cpp + NPOFNCLHNOH_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
