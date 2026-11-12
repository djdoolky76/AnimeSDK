#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MNOOMFIAFPF;
namespace RPG { template <typename T> class PoolList_1; }

#define BGMBOOMPMJF_CLEAR_OFFSET UNITYSDK_OFFSET(0x1DA3B1B0)
#define BGMBOOMPMJF_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA3B230)
#define BGMBOOMPMJF_HBHFKMDECKJ_OFFSET UNITYSDK_OFFSET(0x1DA3B110)
#define BGMBOOMPMJF_NLHLHBELLMB_OFFSET UNITYSDK_OFFSET(0x1DA3AFD0)

inline static constexpr unsigned int BGMBOOMPMJF_TypeDefinitionIndex = 43265;

	class BGMBOOMPMJF : public ::System::Object
	{
	public:
		::RPG::PoolList_1<::MNOOMFIAFPF*>* KLOOPCALFGK; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGMBOOMPMJF_CTOR_OFFSET))(this);
		}

		::System::UInt32 NLHLHBELLMB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BGMBOOMPMJF_NLHLHBELLMB_OFFSET))(this);
		}

		::System::Boolean HBHFKMDECKJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BGMBOOMPMJF_HBHFKMDECKJ_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGMBOOMPMJF_CLEAR_OFFSET))(this);
		}

	};
