#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ElationPointUIType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class OHPBLENCFAK;

#define OHPBLENCFAK_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9FA060)
#define OHPBLENCFAK_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E9FA070)
#define OHPBLENCFAK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E9FA030)

inline static constexpr unsigned int OHPBLENCFAK_TypeDefinitionIndex = 23044;

	class OHPBLENCFAK : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::ElationPointUIType GMPGDEINODK; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHPBLENCFAK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::OHPBLENCFAK* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::OHPBLENCFAK*))((::PBYTE)hIl2Cpp + OHPBLENCFAK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::OHPBLENCFAK* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::OHPBLENCFAK*))((::PBYTE)hIl2Cpp + OHPBLENCFAK_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
