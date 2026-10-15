#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/B51RacingPartType.h"
#include "unitysdk/System/Object.h"
class KIIGKJKMCHP;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NECPDLAEDMF_CTOR_OFFSET UNITYSDK_OFFSET(0xBB529D0)

inline static constexpr unsigned int NECPDLAEDMF_TypeDefinitionIndex = 82001;

	class NECPDLAEDMF : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::B51RacingPartType, ::System::UInt32>* LJOLMNOBPCG; // 0x10
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::B51RacingPartType, ::Il2CppArray<::KIIGKJKMCHP*>*>* AMCAMCIAIHJ; // 0x18
		::RPG::GameCore::B51RacingPartType HBADGMPANOE; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NECPDLAEDMF_CTOR_OFFSET))(this);
		}

	};
