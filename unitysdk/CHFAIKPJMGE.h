#pragma once
#include "unitysdk/unitysdk.h"

#define CHFAIKPJMGE_BBNJCKPKPDN_OFFSET UNITYSDK_OFFSET(0xCC8FB80)
#define CHFAIKPJMGE_DADCFBHGLOH_OFFSET UNITYSDK_OFFSET(0xE4B50)
#define CHFAIKPJMGE_HBFKMECBOND_OFFSET UNITYSDK_OFFSET(0xCC8FB30)
#define CHFAIKPJMGE_JGIAAGKKOAN_OFFSET UNITYSDK_OFFSET(0xCC8FAE0)

inline static constexpr unsigned int CHFAIKPJMGE_TypeDefinitionIndex = 69698;

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
