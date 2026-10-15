#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class ODOJDFGEKFF;

#define ODOJDFGEKFF_CTOR_OFFSET UNITYSDK_OFFSET(0x1D22D770)
#define ODOJDFGEKFF_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D22D780)
#define ODOJDFGEKFF_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D22D6B0)

inline static constexpr unsigned int ODOJDFGEKFF_TypeDefinitionIndex = 21904;

	class ODOJDFGEKFF : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODOJDFGEKFF_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::ODOJDFGEKFF* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::ODOJDFGEKFF*))((::PBYTE)hIl2Cpp + ODOJDFGEKFF_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::ODOJDFGEKFF* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::ODOJDFGEKFF*))((::PBYTE)hIl2Cpp + ODOJDFGEKFF_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
