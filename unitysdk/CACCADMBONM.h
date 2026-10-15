#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class CACCADMBONM;
class FCOEMCEDLNL;

#define CACCADMBONM_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9FE0B0)
#define CACCADMBONM_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9FE0C0)
#define CACCADMBONM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9FDFF0)

inline static constexpr unsigned int CACCADMBONM_TypeDefinitionIndex = 10250;

	class CACCADMBONM : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CACCADMBONM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::CACCADMBONM* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::CACCADMBONM*))((::PBYTE)hIl2Cpp + CACCADMBONM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::CACCADMBONM* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::CACCADMBONM*))((::PBYTE)hIl2Cpp + CACCADMBONM_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
