#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackType.h"
#include "unitysdk/System/Object.h"

#define JENFBIIMILF_CLEAR_OFFSET UNITYSDK_OFFSET(0x1662DE20)
#define JENFBIIMILF_CTOR_OFFSET UNITYSDK_OFFSET(0x1662DE70)

inline static constexpr unsigned int JENFBIIMILF_TypeDefinitionIndex = 53734;

	class JENFBIIMILF : public ::System::Object
	{
	public:
		::RPG::GameCore::AttackType NFMKOFNEKLA; // 0x10
		::RPG::GameCore::AttackType HILNFHCPEAD; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JENFBIIMILF_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JENFBIIMILF_CLEAR_OFFSET))(this);
		}

	};
