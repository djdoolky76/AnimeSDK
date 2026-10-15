#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BGJKNDNFJJL;
class FCOEMCEDLNL;

#define BGJKNDNFJJL_CTOR_OFFSET UNITYSDK_OFFSET(0x1D676230)
#define BGJKNDNFJJL_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D676190)

	class BGJKNDNFJJL : public ::System::Object
	{
	public:
		::System::UInt32 BNCKFPAGOMF; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGJKNDNFJJL_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::BGJKNDNFJJL* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::BGJKNDNFJJL*))((::PBYTE)hIl2Cpp + BGJKNDNFJJL_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
