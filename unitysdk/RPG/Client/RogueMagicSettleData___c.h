#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GPEPGKCPBPB;
namespace System { class Object; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_ROGUEMAGICSETTLEDATA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xDF38160)
#define RPG_CLIENT_ROGUEMAGICSETTLEDATA___C_CTOR_OFFSET UNITYSDK_OFFSET(0xDF381A0)
#define RPG_CLIENT_ROGUEMAGICSETTLEDATA___C__CREATE_B__2_0_OFFSET UNITYSDK_OFFSET(0xDF381B0)

namespace RPG::Client
{
	class RogueMagicSettleData___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x64C40);
		}

		static ::System::Comparison_1<::GPEPGKCPBPB*>** StaticGet___9__2_0()
		{
			return (::System::Comparison_1<::GPEPGKCPBPB*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x64C48);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSETTLEDATA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSETTLEDATA___C_CTOR_OFFSET))(this);
		}

		::System::Int32 _Create_b__2_0(::GPEPGKCPBPB* a1, ::GPEPGKCPBPB* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::GPEPGKCPBPB*, ::GPEPGKCPBPB*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSETTLEDATA___C__CREATE_B__2_0_OFFSET))(this, a1, a2);
		}

	};
}
