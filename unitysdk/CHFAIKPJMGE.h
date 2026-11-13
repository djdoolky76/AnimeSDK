#pragma once
#include "unitysdk/unitysdk.h"

#define CHFAIKPJMGE_BBNJCKPKPDN_OFFSET UNITYSDK_OFFSET(0x178690C0)
#define CHFAIKPJMGE_DADCFBHGLOH_OFFSET UNITYSDK_OFFSET(0x3DDB530)
#define CHFAIKPJMGE_HBFKMECBOND_OFFSET UNITYSDK_OFFSET(0x17869070)
#define CHFAIKPJMGE_JGIAAGKKOAN_OFFSET UNITYSDK_OFFSET(0x17869020)

inline static constexpr unsigned int CHFAIKPJMGE_TypeDefinitionIndex = 71655;

	struct alignas(4) CHFAIKPJMGE
	{
		::System::Int32 COEMCOBPMKD; // 0x10
		::System::Void DADCFBHGLOH(::System::Boolean a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + CHFAIKPJMGE_DADCFBHGLOH_OFFSET))(this, a1, a2);
		}

		/*
		static ::System::Boolean JGIAAGKKOAN(::CHFAIKPJMGE a1)
		{
			return ((::System::Boolean(*)(::CHFAIKPJMGE))((::PBYTE)hIl2Cpp + CHFAIKPJMGE_JGIAAGKKOAN_OFFSET))(a1);
		}
		*/

		/*
		static ::System::Boolean HBFKMECBOND(::CHFAIKPJMGE a1)
		{
			return ((::System::Boolean(*)(::CHFAIKPJMGE))((::PBYTE)hIl2Cpp + CHFAIKPJMGE_HBFKMECBOND_OFFSET))(a1);
		}
		*/

		/*
		static ::System::Boolean BBNJCKPKPDN(::CHFAIKPJMGE a1)
		{
			return ((::System::Boolean(*)(::CHFAIKPJMGE))((::PBYTE)hIl2Cpp + CHFAIKPJMGE_BBNJCKPKPDN_OFFSET))(a1);
		}
		*/

	};
