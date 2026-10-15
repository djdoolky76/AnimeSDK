#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class FMJLHIPCIPJ;

#define FMJLHIPCIPJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1CDDD4B0)
#define FMJLHIPCIPJ_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CDDD4C0)
#define FMJLHIPCIPJ_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CDDD3F0)

inline static constexpr unsigned int FMJLHIPCIPJ_TypeDefinitionIndex = 19891;

	class FMJLHIPCIPJ : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMJLHIPCIPJ_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::FMJLHIPCIPJ* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::FMJLHIPCIPJ*))((::PBYTE)hIl2Cpp + FMJLHIPCIPJ_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::FMJLHIPCIPJ* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::FMJLHIPCIPJ*))((::PBYTE)hIl2Cpp + FMJLHIPCIPJ_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
