#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ALHIEAKIBKI;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }

#define ALHIEAKIBKI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x163DA4E0)
#define ALHIEAKIBKI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x163DA520)
#define ALHIEAKIBKI___C___BINDLEVELVAR_B__11_0_OFFSET UNITYSDK_OFFSET(0x163DA530)

inline static constexpr unsigned int ALHIEAKIBKI___c_TypeDefinitionIndex = 79278;

	class ALHIEAKIBKI___c : public ::System::Object
	{
	public:
		static ::System::Action_3<::ALHIEAKIBKI*, ::System::Int32, ::System::String*>** StaticGet___9__11_0()
		{
			return (::System::Action_3<::ALHIEAKIBKI*, ::System::Int32, ::System::String*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x51C40);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x51C48);
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
