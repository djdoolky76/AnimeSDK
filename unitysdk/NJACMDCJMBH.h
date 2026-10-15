#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class NJACMDCJMBH;

#define NJACMDCJMBH_CTOR_OFFSET UNITYSDK_OFFSET(0x1D215440)
#define NJACMDCJMBH_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D215450)
#define NJACMDCJMBH_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D215410)

	class NJACMDCJMBH : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean MOKNCFJICIC; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJACMDCJMBH_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::NJACMDCJMBH* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::NJACMDCJMBH*))((::PBYTE)hIl2Cpp + NJACMDCJMBH_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::NJACMDCJMBH* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::NJACMDCJMBH*))((::PBYTE)hIl2Cpp + NJACMDCJMBH_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
