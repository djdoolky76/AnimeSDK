#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DMEIPKFHHCM;
class FCOEMCEDLNL;

#define DMEIPKFHHCM_CTOR_OFFSET UNITYSDK_OFFSET(0x1CD42AB0)
#define DMEIPKFHHCM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CD428D0)

	class DMEIPKFHHCM : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* AKHHKMDFGKC; // 0x10
		::System::UInt32 KILKOKMKNML; // 0x18
		::System::Boolean JPGBOENKPLK; // 0x1C
		::System::Byte _padding0[0x3];
		::System::UInt32 JDLPMOKEBPD; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMEIPKFHHCM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::DMEIPKFHHCM* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::DMEIPKFHHCM*))((::PBYTE)hIl2Cpp + DMEIPKFHHCM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
