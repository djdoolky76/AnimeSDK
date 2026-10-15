#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class LLCKDNMDJGG;

#define LLCKDNMDJGG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D10D290)
#define LLCKDNMDJGG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D10D2A0)
#define LLCKDNMDJGG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D10D260)

	class LLCKDNMDJGG : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 GBPPOJGEEKP; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLCKDNMDJGG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::LLCKDNMDJGG* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::LLCKDNMDJGG*))((::PBYTE)hIl2Cpp + LLCKDNMDJGG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::LLCKDNMDJGG* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::LLCKDNMDJGG*))((::PBYTE)hIl2Cpp + LLCKDNMDJGG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
