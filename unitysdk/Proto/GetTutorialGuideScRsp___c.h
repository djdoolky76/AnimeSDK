#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Proto { class GetTutorialGuideScRsp; }
namespace System { class Object; }

#define PROTO_GETTUTORIALGUIDESCRSP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DFFA500)
#define PROTO_GETTUTORIALGUIDESCRSP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DFFA530)
#define PROTO_GETTUTORIALGUIDESCRSP___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1DFFA540)

namespace Proto
{
	inline static constexpr unsigned int GetTutorialGuideScRsp___c_TypeDefinitionIndex = 35047;

	class GetTutorialGuideScRsp___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("Proto", "<>c")->GetStaticField(0x43C60);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_GETTUTORIALGUIDESCRSP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETTUTORIALGUIDESCRSP___C_CTOR_OFFSET))(this);
		}

		::Proto::GetTutorialGuideScRsp* __cctor_b__28_0()
		{
			return ((::Proto::GetTutorialGuideScRsp*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETTUTORIALGUIDESCRSP___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
}
