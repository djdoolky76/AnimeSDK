#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Proto { class UnlockTutorialGuideScRsp; }
namespace System { class Object; }

#define PROTO_UNLOCKTUTORIALGUIDESCRSP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F2EAF20)
#define PROTO_UNLOCKTUTORIALGUIDESCRSP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F2EAF50)
#define PROTO_UNLOCKTUTORIALGUIDESCRSP___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1F2EAF60)

namespace Proto
{
	inline static constexpr unsigned int UnlockTutorialGuideScRsp___c_TypeDefinitionIndex = 35983;

	class UnlockTutorialGuideScRsp___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("Proto", "<>c")->GetStaticField(0x53260);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_UNLOCKTUTORIALGUIDESCRSP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_UNLOCKTUTORIALGUIDESCRSP___C_CTOR_OFFSET))(this);
		}

		::Proto::UnlockTutorialGuideScRsp* __cctor_b__28_0()
		{
			return ((::Proto::UnlockTutorialGuideScRsp*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_UNLOCKTUTORIALGUIDESCRSP___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
}
