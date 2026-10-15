#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ACDOGMEAIPD;
class FCOEMCEDLNL;

#define ACDOGMEAIPD_CTOR_OFFSET UNITYSDK_OFFSET(0x1CCA41D0)
#define ACDOGMEAIPD_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CCA3FC0)

inline static constexpr unsigned int ACDOGMEAIPD_TypeDefinitionIndex = 14407;

	class ACDOGMEAIPD : public ::System::Object
	{
	public:
		::System::UInt32 FMLGGKAFMKC; // 0x10
		::System::Single EHCBBAEMNFE; // 0x14
		::System::UInt32 OBOMNIHKHMM; // 0x18
		::System::Single JGOCJLDLFLM; // 0x1C
		::System::UInt32 LLDCHLHNADA; // 0x20
		::System::UInt32 PHFMCACHFIJ; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACDOGMEAIPD_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::ACDOGMEAIPD* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::ACDOGMEAIPD*))((::PBYTE)hIl2Cpp + ACDOGMEAIPD_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
