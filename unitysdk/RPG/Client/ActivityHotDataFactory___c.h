#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class IActivityHotData; }
namespace System { class Object; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_ACTIVITYHOTDATAFACTORY___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D1255B0)
#define RPG_CLIENT_ACTIVITYHOTDATAFACTORY___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1D1255F0)
#define RPG_CLIENT_ACTIVITYHOTDATAFACTORY___C__CREATEACTIVITYVERSIONHOTMERGEDDATA_B__2_0_OFFSET UNITYSDK_OFFSET(0x1D125600)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityHotDataFactory___c_TypeDefinitionIndex = 62920;

	class ActivityHotDataFactory___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x1C660);
		}

		static ::System::Comparison_1<::RPG::Client::IActivityHotData*>** StaticGet___9__2_0()
		{
			return (::System::Comparison_1<::RPG::Client::IActivityHotData*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x1C668);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHOTDATAFACTORY___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHOTDATAFACTORY___C_CTOR_OFFSET))(this);
		}

		::System::Int32 _CreateActivityVersionHotMergedData_b__2_0(::RPG::Client::IActivityHotData* a1, ::RPG::Client::IActivityHotData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::IActivityHotData*, ::RPG::Client::IActivityHotData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHOTDATAFACTORY___C__CREATEACTIVITYVERSIONHOTMERGEDDATA_B__2_0_OFFSET))(this, a1, a2);
		}

	};
}
