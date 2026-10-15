#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DJEGNALJODF;
class NHPAANINLPK;
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class RelicGrowthGuide; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_RELICGROWTHGUIDE_CREATE_OFFSET UNITYSDK_OFFSET(0xDE731E0)
#define RPG_CLIENT_RELICGROWTHGUIDE_CTOR_OFFSET UNITYSDK_OFFSET(0xDE732A0)
#define RPG_CLIENT_RELICGROWTHGUIDE_GETGUIDEITEMS_OFFSET UNITYSDK_OFFSET(0xDE734C0)
#define RPG_CLIENT_RELICGROWTHGUIDE_GETRECOMMENDITEMS_OFFSET UNITYSDK_OFFSET(0xDE73520)
#define RPG_CLIENT_RELICGROWTHGUIDE_GET_ISGROWABLE_OFFSET UNITYSDK_OFFSET(0xDE732F0)
#define RPG_CLIENT_RELICGROWTHGUIDE_REQUESTRECOMMENDDATA_OFFSET UNITYSDK_OFFSET(0xDE73580)

namespace RPG::Client
{
	inline static constexpr unsigned int RelicGrowthGuide_TypeDefinitionIndex = 65555;

	class RelicGrowthGuide : public ::System::Object
	{
	public:
		::RPG::AvatarSystem::IAvatar* _Avatar; // 0x10
		::DJEGNALJODF* _Factory; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICGROWTHGUIDE_CTOR_OFFSET))(this);
		}

		static ::RPG::Client::RelicGrowthGuide* Create(::RPG::AvatarSystem::IAvatar* a1)
		{
			return ((::RPG::Client::RelicGrowthGuide*(*)(::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICGROWTHGUIDE_CREATE_OFFSET))(a1);
		}

		::System::Boolean get_IsGrowable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICGROWTHGUIDE_GET_ISGROWABLE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::NHPAANINLPK*>* GetGuideItems()
		{
			return ((::System::Collections::Generic::List_1<::NHPAANINLPK*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICGROWTHGUIDE_GETGUIDEITEMS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::NHPAANINLPK*>* GetRecommendItems()
		{
			return ((::System::Collections::Generic::List_1<::NHPAANINLPK*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICGROWTHGUIDE_GETRECOMMENDITEMS_OFFSET))(this);
		}

		::System::Void RequestRecommendData(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICGROWTHGUIDE_REQUESTRECOMMENDDATA_OFFSET))(this, a1);
		}

	};
}
