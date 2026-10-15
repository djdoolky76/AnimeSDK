#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class FHJKNCMMMON;

#define FHJKNCMMMON_CTOR_OFFSET UNITYSDK_OFFSET(0x1CDF1190)
#define FHJKNCMMMON_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CDF1070)

	class FHJKNCMMMON : public ::System::Object
	{
	public:
		::System::UInt32 GAOAMKBNDPN; // 0x10
		::System::UInt32 EBJKJAGJGPK; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHJKNCMMMON_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::FHJKNCMMMON* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::FHJKNCMMMON*))((::PBYTE)hIl2Cpp + FHJKNCMMMON_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
