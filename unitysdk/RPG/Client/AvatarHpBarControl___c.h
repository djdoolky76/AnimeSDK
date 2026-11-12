#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
class GOKNJPBGBLE;
namespace R3 { template <typename T> class Observable_1; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_AVATARHPBARCONTROL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xD053EE0)
#define RPG_CLIENT_AVATARHPBARCONTROL___C_CTOR_OFFSET UNITYSDK_OFFSET(0xD053F20)
#define RPG_CLIENT_AVATARHPBARCONTROL___C___BINDHP_B__5_0_OFFSET UNITYSDK_OFFSET(0xD053F30)
#define RPG_CLIENT_AVATARHPBARCONTROL___C___BINDHP_B__5_1_OFFSET UNITYSDK_OFFSET(0xD054040)
#define RPG_CLIENT_AVATARHPBARCONTROL___C___BINDHP_B__5_2_OFFSET UNITYSDK_OFFSET(0xD0542C0)
#define RPG_CLIENT_AVATARHPBARCONTROL___C___BINDHP_B__5_3_OFFSET UNITYSDK_OFFSET(0xD0543D0)
#define RPG_CLIENT_AVATARHPBARCONTROL___C___BINDHP_B__5_4_OFFSET UNITYSDK_OFFSET(0xD0542B0)
#define RPG_CLIENT_AVATARHPBARCONTROL___C___BINDHP_B__5_5_OFFSET UNITYSDK_OFFSET(0xD054640)
#define RPG_CLIENT_AVATARHPBARCONTROL___C___BINDPLUSHP_B__6_0_OFFSET UNITYSDK_OFFSET(0xD054650)
#define RPG_CLIENT_AVATARHPBARCONTROL___C___BINDPLUSHP_B__6_1_OFFSET UNITYSDK_OFFSET(0xD0548D0)
#define RPG_CLIENT_AVATARHPBARCONTROL___C___BINDPLUSHP_B__6_2_OFFSET UNITYSDK_OFFSET(0xD0548C0)
#define RPG_CLIENT_AVATARHPBARCONTROL___C___BINDPLUSHP_B__6_3_OFFSET UNITYSDK_OFFSET(0xD054B60)

namespace RPG::Client
{
	inline static constexpr unsigned int AvatarHpBarControl___c_TypeDefinitionIndex = 61375;

	class AvatarHpBarControl___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::GOKNJPBGBLE*, ::R3::Observable_1<::System::Single>*>** StaticGet___9__5_2()
		{
			return (::System::Func_2<::GOKNJPBGBLE*, ::R3::Observable_1<::System::Single>*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x57B90);
		}

		static ::System::Func_2<::System::Single, ::System::Boolean>** StaticGet___9__5_5()
		{
			return (::System::Func_2<::System::Single, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x57B98);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x57BA0);
		}

		static ::System::Func_2<::GOKNJPBGBLE*, ::R3::Observable_1<::System::Boolean>*>** StaticGet___9__5_3()
		{
			return (::System::Func_2<::GOKNJPBGBLE*, ::R3::Observable_1<::System::Boolean>*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x57BA8);
		}

		static ::System::Func_2<::System::Nullable_1<::System::Single>, ::System::Boolean>** StaticGet___9__6_3()
		{
			return (::System::Func_2<::System::Nullable_1<::System::Single>, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x57BB0);
		}

		static ::System::Func_2<::GOKNJPBGBLE*, ::R3::Observable_1<::System::Boolean>*>** StaticGet___9__6_1()
		{
			return (::System::Func_2<::GOKNJPBGBLE*, ::R3::Observable_1<::System::Boolean>*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x57BB8);
		}

		static ::System::Func_2<::GOKNJPBGBLE*, ::R3::Observable_1<::System::Single>*>** StaticGet___9__6_0()
		{
			return (::System::Func_2<::GOKNJPBGBLE*, ::R3::Observable_1<::System::Single>*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x57BC0);
		}

		static ::System::Func_2<::GOKNJPBGBLE*, ::R3::Observable_1<::System::Boolean>*>** StaticGet___9__5_1()
		{
			return (::System::Func_2<::GOKNJPBGBLE*, ::R3::Observable_1<::System::Boolean>*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x57BC8);
		}

		static ::System::Func_2<::GOKNJPBGBLE*, ::R3::Observable_1<::System::Single>*>** StaticGet___9__5_0()
		{
			return (::System::Func_2<::GOKNJPBGBLE*, ::R3::Observable_1<::System::Single>*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x57BD0);
		}

		static ::System::Func_2<::System::Nullable_1<::System::Single>, ::System::Single>** StaticGet___9__6_2()
		{
			return (::System::Func_2<::System::Nullable_1<::System::Single>, ::System::Single>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x57BD8);
		}

		static ::System::Func_2<::System::Single, ::System::Boolean>** StaticGet___9__5_4()
		{
			return (::System::Func_2<::System::Single, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x57BE0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARHPBARCONTROL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARHPBARCONTROL___C_CTOR_OFFSET))(this);
		}

		::R3::Observable_1<::System::Single>* __BindHp_b__5_0(::GOKNJPBGBLE* a1)
		{
			return ((::R3::Observable_1<::System::Single>*(*)(::PVOID, ::GOKNJPBGBLE*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARHPBARCONTROL___C___BINDHP_B__5_0_OFFSET))(this, a1);
		}

		::R3::Observable_1<::System::Boolean>* __BindHp_b__5_1(::GOKNJPBGBLE* a1)
		{
			return ((::R3::Observable_1<::System::Boolean>*(*)(::PVOID, ::GOKNJPBGBLE*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARHPBARCONTROL___C___BINDHP_B__5_1_OFFSET))(this, a1);
		}

		::System::Boolean __BindHp_b__5_4(::System::Single a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARHPBARCONTROL___C___BINDHP_B__5_4_OFFSET))(this, a1);
		}

		::R3::Observable_1<::System::Single>* __BindHp_b__5_2(::GOKNJPBGBLE* a1)
		{
			return ((::R3::Observable_1<::System::Single>*(*)(::PVOID, ::GOKNJPBGBLE*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARHPBARCONTROL___C___BINDHP_B__5_2_OFFSET))(this, a1);
		}

		::R3::Observable_1<::System::Boolean>* __BindHp_b__5_3(::GOKNJPBGBLE* a1)
		{
			return ((::R3::Observable_1<::System::Boolean>*(*)(::PVOID, ::GOKNJPBGBLE*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARHPBARCONTROL___C___BINDHP_B__5_3_OFFSET))(this, a1);
		}

		::System::Boolean __BindHp_b__5_5(::System::Single a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARHPBARCONTROL___C___BINDHP_B__5_5_OFFSET))(this, a1);
		}

		::R3::Observable_1<::System::Single>* __BindPlusHp_b__6_0(::GOKNJPBGBLE* a1)
		{
			return ((::R3::Observable_1<::System::Single>*(*)(::PVOID, ::GOKNJPBGBLE*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARHPBARCONTROL___C___BINDPLUSHP_B__6_0_OFFSET))(this, a1);
		}

		::System::Single __BindPlusHp_b__6_2(::System::Nullable_1<::System::Single> a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Nullable_1<::System::Single>))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARHPBARCONTROL___C___BINDPLUSHP_B__6_2_OFFSET))(this, a1);
		}

		::R3::Observable_1<::System::Boolean>* __BindPlusHp_b__6_1(::GOKNJPBGBLE* a1)
		{
			return ((::R3::Observable_1<::System::Boolean>*(*)(::PVOID, ::GOKNJPBGBLE*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARHPBARCONTROL___C___BINDPLUSHP_B__6_1_OFFSET))(this, a1);
		}

		::System::Boolean __BindPlusHp_b__6_3(::System::Nullable_1<::System::Single> a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Nullable_1<::System::Single>))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARHPBARCONTROL___C___BINDPLUSHP_B__6_3_OFFSET))(this, a1);
		}

	};
}
