#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Proto { class UnlockTutorialScRsp; }
namespace System { class Object; }

#define PROTO_UNLOCKTUTORIALSCRSP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E01B360)
#define PROTO_UNLOCKTUTORIALSCRSP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E01B3A0)
#define PROTO_UNLOCKTUTORIALSCRSP___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E01B3B0)

namespace Proto
{
	inline static constexpr unsigned int UnlockTutorialScRsp___c_TypeDefinitionIndex = 35051;

	class UnlockTutorialScRsp___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("Proto", "<>c")->GetStaticField(0x47540);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_UNLOCKTUTORIALSCRSP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_UNLOCKTUTORIALSCRSP___C_CTOR_OFFSET))(this);
		}

		::Proto::UnlockTutorialScRsp* __cctor_b__28_0()
		{
			return ((::Proto::UnlockTutorialScRsp*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_UNLOCKTUTORIALSCRSP___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
}
