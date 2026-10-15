#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class CPBDANBHPBE;
class FCOEMCEDLNL;

#define CPBDANBHPBE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DCBCD80)
#define CPBDANBHPBE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DCBCD90)
#define CPBDANBHPBE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DCBCD40)

inline static constexpr unsigned int CPBDANBHPBE_TypeDefinitionIndex = 21731;

	class CPBDANBHPBE : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::System::UInt32>* JIJCAMIBONC; // 0x18
		::Il2CppArray<::System::UInt32>* DLAIEOKGOIH; // 0x20
		::System::UInt32 ALDHGDKEMNL; // 0x28
		::System::UInt32 ICGACGKHFEO; // 0x2C
		::System::UInt32 FDMIEICBBNB; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPBDANBHPBE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::CPBDANBHPBE* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::CPBDANBHPBE*))((::PBYTE)hIl2Cpp + CPBDANBHPBE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::CPBDANBHPBE* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::CPBDANBHPBE*))((::PBYTE)hIl2Cpp + CPBDANBHPBE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
