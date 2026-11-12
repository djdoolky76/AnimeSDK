#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class ILPFGMCKLMH;

#define ILPFGMCKLMH_CTOR_OFFSET UNITYSDK_OFFSET(0x1E106780)
#define ILPFGMCKLMH_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E106790)
#define ILPFGMCKLMH_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E106750)

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
