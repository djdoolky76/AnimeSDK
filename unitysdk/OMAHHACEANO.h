#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
class LJAPBLLGAJN;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OMAHHACEANO_CTOR_OFFSET UNITYSDK_OFFSET(0xBF17730)

	class OMAHHACEANO : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AttackType, ::System::Double>* FNFFCPLHPGI; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::LJAPBLLGAJN*>* LHHEGCIAHPD; // 0x18
		::RPG::GameCore::FixPoint NEMOMKPCCMG; // 0x20
		::RPG::GameCore::FixPoint LIOCBCEJAIF; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMAHHACEANO_CTOR_OFFSET))(this);
		}

	};
