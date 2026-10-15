#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PetMarbleLevelMode.h"
#include "unitysdk/System/Object.h"
class AOPAEHANNBO;
class FCOEMCEDLNL;

#define AOPAEHANNBO_CTOR_OFFSET UNITYSDK_OFFSET(0x1CCEC110)
#define AOPAEHANNBO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CCEBF40)

	class AOPAEHANNBO : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* JFKCEOGCOOO; // 0x10
		::RPG::GameCore::PetMarbleLevelMode HKEACDBJCOD; // 0x18
		::System::UInt32 OCFMCLAGNFM; // 0x1C
		::System::UInt32 PHFMCACHFIJ; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOPAEHANNBO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::AOPAEHANNBO* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::AOPAEHANNBO*))((::PBYTE)hIl2Cpp + AOPAEHANNBO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
