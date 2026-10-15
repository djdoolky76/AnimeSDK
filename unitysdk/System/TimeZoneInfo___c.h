#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { class TimeZoneInfo_AdjustmentRule; }
namespace System { template <typename T> class Comparison_1; }

#define SYSTEM_TIMEZONEINFO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C14C020)
#define SYSTEM_TIMEZONEINFO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1C14C060)
#define SYSTEM_TIMEZONEINFO___C__CREATELOCALUNITY_B__19_0_OFFSET UNITYSDK_OFFSET(0x1C14C070)

namespace System
{
	inline static constexpr unsigned int TimeZoneInfo___c_TypeDefinitionIndex = 349;

	class TimeZoneInfo___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::System::Object*>** StaticGet___9__19_0()
		{
			return (::System::Comparison_1<::System::Object*>**)UnitySDK::FromName("System", "<>c")->GetStaticField(0x2AC50);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("System", "<>c")->GetStaticField(0x2AC58);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO___C_CTOR_OFFSET))(this);
		}

		::System::Int32 _CreateLocalUnity_b__19_0(::System::TimeZoneInfo_AdjustmentRule* a1, ::System::TimeZoneInfo_AdjustmentRule* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::TimeZoneInfo_AdjustmentRule*, ::System::TimeZoneInfo_AdjustmentRule*))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO___C__CREATELOCALUNITY_B__19_0_OFFSET))(this, a1, a2);
		}

	};
}
