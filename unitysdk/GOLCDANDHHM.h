#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class GOLCDANDHHM;

#define GOLCDANDHHM_CTOR_OFFSET UNITYSDK_OFFSET(0x1CE74F40)
#define GOLCDANDHHM_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CE74F50)
#define GOLCDANDHHM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CE74F10)

	class GOLCDANDHHM : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 EKHAOIGPDOE; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOLCDANDHHM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::GOLCDANDHHM* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::GOLCDANDHHM*))((::PBYTE)hIl2Cpp + GOLCDANDHHM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::GOLCDANDHHM* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::GOLCDANDHHM*))((::PBYTE)hIl2Cpp + GOLCDANDHHM_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
