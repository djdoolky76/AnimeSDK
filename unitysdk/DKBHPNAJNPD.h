#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class DKBHPNAJNPD;
class FCOEMCEDLNL;

#define DKBHPNAJNPD_CTOR_OFFSET UNITYSDK_OFFSET(0x1CD06750)
#define DKBHPNAJNPD_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CD06760)
#define DKBHPNAJNPD_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CD06720)

inline static constexpr unsigned int DKBHPNAJNPD_TypeDefinitionIndex = 19951;

	class DKBHPNAJNPD : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 JGBDFNEFKIL; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKBHPNAJNPD_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::DKBHPNAJNPD* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::DKBHPNAJNPD*))((::PBYTE)hIl2Cpp + DKBHPNAJNPD_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::DKBHPNAJNPD* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::DKBHPNAJNPD*))((::PBYTE)hIl2Cpp + DKBHPNAJNPD_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
