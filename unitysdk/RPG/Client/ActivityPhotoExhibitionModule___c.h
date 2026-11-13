#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class ActivityPhotoExhibitionGroupData; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_ACTIVITYPHOTOEXHIBITIONMODULE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C8A3DC0)
#define RPG_CLIENT_ACTIVITYPHOTOEXHIBITIONMODULE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1C8A3E00)
#define RPG_CLIENT_ACTIVITYPHOTOEXHIBITIONMODULE___C__HASANYAVAILABLEGROUPUNSEEN_B__6_0_OFFSET UNITYSDK_OFFSET(0x1C8A3E30)
#define RPG_CLIENT_ACTIVITYPHOTOEXHIBITIONMODULE___C__HASANYGROUPREWARDCANTAKE_B__7_0_OFFSET UNITYSDK_OFFSET(0x1C8A3EE0)
#define RPG_CLIENT_ACTIVITYPHOTOEXHIBITIONMODULE___C__ISFINISHALLGROUP_B__5_0_OFFSET UNITYSDK_OFFSET(0x1C8A3E10)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityPhotoExhibitionModule___c_TypeDefinitionIndex = 63136;

	class ActivityPhotoExhibitionModule___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x36AC0);
		}

		static ::System::Func_2<::RPG::Client::ActivityPhotoExhibitionGroupData*, ::System::Boolean>** StaticGet___9__6_0()
		{
			return (::System::Func_2<::RPG::Client::ActivityPhotoExhibitionGroupData*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x36AC8);
		}

		static ::System::Func_2<::RPG::Client::ActivityPhotoExhibitionGroupData*, ::System::Boolean>** StaticGet___9__5_0()
		{
			return (::System::Func_2<::RPG::Client::ActivityPhotoExhibitionGroupData*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x36AD0);
		}

		static ::System::Func_2<::RPG::Client::ActivityPhotoExhibitionGroupData*, ::System::Boolean>** StaticGet___9__7_0()
		{
			return (::System::Func_2<::RPG::Client::ActivityPhotoExhibitionGroupData*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x36AD8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPHOTOEXHIBITIONMODULE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPHOTOEXHIBITIONMODULE___C_CTOR_OFFSET))(this);
		}

		::System::Boolean _IsFinishAllGroup_b__5_0(::RPG::Client::ActivityPhotoExhibitionGroupData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityPhotoExhibitionGroupData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPHOTOEXHIBITIONMODULE___C__ISFINISHALLGROUP_B__5_0_OFFSET))(this, a1);
		}

		::System::Boolean _HasAnyAvailableGroupUnSeen_b__6_0(::RPG::Client::ActivityPhotoExhibitionGroupData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityPhotoExhibitionGroupData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPHOTOEXHIBITIONMODULE___C__HASANYAVAILABLEGROUPUNSEEN_B__6_0_OFFSET))(this, a1);
		}

		::System::Boolean _HasAnyGroupRewardCanTake_b__7_0(::RPG::Client::ActivityPhotoExhibitionGroupData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityPhotoExhibitionGroupData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPHOTOEXHIBITIONMODULE___C__HASANYGROUPREWARDCANTAKE_B__7_0_OFFSET))(this, a1);
		}

	};
}
