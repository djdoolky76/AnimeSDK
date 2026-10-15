#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class JNEDMEACFJF;

#define JNEDMEACFJF_CTOR_OFFSET UNITYSDK_OFFSET(0x1D04FD30)
#define JNEDMEACFJF_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D04FD40)
#define JNEDMEACFJF_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D04FD00)

	class JNEDMEACFJF : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 PHFMCACHFIJ; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNEDMEACFJF_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::JNEDMEACFJF* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::JNEDMEACFJF*))((::PBYTE)hIl2Cpp + JNEDMEACFJF_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::JNEDMEACFJF* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::JNEDMEACFJF*))((::PBYTE)hIl2Cpp + JNEDMEACFJF_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
