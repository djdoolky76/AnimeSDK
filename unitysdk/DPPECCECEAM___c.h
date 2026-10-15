#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DPPECCECEAM;
namespace System { class Action; }
namespace System { class Object; }

#define DPPECCECEAM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x12665B70)
#define DPPECCECEAM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x12665BA0)
#define DPPECCECEAM___C__GET__FIXEDUPDATEACTION_B__30_0_OFFSET UNITYSDK_OFFSET(0x12665BB0)
#define DPPECCECEAM___C__GET__LATEFIXEDUPDATEACTION_B__32_0_OFFSET UNITYSDK_OFFSET(0x12665BD0)

	class DPPECCECEAM___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__30_0()
		{
			return (::System::Action**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6FD00);
		}

		static ::System::Action** StaticGet___9__32_0()
		{
			return (::System::Action**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6FD08);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6FD10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DPPECCECEAM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPPECCECEAM___C_CTOR_OFFSET))(this);
		}

		::System::Void _get__FixedUpdateAction_b__30_0(::DPPECCECEAM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DPPECCECEAM*))((::PBYTE)hIl2Cpp + DPPECCECEAM___C__GET__FIXEDUPDATEACTION_B__30_0_OFFSET))(this, a1);
		}

		::System::Void _get__LateFixedUpdateAction_b__32_0(::DPPECCECEAM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DPPECCECEAM*))((::PBYTE)hIl2Cpp + DPPECCECEAM___C__GET__LATEFIXEDUPDATEACTION_B__32_0_OFFSET))(this, a1);
		}

	};
