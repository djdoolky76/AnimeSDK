#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateRinDeckRecommendTiming.h"
#include "unitysdk/RPG/GameCore/FateRinHouguOwnerType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class OFHBIFPNNBH;

#define OFHBIFPNNBH_CTOR_OFFSET UNITYSDK_OFFSET(0x1D23B720)
#define OFHBIFPNNBH_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D23B530)

inline static constexpr unsigned int OFHBIFPNNBH_TypeDefinitionIndex = 11549;

	class OFHBIFPNNBH : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* OFIGPIFELHJ; // 0x10
		::Il2CppArray<::System::UInt32>* NJBEMAEAEIL; // 0x18
		::RPG::GameCore::FateRinHouguOwnerType LOALOLNACOA; // 0x20
		::RPG::GameCore::FateRinDeckRecommendTiming JGAKLKBOPEG; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFHBIFPNNBH_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::OFHBIFPNNBH* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::OFHBIFPNNBH*))((::PBYTE)hIl2Cpp + OFHBIFPNNBH_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
