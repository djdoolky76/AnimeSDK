#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ALHIEAKIBKI;
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }

#define ALHIEAKIBKI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1556CC20)
#define ALHIEAKIBKI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1556CC60)
#define ALHIEAKIBKI___C___BINDLEVELVAR_B__11_0_OFFSET UNITYSDK_OFFSET(0x1556CC70)

	class ALHIEAKIBKI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5E670);
		}

		static ::System::Action** StaticGet___9__11_0()
		{
			return (::System::Action**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5E678);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ALHIEAKIBKI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALHIEAKIBKI___C_CTOR_OFFSET))(this);
		}

		::System::Void __BindLevelVar_b__11_0(::ALHIEAKIBKI* a1, ::System::Int32 a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::ALHIEAKIBKI*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + ALHIEAKIBKI___C___BINDLEVELVAR_B__11_0_OFFSET))(this, a1, a2, a3);
		}

	};
