#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class RogueMagicScepterDataItem; }
namespace System { class Object; }
namespace System { template <typename T> class Comparison_1; }

#define MJOGAHHOJMH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xB97ABF0)
#define MJOGAHHOJMH___C_CTOR_OFFSET UNITYSDK_OFFSET(0xB97AC30)
#define MJOGAHHOJMH___C___SETUPVIEW_B__11_0_OFFSET UNITYSDK_OFFSET(0xB97AC40)

	class MJOGAHHOJMH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6FD90);
		}

		static ::System::Comparison_1<::RPG::Client::RogueMagicScepterDataItem*>** StaticGet___9__11_0()
		{
			return (::System::Comparison_1<::RPG::Client::RogueMagicScepterDataItem*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6FD98);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MJOGAHHOJMH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJOGAHHOJMH___C_CTOR_OFFSET))(this);
		}

		::System::Int32 __SetupView_b__11_0(::RPG::Client::RogueMagicScepterDataItem* a1, ::RPG::Client::RogueMagicScepterDataItem* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::RogueMagicScepterDataItem*, ::RPG::Client::RogueMagicScepterDataItem*))((::PBYTE)hIl2Cpp + MJOGAHHOJMH___C___SETUPVIEW_B__11_0_OFFSET))(this, a1, a2);
		}

	};
