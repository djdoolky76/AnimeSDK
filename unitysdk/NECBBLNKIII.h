#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BattleOperationType.h"
#include "unitysdk/System/Object.h"
class NECBBLNKIII;

#define NECBBLNKIII_BFFFDFFBCGK_OFFSET UNITYSDK_OFFSET(0xBB58940)
#define NECBBLNKIII_CTOR_OFFSET UNITYSDK_OFFSET(0xBB58930)
#define NECBBLNKIII_FFHNOMIDEDE_OFFSET UNITYSDK_OFFSET(0xBB58AB0)

	class NECBBLNKIII : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NECBBLNKIII_CTOR_OFFSET))(this);
		}

		static ::NECBBLNKIII* BFFFDFFBCGK(::Il2CppArray<::RPG::GameCore::BattleOperationType>* a1, ::System::Int32 a2)
		{
			return ((::NECBBLNKIII*(*)(::Il2CppArray<::RPG::GameCore::BattleOperationType>*, ::System::Int32))((::PBYTE)hIl2Cpp + NECBBLNKIII_BFFFDFFBCGK_OFFSET))(a1, a2);
		}

		::System::Void FFHNOMIDEDE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NECBBLNKIII_FFHNOMIDEDE_OFFSET))(this);
		}

	};
