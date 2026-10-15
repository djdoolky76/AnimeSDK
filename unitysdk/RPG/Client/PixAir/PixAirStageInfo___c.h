#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::PixAir { class PixAirStageData; }
namespace System { class Object; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_PIXAIR_PIXAIRSTAGEINFO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xDB6C640)
#define RPG_CLIENT_PIXAIR_PIXAIRSTAGEINFO___C_CTOR_OFFSET UNITYSDK_OFFSET(0xDB6C680)
#define RPG_CLIENT_PIXAIR_PIXAIRSTAGEINFO___C__GETSORTEDNORMALSTAGELIST_B__33_0_OFFSET UNITYSDK_OFFSET(0xDB6C690)

namespace RPG::Client::PixAir
{
	class PixAirStageInfo___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client.PixAir", "<>c")->GetStaticField(0x2CFF0);
		}

		static ::System::Comparison_1<::RPG::Client::PixAir::PixAirStageData*>** StaticGet___9__33_0()
		{
			return (::System::Comparison_1<::RPG::Client::PixAir::PixAirStageData*>**)UnitySDK::FromName("RPG.Client.PixAir", "<>c")->GetStaticField(0x2CFF8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRSTAGEINFO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRSTAGEINFO___C_CTOR_OFFSET))(this);
		}

		::System::Int32 _GetSortedNormalStageList_b__33_0(::RPG::Client::PixAir::PixAirStageData* a1, ::RPG::Client::PixAir::PixAirStageData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::PixAir::PixAirStageData*, ::RPG::Client::PixAir::PixAirStageData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRSTAGEINFO___C__GETSORTEDNORMALSTAGELIST_B__33_0_OFFSET))(this, a1, a2);
		}

	};
}
