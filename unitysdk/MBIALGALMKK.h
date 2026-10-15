#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
namespace RPG { template <typename T> class PoolList_1; }

#define MBIALGALMKK_CTOR_OFFSET UNITYSDK_OFFSET(0x1C8F6720)

inline static constexpr unsigned int MBIALGALMKK_TypeDefinitionIndex = 42256;

	class MBIALGALMKK : public ::System::Object
	{
	public:
		::RPG::PoolList_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>* FJFMCGDEBGA; // 0x10
		::System::Boolean CFADENBPABO; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBIALGALMKK_CTOR_OFFSET))(this);
		}

	};
