#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BGGIHLHFPGA;
class FJIFFMGIAHL;
namespace RPG::Client { class LightConeRecommendData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_LIGHTCONERECOMMENDDATA_CREATEBYCONFIGDATA_OFFSET UNITYSDK_OFFSET(0x1CEF09D0)
#define RPG_CLIENT_LIGHTCONERECOMMENDDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x1CEF01F0)
#define RPG_CLIENT_LIGHTCONERECOMMENDDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1CEF0980)
#define RPG_CLIENT_LIGHTCONERECOMMENDDATA_GET_AVATARID_OFFSET UNITYSDK_OFFSET(0x1CEF00B0)
#define RPG_CLIENT_LIGHTCONERECOMMENDDATA_GET_ISEXPIRED_OFFSET UNITYSDK_OFFSET(0x1CEF00D0)
#define RPG_CLIENT_LIGHTCONERECOMMENDDATA_SET_AVATARID_OFFSET UNITYSDK_OFFSET(0x1CEF00C0)
#define RPG_CLIENT_LIGHTCONERECOMMENDDATA__SORTLIGHTCONEBYUSAGERATE_OFFSET UNITYSDK_OFFSET(0x1CEF0D90)

namespace RPG::Client
{
	inline static constexpr unsigned int LightConeRecommendData_TypeDefinitionIndex = 68748;

	class LightConeRecommendData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::FJIFFMGIAHL*>* RecommendLightCones; // 0x10
		::System::UInt32 _AvatarID_k__BackingField; // 0x18
		::System::UInt32 _TimeStamp; // 0x1C
		// static const ::System::Object _EXPIRED_TIME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONERECOMMENDDATA_CTOR_OFFSET))(this);
		}

		::System::UInt32 get_AvatarID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONERECOMMENDDATA_GET_AVATARID_OFFSET))(this);
		}

		::System::Void set_AvatarID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONERECOMMENDDATA_SET_AVATARID_OFFSET))(this, a1);
		}

		::System::Boolean get_IsExpired()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONERECOMMENDDATA_GET_ISEXPIRED_OFFSET))(this);
		}

		static ::RPG::Client::LightConeRecommendData* Create(::BGGIHLHFPGA* a1)
		{
			return ((::RPG::Client::LightConeRecommendData*(*)(::BGGIHLHFPGA*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONERECOMMENDDATA_CREATE_OFFSET))(a1);
		}

		static ::RPG::Client::LightConeRecommendData* CreateByConfigData(::System::UInt32 a1)
		{
			return ((::RPG::Client::LightConeRecommendData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONERECOMMENDDATA_CREATEBYCONFIGDATA_OFFSET))(a1);
		}

		static ::System::Int32 _SortLightConeByUsageRate(::FJIFFMGIAHL* a1, ::FJIFFMGIAHL* a2)
		{
			return ((::System::Int32(*)(::FJIFFMGIAHL*, ::FJIFFMGIAHL*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIGHTCONERECOMMENDDATA__SORTLIGHTCONEBYUSAGERATE_OFFSET))(a1, a2);
		}

	};
}
