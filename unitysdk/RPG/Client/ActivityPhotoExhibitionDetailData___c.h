#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_ACTIVITYPHOTOEXHIBITIONDETAILDATA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xC57DB90)
#define RPG_CLIENT_ACTIVITYPHOTOEXHIBITIONDETAILDATA___C_CTOR_OFFSET UNITYSDK_OFFSET(0xC57DBD0)
#define RPG_CLIENT_ACTIVITYPHOTOEXHIBITIONDETAILDATA___C__GET__ISANYTASKOPTIONFINISH_B__21_0_OFFSET UNITYSDK_OFFSET(0xC57DBE0)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityPhotoExhibitionDetailData___c_TypeDefinitionIndex = 61726;

	class ActivityPhotoExhibitionDetailData___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x30FC0);
		}

		static ::System::Func_2<::System::UInt32, ::System::Boolean>** StaticGet___9__21_0()
		{
			return (::System::Func_2<::System::UInt32, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x30FC8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPHOTOEXHIBITIONDETAILDATA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPHOTOEXHIBITIONDETAILDATA___C_CTOR_OFFSET))(this);
		}

		::System::Boolean _get__IsAnyTaskOptionFinish_b__21_0(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPHOTOEXHIBITIONDETAILDATA___C__GET__ISANYTASKOPTIONFINISH_B__21_0_OFFSET))(this, a1);
		}

	};
}
