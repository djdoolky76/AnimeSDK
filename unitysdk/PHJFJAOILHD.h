#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class PHJFJAOILHD;

#define PHJFJAOILHD_CTOR_OFFSET UNITYSDK_OFFSET(0x1D2E84E0)
#define PHJFJAOILHD_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D2E84F0)
#define PHJFJAOILHD_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D2E8420)

inline static constexpr unsigned int PHJFJAOILHD_TypeDefinitionIndex = 22616;

	class PHJFJAOILHD : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHJFJAOILHD_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::PHJFJAOILHD* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::PHJFJAOILHD*))((::PBYTE)hIl2Cpp + PHJFJAOILHD_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::PHJFJAOILHD* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::PHJFJAOILHD*))((::PBYTE)hIl2Cpp + PHJFJAOILHD_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
