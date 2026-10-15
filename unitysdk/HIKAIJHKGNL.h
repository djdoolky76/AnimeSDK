#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceUnlockConditionType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class HIKAIJHKGNL;

#define HIKAIJHKGNL_CTOR_OFFSET UNITYSDK_OFFSET(0x1CEAF5C0)
#define HIKAIJHKGNL_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CEAF4C0)

inline static constexpr unsigned int HIKAIJHKGNL_TypeDefinitionIndex = 10989;

	class HIKAIJHKGNL : public ::System::Object
	{
	public:
		::RPG::GameCore::CakeRaceUnlockConditionType LOAGIPDPLFM; // 0x10
		::System::UInt32 FFCBLPDHCFO; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIKAIJHKGNL_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::HIKAIJHKGNL* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::HIKAIJHKGNL*))((::PBYTE)hIl2Cpp + HIKAIJHKGNL_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
