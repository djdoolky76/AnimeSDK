#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class ILPFGMCKLMH;

#define ILPFGMCKLMH_CTOR_OFFSET UNITYSDK_OFFSET(0xC997EC0)
#define ILPFGMCKLMH_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0xC997ED0)
#define ILPFGMCKLMH_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0xC997E90)

inline static constexpr unsigned int ILPFGMCKLMH_TypeDefinitionIndex = 10317;

	class ILPFGMCKLMH : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::FixPoint MNDFOPKBHKP; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILPFGMCKLMH_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::ILPFGMCKLMH* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::ILPFGMCKLMH*))((::PBYTE)hIl2Cpp + ILPFGMCKLMH_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::ILPFGMCKLMH* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::ILPFGMCKLMH*))((::PBYTE)hIl2Cpp + ILPFGMCKLMH_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
