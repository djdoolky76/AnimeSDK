#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class DPCPNMNFKKK;
class FCOEMCEDLNL;

#define DPCPNMNFKKK_CTOR_OFFSET UNITYSDK_OFFSET(0x1CD55E50)
#define DPCPNMNFKKK_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CD55E60)
#define DPCPNMNFKKK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CD55E20)

	class DPCPNMNFKKK : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean MOKNCFJICIC; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPCPNMNFKKK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::DPCPNMNFKKK* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::DPCPNMNFKKK*))((::PBYTE)hIl2Cpp + DPCPNMNFKKK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::DPCPNMNFKKK* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::DPCPNMNFKKK*))((::PBYTE)hIl2Cpp + DPCPNMNFKKK_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
