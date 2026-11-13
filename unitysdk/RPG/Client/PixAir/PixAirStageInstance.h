#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::PixAir { class PixAirAreaInstance; }
namespace RPG::Client::PixAir { class PixAirStageData; }
namespace RPG::Client::PixAir { class PixAirStageInstance; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PIXAIR_PIXAIRSTAGEINSTANCE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D82DB00)
#define RPG_CLIENT_PIXAIR_PIXAIRSTAGEINSTANCE_GETAREACOUNT_OFFSET UNITYSDK_OFFSET(0x1D82D9F0)
#define RPG_CLIENT_PIXAIR_PIXAIRSTAGEINSTANCE_GETAREAINDEXBYID_OFFSET UNITYSDK_OFFSET(0x1D82BDF0)
#define RPG_CLIENT_PIXAIR_PIXAIRSTAGEINSTANCE_GET_AREAINSTANCES_OFFSET UNITYSDK_OFFSET(0x1D82DA50)
#define RPG_CLIENT_PIXAIR_PIXAIRSTAGEINSTANCE_GET_STAGEDATA_OFFSET UNITYSDK_OFFSET(0x1D82D9D0)
#define RPG_CLIENT_PIXAIR_PIXAIRSTAGEINSTANCE_GET_STAGEID_OFFSET UNITYSDK_OFFSET(0x1D82D9B0)
#define RPG_CLIENT_PIXAIR_PIXAIRSTAGEINSTANCE_SET_AREAINSTANCES_OFFSET UNITYSDK_OFFSET(0x1D82DA60)
#define RPG_CLIENT_PIXAIR_PIXAIRSTAGEINSTANCE_SET_STAGEDATA_OFFSET UNITYSDK_OFFSET(0x1D82D9E0)
#define RPG_CLIENT_PIXAIR_PIXAIRSTAGEINSTANCE_SET_STAGEID_OFFSET UNITYSDK_OFFSET(0x1D82D9C0)
#define RPG_CLIENT_PIXAIR_PIXAIRSTAGEINSTANCE_TRYCREATE_OFFSET UNITYSDK_OFFSET(0x1D82DA70)

namespace RPG::Client::PixAir
{
	inline static constexpr unsigned int PixAirStageInstance_TypeDefinitionIndex = 82137;

	class PixAirStageInstance : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::PixAir::PixAirAreaInstance*>* _AreaInstances_k__BackingField; // 0x10
		::RPG::Client::PixAir::PixAirStageData* _StageData_k__BackingField; // 0x18
		::System::UInt32 _StageID_k__BackingField; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRSTAGEINSTANCE_CTOR_OFFSET))(this);
		}

		::System::UInt32 get_StageID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRSTAGEINSTANCE_GET_STAGEID_OFFSET))(this);
		}

		::System::Void set_StageID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRSTAGEINSTANCE_SET_STAGEID_OFFSET))(this, a1);
		}

		::RPG::Client::PixAir::PixAirStageData* get_StageData()
		{
			return ((::RPG::Client::PixAir::PixAirStageData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRSTAGEINSTANCE_GET_STAGEDATA_OFFSET))(this);
		}

		::System::Void set_StageData(::RPG::Client::PixAir::PixAirStageData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PixAir::PixAirStageData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRSTAGEINSTANCE_SET_STAGEDATA_OFFSET))(this, a1);
		}

		::System::Int32 GetAreaIndexByID(::System::UInt32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRSTAGEINSTANCE_GETAREAINDEXBYID_OFFSET))(this, a1);
		}

		::System::Int32 GetAreaCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRSTAGEINSTANCE_GETAREACOUNT_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::PixAir::PixAirAreaInstance*>* get_AreaInstances()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::PixAir::PixAirAreaInstance*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRSTAGEINSTANCE_GET_AREAINSTANCES_OFFSET))(this);
		}

		::System::Void set_AreaInstances(::System::Collections::Generic::List_1<::RPG::Client::PixAir::PixAirAreaInstance*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::PixAir::PixAirAreaInstance*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRSTAGEINSTANCE_SET_AREAINSTANCES_OFFSET))(this, a1);
		}

		static ::RPG::Client::PixAir::PixAirStageInstance* TryCreate(::System::UInt32 a1, ::RPG::Client::PixAir::PixAirStageData* a2)
		{
			return ((::RPG::Client::PixAir::PixAirStageInstance*(*)(::System::UInt32, ::RPG::Client::PixAir::PixAirStageData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRSTAGEINSTANCE_TRYCREATE_OFFSET))(a1, a2);
		}

	};
}
