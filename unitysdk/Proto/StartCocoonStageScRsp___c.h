#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Proto { class StartCocoonStageScRsp; }
namespace System { class Object; }

#define PROTO_STARTCOCOONSTAGESCRSP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E014460)
#define PROTO_STARTCOCOONSTAGESCRSP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0144A0)
#define PROTO_STARTCOCOONSTAGESCRSP___C___CCTOR_B__48_0_OFFSET UNITYSDK_OFFSET(0x1E0144B0)

namespace Proto
{
	class StartCocoonStageScRsp___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("Proto", "<>c")->GetStaticField(0x461C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_STARTCOCOONSTAGESCRSP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_STARTCOCOONSTAGESCRSP___C_CTOR_OFFSET))(this);
		}

		::Proto::StartCocoonStageScRsp* __cctor_b__48_0()
		{
			return ((::Proto::StartCocoonStageScRsp*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_STARTCOCOONSTAGESCRSP___C___CCTOR_B__48_0_OFFSET))(this);
		}

	};
}
