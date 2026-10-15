#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::AvatarSystem { class IAvatar; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_AVATAREDUCATIONCOMPARERFACTORY___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xC6D0B10)
#define RPG_CLIENT_AVATAREDUCATIONCOMPARERFACTORY___C_CTOR_OFFSET UNITYSDK_OFFSET(0xC6D0B50)
#define RPG_CLIENT_AVATAREDUCATIONCOMPARERFACTORY___C__CREATEFORHIGHLIGHT_B__0_0_OFFSET UNITYSDK_OFFSET(0xC6D0B60)

namespace RPG::Client
{
	class AvatarEducationComparerFactory___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x59D00);
		}

		static ::System::Func_2<::RPG::AvatarSystem::IAvatar*, ::System::Boolean>** StaticGet___9__0_0()
		{
			return (::System::Func_2<::RPG::AvatarSystem::IAvatar*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x59D08);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAREDUCATIONCOMPARERFACTORY___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAREDUCATIONCOMPARERFACTORY___C_CTOR_OFFSET))(this);
		}

		::System::Boolean _CreateForHighlight_b__0_0(::RPG::AvatarSystem::IAvatar* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATAREDUCATIONCOMPARERFACTORY___C__CREATEFORHIGHLIGHT_B__0_0_OFFSET))(this, a1);
		}

	};
}
