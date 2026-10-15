#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class ActivityPhotoExhibitionDetailData; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { class KeyValuePair; }

#define RPG_CLIENT_ACTIVITYPHOTOEXHIBITIONGROUPDATA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xC585090)
#define RPG_CLIENT_ACTIVITYPHOTOEXHIBITIONGROUPDATA___C_CTOR_OFFSET UNITYSDK_OFFSET(0xC5850D0)
#define RPG_CLIENT_ACTIVITYPHOTOEXHIBITIONGROUPDATA___C__GETCURINPROGRESSDETAILDATA_B__1_0_OFFSET UNITYSDK_OFFSET(0xC5850E0)
#define RPG_CLIENT_ACTIVITYPHOTOEXHIBITIONGROUPDATA___C__GET_ISANYDETAILFINISHED_B__24_0_OFFSET UNITYSDK_OFFSET(0xC585120)
#define RPG_CLIENT_ACTIVITYPHOTOEXHIBITIONGROUPDATA___C__GET_ISFINISHED_B__22_0_OFFSET UNITYSDK_OFFSET(0xC585100)

namespace RPG::Client
{
	class ActivityPhotoExhibitionGroupData___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x37BD0);
		}

		static ::System::Func_2<::System::Collections::Generic::KeyValuePair*, ::System::Boolean>** StaticGet___9__22_0()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x37BD8);
		}

		static ::System::Func_2<::System::Collections::Generic::KeyValuePair*, ::System::Boolean>** StaticGet___9__24_0()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x37BE0);
		}

		static ::System::Func_2<::System::Collections::Generic::KeyValuePair*, ::System::Boolean>** StaticGet___9__1_0()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x37BE8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPHOTOEXHIBITIONGROUPDATA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPHOTOEXHIBITIONGROUPDATA___C_CTOR_OFFSET))(this);
		}

		::System::Boolean _GetCurInProgressDetailData_b__1_0(::System::Collections::Generic::KeyValuePair* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::KeyValuePair*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPHOTOEXHIBITIONGROUPDATA___C__GETCURINPROGRESSDETAILDATA_B__1_0_OFFSET))(this, a1);
		}

		::System::Boolean _get_IsFinished_b__22_0(::System::Collections::Generic::KeyValuePair* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::KeyValuePair*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPHOTOEXHIBITIONGROUPDATA___C__GET_ISFINISHED_B__22_0_OFFSET))(this, a1);
		}

		::System::Boolean _get_IsAnyDetailFinished_b__24_0(::System::Collections::Generic::KeyValuePair* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::KeyValuePair*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPHOTOEXHIBITIONGROUPDATA___C__GET_ISANYDETAILFINISHED_B__24_0_OFFSET))(this, a1);
		}

	};
}
