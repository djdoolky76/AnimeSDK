#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/WaitSecond.h"
class FCOEMCEDLNL;
class FEKGOOFCJLC;

#define FEKGOOFCJLC_CTOR_OFFSET UNITYSDK_OFFSET(0x1CDB3F60)
#define FEKGOOFCJLC_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CDB3FD0)
#define FEKGOOFCJLC_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CDB3ED0)

inline static constexpr unsigned int FEKGOOFCJLC_TypeDefinitionIndex = 21490;

	class FEKGOOFCJLC : public ::RPG::GameCore::WaitSecond
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEKGOOFCJLC_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::FEKGOOFCJLC* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::FEKGOOFCJLC*))((::PBYTE)hIl2Cpp + FEKGOOFCJLC_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::FEKGOOFCJLC* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::FEKGOOFCJLC*))((::PBYTE)hIl2Cpp + FEKGOOFCJLC_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
