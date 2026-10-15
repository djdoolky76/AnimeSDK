#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class MDHFMJOEPDI;

#define MDHFMJOEPDI_CTOR_OFFSET UNITYSDK_OFFSET(0x1D148FF0)
#define MDHFMJOEPDI_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D149000)
#define MDHFMJOEPDI_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D148FC0)

	class MDHFMJOEPDI : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Single EKAALNAOCJL; // 0x18
		::System::Boolean DMKJAJLNEBK; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDHFMJOEPDI_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::MDHFMJOEPDI* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::MDHFMJOEPDI*))((::PBYTE)hIl2Cpp + MDHFMJOEPDI_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::MDHFMJOEPDI* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::MDHFMJOEPDI*))((::PBYTE)hIl2Cpp + MDHFMJOEPDI_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
