#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AlleyPackGoodsTypeEnum.h"
#include "unitysdk/RPG/GameCore/EventTypeEnum.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/AlleyEventInfo.h"
namespace RPG::Client { class LuaUIController; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ALLEYUTILS_GETALLEYGOODANCHORCOUNTBYGOODID_OFFSET UNITYSDK_OFFSET(0xC67A370)
#define RPG_CLIENT_ALLEYUTILS_GETALLEYGOODTYPEBYGOODID_OFFSET UNITYSDK_OFFSET(0xC67A4B0)
#define RPG_CLIENT_ALLEYUTILS_ISEXISTINGURGENTEVENTMISSION_OFFSET UNITYSDK_OFFSET(0xC67A160)
#define RPG_CLIENT_ALLEYUTILS_SHOWALLEYMAINENTRANCEPAGE_OFFSET UNITYSDK_OFFSET(0xC67A000)

namespace RPG::Client
{
	class AlleyUtils : public ::System::Object
	{
	public:
		static ::System::Void ShowAlleyMainEntrancePage(::System::Action* a1)
		{
			return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYUTILS_SHOWALLEYMAINENTRANCEPAGE_OFFSET))(a1);
		}

		static ::System::Boolean IsExistingUrgentEventMission(::System::Collections::Generic::List_1<::RPG::Client::AlleyEventInfo>* a1, ::RPG::GameCore::EventTypeEnum a2)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::List_1<::RPG::Client::AlleyEventInfo>*, ::RPG::GameCore::EventTypeEnum))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYUTILS_ISEXISTINGURGENTEVENTMISSION_OFFSET))(a1, a2);
		}

		static ::System::UInt32 GetAlleyGoodAnchorCountByGoodID(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYUTILS_GETALLEYGOODANCHORCOUNTBYGOODID_OFFSET))(a1);
		}

		static ::RPG::GameCore::AlleyPackGoodsTypeEnum GetAlleyGoodTypeByGoodID(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::AlleyPackGoodsTypeEnum(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYUTILS_GETALLEYGOODTYPEBYGOODID_OFFSET))(a1);
		}

	};
}
