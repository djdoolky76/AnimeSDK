#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Proto { class GetMissionStatusScRsp; }
namespace System { class Object; }

#define PROTO_GETMISSIONSTATUSSCRSP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DFCA7F0)
#define PROTO_GETMISSIONSTATUSSCRSP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DFCA820)
#define PROTO_GETMISSIONSTATUSSCRSP___C___CCTOR_B__53_0_OFFSET UNITYSDK_OFFSET(0x1DFCA830)

namespace Proto
{
	inline static constexpr unsigned int GetMissionStatusScRsp___c_TypeDefinitionIndex = 30961;

	class GetMissionStatusScRsp___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("Proto", "<>c")->GetStaticField(0x4B0B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_GETMISSIONSTATUSSCRSP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETMISSIONSTATUSSCRSP___C_CTOR_OFFSET))(this);
		}

		::Proto::GetMissionStatusScRsp* __cctor_b__53_0()
		{
			return ((::Proto::GetMissionStatusScRsp*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETMISSIONSTATUSSCRSP___C___CCTOR_B__53_0_OFFSET))(this);
		}

	};
}
