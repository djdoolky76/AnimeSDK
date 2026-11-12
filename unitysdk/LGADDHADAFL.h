#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class LGADDHADAFL;

#define LGADDHADAFL_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2E4130)
#define LGADDHADAFL_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E2E4140)
#define LGADDHADAFL_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E2E4100)

inline static constexpr unsigned int LGADDHADAFL_TypeDefinitionIndex = 21901;

	class LGADDHADAFL : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Single IEOMNELGIHE; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGADDHADAFL_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::LGADDHADAFL* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::LGADDHADAFL*))((::PBYTE)hIl2Cpp + LGADDHADAFL_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::LGADDHADAFL* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::LGADDHADAFL*))((::PBYTE)hIl2Cpp + LGADDHADAFL_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
