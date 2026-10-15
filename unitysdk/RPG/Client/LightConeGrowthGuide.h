#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IAHCDBNIDNG;
class NHPAANINLPK;
class PIHNNIFOPOC;
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class LightConeGrowthGuide; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_LIGHTCONEGROWTHGUIDE_CREATE_OFFSET UNITYSDK_OFFSET(0xD38C840)
#define RPG_CLIENT_LIGHTCONEGROWTHGUIDE_CTOR_OFFSET UNITYSDK_OFFSET(0xD38C900)
#define RPG_CLIENT_LIGHTCONEGROWTHGUIDE_GETGUIDEITEMS_OFFSET UNITYSDK_OFFSET(0xD38CB20)
#define RPG_CLIENT_LIGHTCONEGROWTHGUIDE_GETRECOMMENDITEMS_OFFSET UNITYSDK_OFFSET(0xD38CB80)
#define RPG_CLIENT_LIGHTCONEGROWTHGUIDE_GET_ISGROWABLE_OFFSET UNITYSDK_OFFSET(0xD38C950)
#define RPG_CLIENT_LIGHTCONEGROWTHGUIDE_REQUESTRECOMMENDDATA_OFFSET UNITYSDK_OFFSET(0xD38CBE0)

namespace RPG::Client
{
	inline static constexpr unsigned int LightConeGrowthGuide_TypeDefinitionIndex = 65550;

	class LightConeGrowthGuide : public ::System::Object
	{
	public:
		::RPG::AvatarSystem::IAvatar* _Avatar; // 0x10
		::IAHCDBNIDNG* _Factory; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONEGROWTHGUIDE_CTOR_OFFSET))(this);
		}

		static ::RPG::Client::LightConeGrowthGuide* Create(::RPG::AvatarSystem::IAvatar* a1)
		{
			return ((::RPG::Client::LightConeGrowthGuide*(*)(::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONEGROWTHGUIDE_CREATE_OFFSET))(a1);
		}

		::System::Boolean get_IsGrowable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONEGROWTHGUIDE_GET_ISGROWABLE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::NHPAANINLPK*>* GetGuideItems()
		{
			return ((::System::Collections::Generic::List_1<::NHPAANINLPK*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONEGROWTHGUIDE_GETGUIDEITEMS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::PIHNNIFOPOC*>* GetRecommendItems(::System::Boolean a1)
		{
			return ((::System::Collections::Generic::List_1<::PIHNNIFOPOC*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONEGROWTHGUIDE_GETRECOMMENDITEMS_OFFSET))(this, a1);
		}

		::System::Void RequestRecommendData(::System::Action_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONEGROWTHGUIDE_REQUESTRECOMMENDDATA_OFFSET))(this, a1);
		}

	};
}
