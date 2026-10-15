#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Proto { class FinishTutorialGuideScRsp; }
namespace System { class Object; }

#define PROTO_FINISHTUTORIALGUIDESCRSP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DFF2750)
#define PROTO_FINISHTUTORIALGUIDESCRSP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DFF2790)
#define PROTO_FINISHTUTORIALGUIDESCRSP___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1DFF27A0)

namespace Proto
{
	inline static constexpr unsigned int FinishTutorialGuideScRsp___c_TypeDefinitionIndex = 35063;

	class FinishTutorialGuideScRsp___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("Proto", "<>c")->GetStaticField(0x43B10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_FINISHTUTORIALGUIDESCRSP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_FINISHTUTORIALGUIDESCRSP___C_CTOR_OFFSET))(this);
		}

		::Proto::FinishTutorialGuideScRsp* __cctor_b__33_0()
		{
			return ((::Proto::FinishTutorialGuideScRsp*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_FINISHTUTORIALGUIDESCRSP___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
}
