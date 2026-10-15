#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Proto { class DisplayAvatarDetailInfo; }
namespace System { class Object; }

#define PROTO_DISPLAYAVATARDETAILINFO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DFEE1D0)
#define PROTO_DISPLAYAVATARDETAILINFO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DFEE210)
#define PROTO_DISPLAYAVATARDETAILINFO___C___CCTOR_B__78_0_OFFSET UNITYSDK_OFFSET(0x1DFEE220)

namespace Proto
{
	class DisplayAvatarDetailInfo___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("Proto", "<>c")->GetStaticField(0x43A70);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_DISPLAYAVATARDETAILINFO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_DISPLAYAVATARDETAILINFO___C_CTOR_OFFSET))(this);
		}

		::Proto::DisplayAvatarDetailInfo* __cctor_b__78_0()
		{
			return ((::Proto::DisplayAvatarDetailInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_DISPLAYAVATARDETAILINFO___C___CCTOR_B__78_0_OFFSET))(this);
		}

	};
}
