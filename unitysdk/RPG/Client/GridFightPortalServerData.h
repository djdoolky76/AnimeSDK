#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BEEFLEJAOCN;
class CHCHAJIANIM;
class MOENFCDKGMJ;
namespace RPG::Client { class GridFightPortalData; }
namespace RPG::Client { class GridFightPortalSelectAction; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTPORTALSERVERDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xD1DFEF0)
#define RPG_CLIENT_GRIDFIGHTPORTALSERVERDATA_GET_ACTION_OFFSET UNITYSDK_OFFSET(0xD1DFED0)
#define RPG_CLIENT_GRIDFIGHTPORTALSERVERDATA_GET_PORTALDATALIST_OFFSET UNITYSDK_OFFSET(0xD1DFEB0)
#define RPG_CLIENT_GRIDFIGHTPORTALSERVERDATA_GET_SELECTEDPORTALDATA_OFFSET UNITYSDK_OFFSET(0xD1DFE90)
#define RPG_CLIENT_GRIDFIGHTPORTALSERVERDATA_SET_ACTION_OFFSET UNITYSDK_OFFSET(0xD1DFEE0)
#define RPG_CLIENT_GRIDFIGHTPORTALSERVERDATA_SET_PORTALDATALIST_OFFSET UNITYSDK_OFFSET(0xD1DFEC0)
#define RPG_CLIENT_GRIDFIGHTPORTALSERVERDATA_SET_SELECTEDPORTALDATA_OFFSET UNITYSDK_OFFSET(0xD1DFEA0)
#define RPG_CLIENT_GRIDFIGHTPORTALSERVERDATA_SYNC_1_OFFSET UNITYSDK_OFFSET(0xD1DF7E0)
#define RPG_CLIENT_GRIDFIGHTPORTALSERVERDATA_SYNC_2_OFFSET UNITYSDK_OFFSET(0xD1DFC20)
#define RPG_CLIENT_GRIDFIGHTPORTALSERVERDATA_SYNC_OFFSET UNITYSDK_OFFSET(0xD1DF720)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightPortalServerData_TypeDefinitionIndex = 65084;

	class GridFightPortalServerData : public ::System::Object
	{
	public:
		::RPG::Client::GridFightPortalSelectAction* _Action_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::GridFightPortalData*>* _PortalDataList_k__BackingField; // 0x18
		::RPG::Client::GridFightPortalData* _SelectedPortalData_k__BackingField; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPORTALSERVERDATA_CTOR_OFFSET))(this);
		}

		::System::Void Sync(::CHCHAJIANIM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CHCHAJIANIM*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPORTALSERVERDATA_SYNC_OFFSET))(this, a1);
		}

		::System::Void Sync_1(::BEEFLEJAOCN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BEEFLEJAOCN*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPORTALSERVERDATA_SYNC_1_OFFSET))(this, a1);
		}

		::System::Void Sync_2(::MOENFCDKGMJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MOENFCDKGMJ*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPORTALSERVERDATA_SYNC_2_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightPortalData* get_SelectedPortalData()
		{
			return ((::RPG::Client::GridFightPortalData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPORTALSERVERDATA_GET_SELECTEDPORTALDATA_OFFSET))(this);
		}

		::System::Void set_SelectedPortalData(::RPG::Client::GridFightPortalData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightPortalData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPORTALSERVERDATA_SET_SELECTEDPORTALDATA_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightPortalData*>* get_PortalDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightPortalData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPORTALSERVERDATA_GET_PORTALDATALIST_OFFSET))(this);
		}

		::System::Void set_PortalDataList(::System::Collections::Generic::List_1<::RPG::Client::GridFightPortalData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::GridFightPortalData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPORTALSERVERDATA_SET_PORTALDATALIST_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightPortalSelectAction* get_Action()
		{
			return ((::RPG::Client::GridFightPortalSelectAction*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPORTALSERVERDATA_GET_ACTION_OFFSET))(this);
		}

		::System::Void set_Action(::RPG::Client::GridFightPortalSelectAction* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightPortalSelectAction*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPORTALSERVERDATA_SET_ACTION_OFFSET))(this, a1);
		}

	};
}
