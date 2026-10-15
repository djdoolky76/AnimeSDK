#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AOILEMOBPJN;
class INMMPMDELKE;
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }

#define AOILEMOBPJN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x158B06B0)
#define AOILEMOBPJN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x158B06F0)
#define AOILEMOBPJN___C___LISTENLEVELVAR_B__23_0_OFFSET UNITYSDK_OFFSET(0x158B0720)
#define AOILEMOBPJN___C___REGISTERLOADCALLBACK_B__17_0_OFFSET UNITYSDK_OFFSET(0x158B0700)

inline static constexpr unsigned int AOILEMOBPJN___c_TypeDefinitionIndex = 76825;

	class AOILEMOBPJN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x63C90);
		}

		static ::System::Action** StaticGet___9__17_0()
		{
			return (::System::Action**)UnitySDK::FromName("", "<>c")->GetStaticField(0x63C98);
		}

		static ::System::Action** StaticGet___9__23_0()
		{
			return (::System::Action**)UnitySDK::FromName("", "<>c")->GetStaticField(0x63CA0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AOILEMOBPJN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOILEMOBPJN___C_CTOR_OFFSET))(this);
		}

		::System::Void __RegisterLoadCallback_b__17_0(::AOILEMOBPJN* a1, ::INMMPMDELKE* a2)
		{
			return ((::System::Void(*)(::PVOID, ::AOILEMOBPJN*, ::INMMPMDELKE*))((::PBYTE)hIl2Cpp + AOILEMOBPJN___C___REGISTERLOADCALLBACK_B__17_0_OFFSET))(this, a1, a2);
		}

		::System::Void __ListenLevelVar_b__23_0(::AOILEMOBPJN* a1, ::System::Int32 a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::AOILEMOBPJN*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + AOILEMOBPJN___C___LISTENLEVELVAR_B__23_0_OFFSET))(this, a1, a2, a3);
		}

	};
