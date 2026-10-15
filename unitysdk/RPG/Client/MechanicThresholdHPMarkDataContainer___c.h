#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class MechanicThresholdHPMarkData; }
namespace System { class Object; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_MECHANICTHRESHOLDHPMARKDATACONTAINER___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xD6805C0)
#define RPG_CLIENT_MECHANICTHRESHOLDHPMARKDATACONTAINER___C_CTOR_OFFSET UNITYSDK_OFFSET(0xD6805F0)
#define RPG_CLIENT_MECHANICTHRESHOLDHPMARKDATACONTAINER___C__REFRESH_B__7_1_OFFSET UNITYSDK_OFFSET(0xD680600)

namespace RPG::Client
{
	inline static constexpr unsigned int MechanicThresholdHPMarkDataContainer___c_TypeDefinitionIndex = 71673;

	class MechanicThresholdHPMarkDataContainer___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x508E0);
		}

		static ::System::Comparison_1<::RPG::Client::MechanicThresholdHPMarkData*>** StaticGet___9__7_1()
		{
			return (::System::Comparison_1<::RPG::Client::MechanicThresholdHPMarkData*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x508E8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHANICTHRESHOLDHPMARKDATACONTAINER___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHANICTHRESHOLDHPMARKDATACONTAINER___C_CTOR_OFFSET))(this);
		}

		::System::Int32 _Refresh_b__7_1(::RPG::Client::MechanicThresholdHPMarkData* a1, ::RPG::Client::MechanicThresholdHPMarkData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::MechanicThresholdHPMarkData*, ::RPG::Client::MechanicThresholdHPMarkData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHANICTHRESHOLDHPMARKDATACONTAINER___C__REFRESH_B__7_1_OFFSET))(this, a1, a2);
		}

	};
}
