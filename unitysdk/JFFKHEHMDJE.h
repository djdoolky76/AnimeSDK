#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class JFFKHEHMDJE;

#define JFFKHEHMDJE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D023630)
#define JFFKHEHMDJE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D023640)
#define JFFKHEHMDJE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D023570)

	class JFFKHEHMDJE : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFFKHEHMDJE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::JFFKHEHMDJE* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::JFFKHEHMDJE*))((::PBYTE)hIl2Cpp + JFFKHEHMDJE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::JFFKHEHMDJE* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::JFFKHEHMDJE*))((::PBYTE)hIl2Cpp + JFFKHEHMDJE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
