#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Proto { class NewMailScNotify; }
namespace System { class Object; }

#define PROTO_NEWMAILSCNOTIFY___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F2D8690)
#define PROTO_NEWMAILSCNOTIFY___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F2D86C0)
#define PROTO_NEWMAILSCNOTIFY___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1F2D86D0)

namespace Proto
{
	inline static constexpr unsigned int NewMailScNotify___c_TypeDefinitionIndex = 31409;

	class NewMailScNotify___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("Proto", "<>c")->GetStaticField(0x511A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_NEWMAILSCNOTIFY___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_NEWMAILSCNOTIFY___C_CTOR_OFFSET))(this);
		}

		::Proto::NewMailScNotify* __cctor_b__23_0()
		{
			return ((::Proto::NewMailScNotify*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_NEWMAILSCNOTIFY___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
}
