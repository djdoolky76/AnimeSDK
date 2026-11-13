#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AOILEMOBPJN;
class INMMPMDELKE;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T1, typename T2> class Action_2; }

#define AOILEMOBPJN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1A84A550)
#define AOILEMOBPJN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1A84A590)
#define AOILEMOBPJN___C___LISTENLEVELVAR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1A84A5C0)
#define AOILEMOBPJN___C___REGISTERLOADCALLBACK_B__17_0_OFFSET UNITYSDK_OFFSET(0x1A84A5A0)

inline static constexpr unsigned int AOILEMOBPJN___c_TypeDefinitionIndex = 79158;

	class AOILEMOBPJN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x58EA0);
		}

		static ::System::Action_2<::AOILEMOBPJN*, ::INMMPMDELKE*>** StaticGet___9__17_0()
		{
			return (::System::Action_2<::AOILEMOBPJN*, ::INMMPMDELKE*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x58EA8);
		}

		static ::System::Action_3<::AOILEMOBPJN*, ::System::Int32, ::System::String*>** StaticGet___9__23_0()
		{
			return (::System::Action_3<::AOILEMOBPJN*, ::System::Int32, ::System::String*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x58EB0);
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
