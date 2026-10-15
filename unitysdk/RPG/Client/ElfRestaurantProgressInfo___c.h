#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class ElfRestaurantProgressData; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_ELFRESTAURANTPROGRESSINFO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xCDD9BB0)
#define RPG_CLIENT_ELFRESTAURANTPROGRESSINFO___C_CTOR_OFFSET UNITYSDK_OFFSET(0xCDD9BF0)
#define RPG_CLIENT_ELFRESTAURANTPROGRESSINFO___C__GETMENUUNLOCKPROGRESS_B__9_0_OFFSET UNITYSDK_OFFSET(0xCDD9C00)
#define RPG_CLIENT_ELFRESTAURANTPROGRESSINFO___C__GET_PROGRESSLIST_B__39_0_OFFSET UNITYSDK_OFFSET(0xCDD9C50)

namespace RPG::Client
{
	inline static constexpr unsigned int ElfRestaurantProgressInfo___c_TypeDefinitionIndex = 63726;

	class ElfRestaurantProgressInfo___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::ElfRestaurantProgressData*, ::System::UInt32>** StaticGet___9__39_0()
		{
			return (::System::Func_2<::RPG::Client::ElfRestaurantProgressData*, ::System::UInt32>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x49750);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x49758);
		}

		static ::System::Comparison_1<::RPG::Client::ElfRestaurantProgressData*>** StaticGet___9__9_0()
		{
			return (::System::Comparison_1<::RPG::Client::ElfRestaurantProgressData*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x49760);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTPROGRESSINFO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTPROGRESSINFO___C_CTOR_OFFSET))(this);
		}

		::System::Int32 _GetMenuUnlockProgress_b__9_0(::RPG::Client::ElfRestaurantProgressData* a1, ::RPG::Client::ElfRestaurantProgressData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ElfRestaurantProgressData*, ::RPG::Client::ElfRestaurantProgressData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTPROGRESSINFO___C__GETMENUUNLOCKPROGRESS_B__9_0_OFFSET))(this, a1, a2);
		}

		::System::UInt32 _get_ProgressList_b__39_0(::RPG::Client::ElfRestaurantProgressData* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::ElfRestaurantProgressData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTPROGRESSINFO___C__GET_PROGRESSLIST_B__39_0_OFFSET))(this, a1);
		}

	};
}
