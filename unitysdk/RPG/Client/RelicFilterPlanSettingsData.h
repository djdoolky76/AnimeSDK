#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BNAILMNNGIF;
namespace RPG::Client { class RelicFilterPlanSettingsData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_RELICFILTERPLANSETTINGSDATA_CREATE_1_OFFSET UNITYSDK_OFFSET(0xDE67BE0)
#define RPG_CLIENT_RELICFILTERPLANSETTINGSDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xDE67A00)
#define RPG_CLIENT_RELICFILTERPLANSETTINGSDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xDE686E0)
#define RPG_CLIENT_RELICFILTERPLANSETTINGSDATA_FILLTOSERVERDATA_OFFSET UNITYSDK_OFFSET(0xDE67EF0)

namespace RPG::Client
{
	inline static constexpr unsigned int RelicFilterPlanSettingsData_TypeDefinitionIndex = 66888;

	class RelicFilterPlanSettingsData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* SphereMainPropertyList; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* HandMainPropertyList; // 0x18
		::System::Collections::Generic::List_1<::System::UInt32>* RopeMainPropertyList; // 0x20
		::System::Collections::Generic::List_1<::System::UInt32>* BodyMainPropertyList; // 0x28
		::System::Collections::Generic::List_1<::System::UInt32>* SubPropertyList; // 0x30
		::System::Collections::Generic::List_1<::System::UInt32>* FootMainPropertyList; // 0x38
		::System::Collections::Generic::List_1<::System::UInt32>* RelicSetList; // 0x40
		::System::Collections::Generic::List_1<::System::UInt32>* HeadMainPropertyList; // 0x48
		::System::Boolean IsIncludeFilterSubProperty; // 0x50
		::System::Byte _padding0[0x3];
		::System::UInt32 RarityBitset; // 0x54
		::System::UInt32 SubPropertyNum; // 0x58
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICFILTERPLANSETTINGSDATA_CTOR_OFFSET))(this);
		}

		static ::RPG::Client::RelicFilterPlanSettingsData* Create()
		{
			return ((::RPG::Client::RelicFilterPlanSettingsData*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICFILTERPLANSETTINGSDATA_CREATE_OFFSET))();
		}

		static ::RPG::Client::RelicFilterPlanSettingsData* Create_1(::BNAILMNNGIF* a1)
		{
			return ((::RPG::Client::RelicFilterPlanSettingsData*(*)(::BNAILMNNGIF*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICFILTERPLANSETTINGSDATA_CREATE_1_OFFSET))(a1);
		}

		::System::Void FillToServerData(::BNAILMNNGIF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BNAILMNNGIF*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICFILTERPLANSETTINGSDATA_FILLTOSERVERDATA_OFFSET))(this, a1);
		}

	};
}
