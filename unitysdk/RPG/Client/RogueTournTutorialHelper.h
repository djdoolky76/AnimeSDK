#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_ROGUETOURNTUTORIALHELPER_CCTOR_OFFSET UNITYSDK_OFFSET(0x1ACF11C0)
#define RPG_CLIENT_ROGUETOURNTUTORIALHELPER_CHECKCURRENTROOMINDEX_OFFSET UNITYSDK_OFFSET(0x1ACF0CD0)
#define RPG_CLIENT_ROGUETOURNTUTORIALHELPER_CHECKCURRENTROOMTYPEREFORGE_OFFSET UNITYSDK_OFFSET(0x1ACF0EE0)
#define RPG_CLIENT_ROGUETOURNTUTORIALHELPER_CHECKINPERSONAGUIDEAREANUMBER_OFFSET UNITYSDK_OFFSET(0x1ACF0A10)
#define RPG_CLIENT_ROGUETOURNTUTORIALHELPER_ISINPERSONAGUIDE_OFFSET UNITYSDK_OFFSET(0x1ACF0700)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournTutorialHelper_TypeDefinitionIndex = 69756;

	class RogueTournTutorialHelper : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::UInt32>** StaticGet__GuideAreaIDs()
		{
			return (::Il2CppArray<::System::UInt32>**)UnitySDK::FromName("RPG.Client", "RogueTournTutorialHelper")->GetStaticField(0x73290);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTUTORIALHELPER_CCTOR_OFFSET))();
		}

		static ::System::Boolean IsInPersonaGuide()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTUTORIALHELPER_ISINPERSONAGUIDE_OFFSET))();
		}

		static ::System::Boolean CheckInPersonaGuideAreaNumber(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTUTORIALHELPER_CHECKINPERSONAGUIDEAREANUMBER_OFFSET))(a1);
		}

		static ::System::Boolean CheckCurrentRoomIndex(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTUTORIALHELPER_CHECKCURRENTROOMINDEX_OFFSET))(a1);
		}

		static ::System::Boolean CheckCurrentRoomTypeReforge()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNTUTORIALHELPER_CHECKCURRENTROOMTYPEREFORGE_OFFSET))();
		}

	};
}
