#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KJKBPJMOEJD;
namespace System { class Object; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_REWARDDISPLAYSORTCOMPARER___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x19758BA0)
#define RPG_CLIENT_REWARDDISPLAYSORTCOMPARER___C_CTOR_OFFSET UNITYSDK_OFFSET(0x19758BD0)
#define RPG_CLIENT_REWARDDISPLAYSORTCOMPARER___C__LOADCOMPARECONFIG_B__1_0_OFFSET UNITYSDK_OFFSET(0x19758BE0)

namespace RPG::Client
{
	inline static constexpr unsigned int RewardDisplaySortComparer___c_TypeDefinitionIndex = 67666;

	class RewardDisplaySortComparer___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x6FF80);
		}

		static ::System::Comparison_1<::KJKBPJMOEJD*>** StaticGet___9__1_0()
		{
			return (::System::Comparison_1<::KJKBPJMOEJD*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x6FF88);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_REWARDDISPLAYSORTCOMPARER___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_REWARDDISPLAYSORTCOMPARER___C_CTOR_OFFSET))(this);
		}

		::System::Int32 _LoadCompareConfig_b__1_0(::KJKBPJMOEJD* a1, ::KJKBPJMOEJD* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::KJKBPJMOEJD*, ::KJKBPJMOEJD*))((::PBYTE)hIl2Cpp + RPG_CLIENT_REWARDDISPLAYSORTCOMPARER___C__LOADCOMPARECONFIG_B__1_0_OFFSET))(this, a1, a2);
		}

	};
}
