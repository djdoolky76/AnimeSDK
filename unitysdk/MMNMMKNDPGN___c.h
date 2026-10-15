#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MMNMMKNDPGN;
namespace System { class Action; }
namespace System { class Object; }

#define MMNMMKNDPGN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xB9DE4C0)
#define MMNMMKNDPGN___C_CTOR_OFFSET UNITYSDK_OFFSET(0xB9DE500)
#define MMNMMKNDPGN___C__GET__FIXEDUPDATEACTION_B__40_0_OFFSET UNITYSDK_OFFSET(0xB9DE5A0)
#define MMNMMKNDPGN___C__GET__ONPLAYERCREATEACTION_B__38_0_OFFSET UNITYSDK_OFFSET(0xB9DE510)

	class MMNMMKNDPGN___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__38_0()
		{
			return (::System::Action**)UnitySDK::FromName("", "<>c")->GetStaticField(0xFCA0);
		}

		static ::System::Action** StaticGet___9__40_0()
		{
			return (::System::Action**)UnitySDK::FromName("", "<>c")->GetStaticField(0xFCA8);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xFCB0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MMNMMKNDPGN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMNMMKNDPGN___C_CTOR_OFFSET))(this);
		}

		::System::Void _get__OnPlayerCreateAction_b__38_0(::MMNMMKNDPGN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MMNMMKNDPGN*))((::PBYTE)hIl2Cpp + MMNMMKNDPGN___C__GET__ONPLAYERCREATEACTION_B__38_0_OFFSET))(this, a1);
		}

		::System::Void _get__FixedUpdateAction_b__40_0(::MMNMMKNDPGN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MMNMMKNDPGN*))((::PBYTE)hIl2Cpp + MMNMMKNDPGN___C__GET__FIXEDUPDATEACTION_B__40_0_OFFSET))(this, a1);
		}

	};
