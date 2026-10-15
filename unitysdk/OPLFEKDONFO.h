#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class OPLFEKDONFO;

#define OPLFEKDONFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D2BD560)
#define OPLFEKDONFO_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D2BD570)
#define OPLFEKDONFO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D2BD530)

	class OPLFEKDONFO : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 PFDHNIJBGKO; // 0x18
		::System::UInt32 PBOFFICPNBC; // 0x1C
		::System::Boolean KBALHCLKIIJ; // 0x20
		::System::Byte _padding0[0x3];
		::System::UInt32 KGAPFBKGFIO; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPLFEKDONFO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::OPLFEKDONFO* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::OPLFEKDONFO*))((::PBYTE)hIl2Cpp + OPLFEKDONFO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::OPLFEKDONFO* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::OPLFEKDONFO*))((::PBYTE)hIl2Cpp + OPLFEKDONFO_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
