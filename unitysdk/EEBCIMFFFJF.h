#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EEBCIMFFFJF;
class FCOEMCEDLNL;

#define EEBCIMFFFJF_CTOR_OFFSET UNITYSDK_OFFSET(0x1CD72370)
#define EEBCIMFFFJF_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CD72280)

	class EEBCIMFFFJF : public ::System::Object
	{
	public:
		::System::UInt32 MNDFOPKBHKP; // 0x10
		::System::UInt32 BFLIFKBEOPJ; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEBCIMFFFJF_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::EEBCIMFFFJF* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::EEBCIMFFFJF*))((::PBYTE)hIl2Cpp + EEBCIMFFFJF_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
