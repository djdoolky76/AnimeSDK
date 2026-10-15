#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class FollowByPlayerCustomRoutePoint; }
namespace System { class Object; }
namespace System { template <typename T> class Comparison_1; }

#define IBGNLKMHAEP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x15E34ED0)
#define IBGNLKMHAEP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x15E34F10)
#define IBGNLKMHAEP___C___CTOR_B__0_0_OFFSET UNITYSDK_OFFSET(0x15E34F20)

	class IBGNLKMHAEP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x48390);
		}

		static ::System::Comparison_1<::RPG::GameCore::FollowByPlayerCustomRoutePoint*>** StaticGet___9__0_0()
		{
			return (::System::Comparison_1<::RPG::GameCore::FollowByPlayerCustomRoutePoint*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x48398);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IBGNLKMHAEP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBGNLKMHAEP___C_CTOR_OFFSET))(this);
		}

		::System::Int32 __ctor_b__0_0(::RPG::GameCore::FollowByPlayerCustomRoutePoint* a1, ::RPG::GameCore::FollowByPlayerCustomRoutePoint* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::FollowByPlayerCustomRoutePoint*, ::RPG::GameCore::FollowByPlayerCustomRoutePoint*))((::PBYTE)hIl2Cpp + IBGNLKMHAEP___C___CTOR_B__0_0_OFFSET))(this, a1, a2);
		}

	};
