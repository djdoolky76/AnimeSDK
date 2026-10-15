#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class JNIPOABPBPD;

#define JNIPOABPBPD_CTOR_OFFSET UNITYSDK_OFFSET(0x1D024C80)
#define JNIPOABPBPD_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D024C90)
#define JNIPOABPBPD_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D024C50)

inline static constexpr unsigned int JNIPOABPBPD_TypeDefinitionIndex = 21882;

	class JNIPOABPBPD : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 FCGFFAJIBKA; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNIPOABPBPD_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::JNIPOABPBPD* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::JNIPOABPBPD*))((::PBYTE)hIl2Cpp + JNIPOABPBPD_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::JNIPOABPBPD* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::JNIPOABPBPD*))((::PBYTE)hIl2Cpp + JNIPOABPBPD_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
