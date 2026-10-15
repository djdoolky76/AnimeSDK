#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NEMHKFFNDJO.h"
#include "unitysdk/System/Object.h"
namespace RPG { template <typename T> class PoolList_1; }

#define ICMIHBDLDEJ_CLEAR_OFFSET UNITYSDK_OFFSET(0x1CB07520)
#define ICMIHBDLDEJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1CB075A0)

inline static constexpr unsigned int ICMIHBDLDEJ_TypeDefinitionIndex = 42163;

	class ICMIHBDLDEJ : public ::System::Object
	{
	public:
		::RPG::PoolList_1<::NEMHKFFNDJO>* DKCCDMFPIHJ; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICMIHBDLDEJ_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICMIHBDLDEJ_CLEAR_OFFSET))(this);
		}

	};
