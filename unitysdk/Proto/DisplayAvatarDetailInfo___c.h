#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Proto { class DisplayAvatarDetailInfo; }
namespace System { class Object; }

#define PROTO_DISPLAYAVATARDETAILINFO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F29FC60)
#define PROTO_DISPLAYAVATARDETAILINFO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F29FCA0)
#define PROTO_DISPLAYAVATARDETAILINFO___C___CCTOR_B__83_0_OFFSET UNITYSDK_OFFSET(0x1F29FCB0)

namespace Proto
{
	inline static constexpr unsigned int DisplayAvatarDetailInfo___c_TypeDefinitionIndex = 29476;

	class DisplayAvatarDetailInfo___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("Proto", "<>c")->GetStaticField(0x4C3F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_DISPLAYAVATARDETAILINFO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_DISPLAYAVATARDETAILINFO___C_CTOR_OFFSET))(this);
		}

		::Proto::DisplayAvatarDetailInfo* __cctor_b__83_0()
		{
			return ((::Proto::DisplayAvatarDetailInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_DISPLAYAVATARDETAILINFO___C___CCTOR_B__83_0_OFFSET))(this);
		}

	};
}
