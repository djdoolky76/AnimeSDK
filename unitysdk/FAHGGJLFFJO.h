#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"
class FAHGGJLFFJO;
class FCOEMCEDLNL;

#define FAHGGJLFFJO_CTOR_OFFSET UNITYSDK_OFFSET(0x1CDC49F0)
#define FAHGGJLFFJO_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CDC4A00)
#define FAHGGJLFFJO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CDC49B0)

inline static constexpr unsigned int FAHGGJLFFJO_TypeDefinitionIndex = 24071;

	class FAHGGJLFFJO : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::System::Boolean JPHFDCIAAGM; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAHGGJLFFJO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::FAHGGJLFFJO* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::FAHGGJLFFJO*))((::PBYTE)hIl2Cpp + FAHGGJLFFJO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::FAHGGJLFFJO* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::FAHGGJLFFJO*))((::PBYTE)hIl2Cpp + FAHGGJLFFJO_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
