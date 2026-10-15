#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JLHEBEDKIPC;
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_RELICPRESETMODEL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xDE7F910)
#define RPG_CLIENT_RELICPRESETMODEL___C_CTOR_OFFSET UNITYSDK_OFFSET(0xDE7F950)
#define RPG_CLIENT_RELICPRESETMODEL___C__GETAVATARRELICPRESETPLAN_B__10_0_OFFSET UNITYSDK_OFFSET(0xDE7F960)

namespace RPG::Client
{
	inline static constexpr unsigned int RelicPresetModel___c_TypeDefinitionIndex = 66867;

	class RelicPresetModel___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x59700);
		}

		static ::System::Action_1<::JLHEBEDKIPC*>** StaticGet___9__10_0()
		{
			return (::System::Action_1<::JLHEBEDKIPC*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x59708);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETMODEL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETMODEL___C_CTOR_OFFSET))(this);
		}

		::System::Void _GetAvatarRelicPresetPlan_b__10_0(::JLHEBEDKIPC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JLHEBEDKIPC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETMODEL___C__GETAVATARRELICPRESETPLAN_B__10_0_OFFSET))(this, a1);
		}

	};
}
