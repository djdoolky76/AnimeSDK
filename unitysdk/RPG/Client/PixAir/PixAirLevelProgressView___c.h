#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::PixAir { class PixAirStageData; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_PIXAIR_PIXAIRLEVELPROGRESSVIEW___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xDB58600)
#define RPG_CLIENT_PIXAIR_PIXAIRLEVELPROGRESSVIEW___C_CTOR_OFFSET UNITYSDK_OFFSET(0xDB58640)
#define RPG_CLIENT_PIXAIR_PIXAIRLEVELPROGRESSVIEW___C___GETSORTEDCOMMONSTAGEDATA_B__8_0_OFFSET UNITYSDK_OFFSET(0xDB58650)
#define RPG_CLIENT_PIXAIR_PIXAIRLEVELPROGRESSVIEW___C___GETSORTEDCOMMONSTAGEDATA_B__8_1_OFFSET UNITYSDK_OFFSET(0xDB58720)

namespace RPG::Client::PixAir
{
	class PixAirLevelProgressView___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::PixAir::PixAirStageData*, ::System::UInt32>** StaticGet___9__8_1()
		{
			return (::System::Func_2<::RPG::Client::PixAir::PixAirStageData*, ::System::UInt32>**)UnitySDK::FromName("RPG.Client.PixAir", "<>c")->GetStaticField(0x2B920);
		}

		static ::System::Func_2<::RPG::Client::PixAir::PixAirStageData*, ::System::Boolean>** StaticGet___9__8_0()
		{
			return (::System::Func_2<::RPG::Client::PixAir::PixAirStageData*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client.PixAir", "<>c")->GetStaticField(0x2B928);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client.PixAir", "<>c")->GetStaticField(0x2B930);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRLEVELPROGRESSVIEW___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRLEVELPROGRESSVIEW___C_CTOR_OFFSET))(this);
		}

		::System::Boolean __GetSortedCommonStageData_b__8_0(::RPG::Client::PixAir::PixAirStageData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::PixAir::PixAirStageData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRLEVELPROGRESSVIEW___C___GETSORTEDCOMMONSTAGEDATA_B__8_0_OFFSET))(this, a1);
		}

		::System::UInt32 __GetSortedCommonStageData_b__8_1(::RPG::Client::PixAir::PixAirStageData* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::PixAir::PixAirStageData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRLEVELPROGRESSVIEW___C___GETSORTEDCOMMONSTAGEDATA_B__8_1_OFFSET))(this, a1);
		}

	};
}
