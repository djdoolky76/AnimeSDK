#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Proto { class GetBasicInfoScRsp; }
namespace System { class Object; }

#define PROTO_GETBASICINFOSCRSP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DFF5B60)
#define PROTO_GETBASICINFOSCRSP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DFF5B90)
#define PROTO_GETBASICINFOSCRSP___C___CCTOR_B__68_0_OFFSET UNITYSDK_OFFSET(0x1DFF5BA0)

namespace Proto
{
	inline static constexpr unsigned int GetBasicInfoScRsp___c_TypeDefinitionIndex = 32039;

	class GetBasicInfoScRsp___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("Proto", "<>c")->GetStaticField(0x43B80);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_GETBASICINFOSCRSP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETBASICINFOSCRSP___C_CTOR_OFFSET))(this);
		}

		::Proto::GetBasicInfoScRsp* __cctor_b__68_0()
		{
			return ((::Proto::GetBasicInfoScRsp*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETBASICINFOSCRSP___C___CCTOR_B__68_0_OFFSET))(this);
		}

	};
}
