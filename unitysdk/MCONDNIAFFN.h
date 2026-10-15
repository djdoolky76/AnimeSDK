#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateRinDeckRecommendTiming.h"
#include "unitysdk/RPG/GameCore/FateRinHouguOwnerType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple.h"
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define MCONDNIAFFN_BOCGLLIDPDD_OFFSET UNITYSDK_OFFSET(0xB88AC70)
#define MCONDNIAFFN_CTOR_OFFSET UNITYSDK_OFFSET(0xB88A900)

	class MCONDNIAFFN : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::ValueTuple, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*>* DDFFNPHOJNM; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::ValueTuple, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*>* HBKGGMEEPDC; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCONDNIAFFN_CTOR_OFFSET))(this);
		}

		::System::Void BOCGLLIDPDD(::RPG::GameCore::FateRinHouguOwnerType a1, ::RPG::GameCore::FateRinDeckRecommendTiming a2, ::System::Object* a3, ::System::Object* a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FateRinHouguOwnerType, ::RPG::GameCore::FateRinDeckRecommendTiming, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + MCONDNIAFFN_BOCGLLIDPDD_OFFSET))(this, a1, a2, a3, a4);
		}

	};
