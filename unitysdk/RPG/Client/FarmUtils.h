#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FarmTypeConfig.h"
#include "unitysdk/System/Object.h"
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define RPG_CLIENT_FARMUTILS_ISCOCOON3_1_OFFSET UNITYSDK_OFFSET(0x1CBAC330)
#define RPG_CLIENT_FARMUTILS_ISCOCOON3_OFFSET UNITYSDK_OFFSET(0x1CBAC290)
#define RPG_CLIENT_FARMUTILS_ISCOCOONOTHER_1_OFFSET UNITYSDK_OFFSET(0x1CBAC160)
#define RPG_CLIENT_FARMUTILS_ISCOCOONOTHER_OFFSET UNITYSDK_OFFSET(0x1CBAC0C0)
#define RPG_CLIENT_FARMUTILS_ISCOCOON_1_OFFSET UNITYSDK_OFFSET(0x1CBAC370)
#define RPG_CLIENT_FARMUTILS_ISCOCOON_OFFSET UNITYSDK_OFFSET(0x1CBA8AA0)
#define RPG_CLIENT_FARMUTILS_ISDROPPINGONEOF_OFFSET UNITYSDK_OFFSET(0x1CBAC7E0)
#define RPG_CLIENT_FARMUTILS_ISDROPPING_OFFSET UNITYSDK_OFFSET(0x1CBAC670)
#define RPG_CLIENT_FARMUTILS_ISELEMENT_1_OFFSET UNITYSDK_OFFSET(0x1CBAC080)
#define RPG_CLIENT_FARMUTILS_ISELEMENT_OFFSET UNITYSDK_OFFSET(0x1CBA8B40)
#define RPG_CLIENT_FARMUTILS_ISWEEKLYCOCOON_1_OFFSET UNITYSDK_OFFSET(0x1CBAC250)
#define RPG_CLIENT_FARMUTILS_ISWEEKLYCOCOON_OFFSET UNITYSDK_OFFSET(0x1CBAC1B0)
#define RPG_CLIENT_FARMUTILS_MAXCHALLENGECOUNT_OFFSET UNITYSDK_OFFSET(0x1CBAC3D0)
#define RPG_CLIENT_FARMUTILS__CLAMPWEEKLYCOCOONLIMIT_OFFSET UNITYSDK_OFFSET(0x1CBAC4C0)

namespace RPG::Client
{
	inline static constexpr unsigned int FarmUtils_TypeDefinitionIndex = 65427;

	class FarmUtils : public ::System::Object
	{
	public:
		static ::System::Boolean IsElement(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FARMUTILS_ISELEMENT_OFFSET))(a1);
		}

		static ::System::Boolean IsCocoonOther(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FARMUTILS_ISCOCOONOTHER_OFFSET))(a1);
		}

		static ::System::Boolean IsWeeklyCocoon(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FARMUTILS_ISWEEKLYCOCOON_OFFSET))(a1);
		}

		static ::System::Boolean IsCocoon3(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FARMUTILS_ISCOCOON3_OFFSET))(a1);
		}

		static ::System::Boolean IsCocoon(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FARMUTILS_ISCOCOON_OFFSET))(a1);
		}

		static ::System::Boolean IsElement_1(::RPG::GameCore::FarmTypeConfig a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::FarmTypeConfig))((::PBYTE)hIl2Cpp + RPG_CLIENT_FARMUTILS_ISELEMENT_1_OFFSET))(a1);
		}

		static ::System::Boolean IsWeeklyCocoon_1(::RPG::GameCore::FarmTypeConfig a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::FarmTypeConfig))((::PBYTE)hIl2Cpp + RPG_CLIENT_FARMUTILS_ISWEEKLYCOCOON_1_OFFSET))(a1);
		}

		static ::System::Boolean IsCocoon3_1(::RPG::GameCore::FarmTypeConfig a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::FarmTypeConfig))((::PBYTE)hIl2Cpp + RPG_CLIENT_FARMUTILS_ISCOCOON3_1_OFFSET))(a1);
		}

		static ::System::Boolean IsCocoonOther_1(::RPG::GameCore::FarmTypeConfig a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::FarmTypeConfig))((::PBYTE)hIl2Cpp + RPG_CLIENT_FARMUTILS_ISCOCOONOTHER_1_OFFSET))(a1);
		}

		static ::System::Boolean IsCocoon_1(::RPG::GameCore::FarmTypeConfig a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::FarmTypeConfig))((::PBYTE)hIl2Cpp + RPG_CLIENT_FARMUTILS_ISCOCOON_1_OFFSET))(a1);
		}

		static ::System::UInt32 MaxChallengeCount(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::UInt32(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FARMUTILS_MAXCHALLENGECOUNT_OFFSET))(a1, a2);
		}

		static ::System::Boolean IsDropping(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FARMUTILS_ISDROPPING_OFFSET))(a1, a2);
		}

		static ::System::Boolean IsDroppingOneOf(::System::UInt32 a1, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a2)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FARMUTILS_ISDROPPINGONEOF_OFFSET))(a1, a2);
		}

		static ::System::UInt32 _ClampWeeklyCocoonLimit(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FARMUTILS__CLAMPWEEKLYCOCOONLIMIT_OFFSET))(a1);
		}

	};
}
