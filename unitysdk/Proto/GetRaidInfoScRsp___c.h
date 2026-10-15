#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Proto { class GetRaidInfoScRsp; }
namespace System { class Object; }

#define PROTO_GETRAIDINFOSCRSP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DFCB680)
#define PROTO_GETRAIDINFOSCRSP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DFCB6B0)
#define PROTO_GETRAIDINFOSCRSP___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1DFCB6C0)

namespace Proto
{
	inline static constexpr unsigned int GetRaidInfoScRsp___c_TypeDefinitionIndex = 32391;

	class GetRaidInfoScRsp___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("Proto", "<>c")->GetStaticField(0x4B300);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_GETRAIDINFOSCRSP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETRAIDINFOSCRSP___C_CTOR_OFFSET))(this);
		}

		::Proto::GetRaidInfoScRsp* __cctor_b__38_0()
		{
			return ((::Proto::GetRaidInfoScRsp*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETRAIDINFOSCRSP___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
}
