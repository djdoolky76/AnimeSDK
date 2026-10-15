#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Exception; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREPINOPERATOR___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xDE97EA0)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREPINOPERATOR___C_CTOR_OFFSET UNITYSDK_OFFSET(0xDE97EE0)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREPINOPERATOR___C__PINRELIC_B__17_1_OFFSET UNITYSDK_OFFSET(0xDE97EF0)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREPINOPERATOR___C__UNPINRELIC_B__18_1_OFFSET UNITYSDK_OFFSET(0xDE97F80)

namespace RPG::Client::RelicSmartSuit
{
	inline static constexpr unsigned int RelicSmartSuitComparePinOperator___c_TypeDefinitionIndex = 74401;

	class RelicSmartSuitComparePinOperator___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client.RelicSmartSuit", "<>c")->GetStaticField(0x5A830);
		}

		static ::System::Action_1<::System::Exception*>** StaticGet___9__17_1()
		{
			return (::System::Action_1<::System::Exception*>**)UnitySDK::FromName("RPG.Client.RelicSmartSuit", "<>c")->GetStaticField(0x5A838);
		}

		static ::System::Action_1<::System::Exception*>** StaticGet___9__18_1()
		{
			return (::System::Action_1<::System::Exception*>**)UnitySDK::FromName("RPG.Client.RelicSmartSuit", "<>c")->GetStaticField(0x5A840);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREPINOPERATOR___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREPINOPERATOR___C_CTOR_OFFSET))(this);
		}

		::System::Void _PinRelic_b__17_1(::System::Exception* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREPINOPERATOR___C__PINRELIC_B__17_1_OFFSET))(this, a1);
		}

		::System::Void _UnPinRelic_b__18_1(::System::Exception* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREPINOPERATOR___C__UNPINRELIC_B__18_1_OFFSET))(this, a1);
		}

	};
}
