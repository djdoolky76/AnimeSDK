#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EFANNBCFAOD;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define OJGHGPNOOFL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xBEB71E0)
#define OJGHGPNOOFL___C_CTOR_OFFSET UNITYSDK_OFFSET(0xBEB7210)
#define OJGHGPNOOFL___C__REFRESHEFFECTS_B__1_0_OFFSET UNITYSDK_OFFSET(0xBEB7220)

inline static constexpr unsigned int OJGHGPNOOFL___c_TypeDefinitionIndex = 71236;

	class OJGHGPNOOFL___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::EFANNBCFAOD*, ::System::String*>** StaticGet___9__1_0()
		{
			return (::System::Func_2<::EFANNBCFAOD*, ::System::String*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x546D0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x546D8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OJGHGPNOOFL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJGHGPNOOFL___C_CTOR_OFFSET))(this);
		}

		::System::String* _RefreshEffects_b__1_0(::EFANNBCFAOD* a1)
		{
			return ((::System::String*(*)(::PVOID, ::EFANNBCFAOD*))((::PBYTE)hIl2Cpp + OJGHGPNOOFL___C__REFRESHEFFECTS_B__1_0_OFFSET))(this, a1);
		}

	};
