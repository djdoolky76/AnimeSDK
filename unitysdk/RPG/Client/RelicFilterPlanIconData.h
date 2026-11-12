#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KJDLIPEIAAK;
namespace RPG::Client { class RelicFilterPlanIconData; }

#define RPG_CLIENT_RELICFILTERPLANICONDATA_CREATE_1_OFFSET UNITYSDK_OFFSET(0xE8DBAB0)
#define RPG_CLIENT_RELICFILTERPLANICONDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xE8DB8F0)
#define RPG_CLIENT_RELICFILTERPLANICONDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xE8DC390)
#define RPG_CLIENT_RELICFILTERPLANICONDATA_FILLTOSERVERDATA_OFFSET UNITYSDK_OFFSET(0xE8DBFA0)

namespace RPG::Client
{
	inline static constexpr unsigned int RelicFilterPlanIconData_TypeDefinitionIndex = 68833;

	class RelicFilterPlanIconData : public ::System::Object
	{
	public:
		::System::Boolean IsAvatarIcon; // 0x10
		::System::Byte _padding0[0x3];
		::System::UInt32 IconId; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICFILTERPLANICONDATA_CTOR_OFFSET))(this);
		}

		static ::RPG::Client::RelicFilterPlanIconData* Create()
		{
			return ((::RPG::Client::RelicFilterPlanIconData*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICFILTERPLANICONDATA_CREATE_OFFSET))();
		}

		static ::RPG::Client::RelicFilterPlanIconData* Create_1(::KJDLIPEIAAK* a1)
		{
			return ((::RPG::Client::RelicFilterPlanIconData*(*)(::KJDLIPEIAAK*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICFILTERPLANICONDATA_CREATE_1_OFFSET))(a1);
		}

		::System::Void FillToServerData(::KJDLIPEIAAK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KJDLIPEIAAK*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICFILTERPLANICONDATA_FILLTOSERVERDATA_OFFSET))(this, a1);
		}

	};
}
