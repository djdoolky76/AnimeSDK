#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
namespace RPG { template <typename T> class PoolList_1; }

#define GEOLICLPBPJ_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C225C80)
#define GEOLICLPBPJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1C225CE0)

inline static constexpr unsigned int GEOLICLPBPJ_TypeDefinitionIndex = 43254;

	class GEOLICLPBPJ : public ::System::Object
	{
	public:
		::RPG::PoolList_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>* NJJHNLLAMCC; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEOLICLPBPJ_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEOLICLPBPJ_CLEAR_OFFSET))(this);
		}

	};
