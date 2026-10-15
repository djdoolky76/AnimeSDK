#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Proto { class HeliobusChallengeLineup; }
namespace System { class Object; }

#define PROTO_HELIOBUSCHALLENGELINEUP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DFFD6E0)
#define PROTO_HELIOBUSCHALLENGELINEUP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DFFD710)
#define PROTO_HELIOBUSCHALLENGELINEUP___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1DFFD720)

namespace Proto
{
	inline static constexpr unsigned int HeliobusChallengeLineup___c_TypeDefinitionIndex = 29770;

	class HeliobusChallengeLineup___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("Proto", "<>c")->GetStaticField(0x43D00);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_HELIOBUSCHALLENGELINEUP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_HELIOBUSCHALLENGELINEUP___C_CTOR_OFFSET))(this);
		}

		::Proto::HeliobusChallengeLineup* __cctor_b__33_0()
		{
			return ((::Proto::HeliobusChallengeLineup*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_HELIOBUSCHALLENGELINEUP___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
}
