#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KJIOGEFIOCD;
namespace System { class Object; }
namespace System { template <typename T> class Predicate_1; }

#define HILNADIJDAJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x15CEBB60)
#define HILNADIJDAJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x15CEBBA0)
#define HILNADIJDAJ___C__TRYTRIGGERPAMCHATGREETING_B__2_0_OFFSET UNITYSDK_OFFSET(0x15CEBBD0)
#define HILNADIJDAJ___C__TRYTRIGGERPAMCHATHUDBUBBLE_B__1_0_OFFSET UNITYSDK_OFFSET(0x15CEBBB0)

inline static constexpr unsigned int HILNADIJDAJ___c_TypeDefinitionIndex = 63284;

	class HILNADIJDAJ___c : public ::System::Object
	{
	public:
		static ::System::Predicate_1<::KJIOGEFIOCD*>** StaticGet___9__1_0()
		{
			return (::System::Predicate_1<::KJIOGEFIOCD*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1DA80);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1DA88);
		}

		static ::System::Predicate_1<::KJIOGEFIOCD*>** StaticGet___9__2_0()
		{
			return (::System::Predicate_1<::KJIOGEFIOCD*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1DA90);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HILNADIJDAJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HILNADIJDAJ___C_CTOR_OFFSET))(this);
		}

		::System::Boolean _TryTriggerPamChatHudBubble_b__1_0(::KJIOGEFIOCD* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KJIOGEFIOCD*))((::PBYTE)hIl2Cpp + HILNADIJDAJ___C__TRYTRIGGERPAMCHATHUDBUBBLE_B__1_0_OFFSET))(this, a1);
		}

		::System::Boolean _TryTriggerPamChatGreeting_b__2_0(::KJIOGEFIOCD* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KJIOGEFIOCD*))((::PBYTE)hIl2Cpp + HILNADIJDAJ___C__TRYTRIGGERPAMCHATGREETING_B__2_0_OFFSET))(this, a1);
		}

	};
