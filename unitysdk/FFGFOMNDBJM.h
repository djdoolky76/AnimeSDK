#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
namespace RPG { template <typename T> class PoolList_1; }

#define FFGFOMNDBJM_CLEAR_OFFSET UNITYSDK_OFFSET(0x1DC31C00)
#define FFGFOMNDBJM_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC31C60)

inline static constexpr unsigned int FFGFOMNDBJM_TypeDefinitionIndex = 43264;

	class FFGFOMNDBJM : public ::System::Object
	{
	public:
		::RPG::PoolList_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>* LIALLJHDJHM; // 0x10
		::System::UInt32 AOCLHNKNJHM; // 0x18
		::System::UInt32 GACEMBBAGMP; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFGFOMNDBJM_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFGFOMNDBJM_CLEAR_OFFSET))(this);
		}

	};
