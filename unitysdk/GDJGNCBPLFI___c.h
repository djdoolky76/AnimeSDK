#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GDJGNCBPLFI;
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }

#define GDJGNCBPLFI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x159A0210)
#define GDJGNCBPLFI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x159A0250)
#define GDJGNCBPLFI___C___LISTENLEVELVAR_B__9_0_OFFSET UNITYSDK_OFFSET(0x159A0260)

	class GDJGNCBPLFI___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__9_0()
		{
			return (::System::Action**)UnitySDK::FromName("", "<>c")->GetStaticField(0x549A0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x549A8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GDJGNCBPLFI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDJGNCBPLFI___C_CTOR_OFFSET))(this);
		}

		::System::Void __ListenLevelVar_b__9_0(::GDJGNCBPLFI* a1, ::System::Int32 a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::GDJGNCBPLFI*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + GDJGNCBPLFI___C___LISTENLEVELVAR_B__9_0_OFFSET))(this, a1, a2, a3);
		}

	};
