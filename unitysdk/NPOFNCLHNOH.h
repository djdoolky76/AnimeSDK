#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class NPOFNCLHNOH;

#define NPOFNCLHNOH_CTOR_OFFSET UNITYSDK_OFFSET(0x1D246990)
#define NPOFNCLHNOH_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D2469A0)
#define NPOFNCLHNOH_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D246950)

inline static constexpr unsigned int NPOFNCLHNOH_TypeDefinitionIndex = 10222;

	class NPOFNCLHNOH : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean POJIBEBJKKP; // 0x18
		::System::Boolean EHEIJCAOOKO; // 0x19
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
