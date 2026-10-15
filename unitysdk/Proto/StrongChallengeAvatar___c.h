#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Proto { class StrongChallengeAvatar; }
namespace System { class Object; }

#define PROTO_STRONGCHALLENGEAVATAR___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E014DD0)
#define PROTO_STRONGCHALLENGEAVATAR___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E014E10)
#define PROTO_STRONGCHALLENGEAVATAR___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E014E20)

namespace Proto
{
	inline static constexpr unsigned int StrongChallengeAvatar___c_TypeDefinitionIndex = 34295;

	class StrongChallengeAvatar___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("Proto", "<>c")->GetStaticField(0x463A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_STRONGCHALLENGEAVATAR___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_STRONGCHALLENGEAVATAR___C_CTOR_OFFSET))(this);
		}

		::Proto::StrongChallengeAvatar* __cctor_b__28_0()
		{
			return ((::Proto::StrongChallengeAvatar*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_STRONGCHALLENGEAVATAR___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
}
