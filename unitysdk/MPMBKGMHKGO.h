#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class MPMBKGMHKGO;

#define MPMBKGMHKGO_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3F5720)
#define MPMBKGMHKGO_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E3F5730)
#define MPMBKGMHKGO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E3F5660)

inline static constexpr unsigned int MPMBKGMHKGO_TypeDefinitionIndex = 21491;

	class MPMBKGMHKGO : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPMBKGMHKGO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::MPMBKGMHKGO* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::MPMBKGMHKGO*))((::PBYTE)hIl2Cpp + MPMBKGMHKGO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::MPMBKGMHKGO* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::MPMBKGMHKGO*))((::PBYTE)hIl2Cpp + MPMBKGMHKGO_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
