#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KFELGAIGHAP;
namespace System { class Action; }
namespace System { class Object; }

#define GAJCCEPJLJE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1593D320)
#define GAJCCEPJLJE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1593D350)
#define GAJCCEPJLJE___C___EXECUTESEQUENCE_B__2_0_OFFSET UNITYSDK_OFFSET(0x1593D360)

	class GAJCCEPJLJE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5EBD0);
		}

		static ::System::Action** StaticGet___9__2_0()
		{
			return (::System::Action**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5EBD8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GAJCCEPJLJE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAJCCEPJLJE___C_CTOR_OFFSET))(this);
		}

		::System::Void __ExecuteSequence_b__2_0(::KFELGAIGHAP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KFELGAIGHAP*))((::PBYTE)hIl2Cpp + GAJCCEPJLJE___C___EXECUTESEQUENCE_B__2_0_OFFSET))(this, a1);
		}

	};
