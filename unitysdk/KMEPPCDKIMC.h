#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class HoyoTag; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KMEPPCDKIMC_CCTOR_OFFSET UNITYSDK_OFFSET(0xB551CF0)

	class KMEPPCDKIMC : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::RPG::GameCore::HoyoTag*>** StaticGet_MCGNIENJOOA()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Type*, ::RPG::GameCore::HoyoTag*>**)UnitySDK::FromName("", "KMEPPCDKIMC")->GetStaticField(0x5F7C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KMEPPCDKIMC_CCTOR_OFFSET))();
		}

	};
