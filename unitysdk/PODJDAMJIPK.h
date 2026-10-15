#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RestaurantEmployeeAbility.h"
#include "unitysdk/System/Object.h"
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PODJDAMJIPK_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C9CACE0)
#define PODJDAMJIPK_CTOR_OFFSET UNITYSDK_OFFSET(0x1C9CADF0)
#define PODJDAMJIPK_PHEMNJKGMDD_OFFSET UNITYSDK_OFFSET(0x1C9CAD30)

inline static constexpr unsigned int PODJDAMJIPK_TypeDefinitionIndex = 42096;

	class PODJDAMJIPK : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* GLLOLLEDHAD; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PODJDAMJIPK_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PODJDAMJIPK_CLEAR_OFFSET))(this);
		}

		::System::Boolean PHEMNJKGMDD(::RPG::GameCore::RestaurantEmployeeAbility a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::RestaurantEmployeeAbility))((::PBYTE)hIl2Cpp + PODJDAMJIPK_PHEMNJKGMDD_OFFSET))(this, a1);
		}

	};
