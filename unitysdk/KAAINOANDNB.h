#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG { template <typename T> class PoolList_1; }

#define KAAINOANDNB_NHLFAAMAGKN_OFFSET UNITYSDK_OFFSET(0x12C10)

inline static constexpr unsigned int KAAINOANDNB_TypeDefinitionIndex = 56287;

	struct alignas(4) KAAINOANDNB
	{
		::System::UInt32 KPOCDFKLHDJ; // 0x10
		::System::UInt32 ELCOEFPDBPL; // 0x14
		::System::UInt32 AIDNGFGHLED; // 0x18
		::System::Void NHLFAAMAGKN(::RPG::PoolList_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::PoolList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + KAAINOANDNB_NHLFAAMAGKN_OFFSET))(this, a1);
		}

	};
