#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HGCEOEHGPPE;
class HIAMBDKHMIJ;
class KGPCBBIOGLB;
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System { class Tuple; }

#define EJLIOMPMHHI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x154EA160)
#define EJLIOMPMHHI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x154EA190)
#define EJLIOMPMHHI___C__ADDBLOCKHPATCH_B__13_2_OFFSET UNITYSDK_OFFSET(0x154EA2F0)
#define EJLIOMPMHHI___C__ADDBLOCKHPATCH_B__13_3_OFFSET UNITYSDK_OFFSET(0x154EA390)
#define EJLIOMPMHHI___C__ADDCLEAR_B__11_0_OFFSET UNITYSDK_OFFSET(0x154EA280)
#define EJLIOMPMHHI___C__ADDPREVERIFY_B__10_2_OFFSET UNITYSDK_OFFSET(0x154EA210)
#define EJLIOMPMHHI___C__ADDUNPACK_B__14_2_OFFSET UNITYSDK_OFFSET(0x154EA3F0)
#define EJLIOMPMHHI___C__ADDVERIFY_B__9_2_OFFSET UNITYSDK_OFFSET(0x154EA1A0)

inline static constexpr unsigned int EJLIOMPMHHI___c_TypeDefinitionIndex = 59562;

	class EJLIOMPMHHI___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__9_2()
		{
			return (::System::Action**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3CE50);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3CE58);
		}

		static ::System::Action** StaticGet___9__14_2()
		{
			return (::System::Action**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3CE60);
		}

		static ::System::Action** StaticGet___9__11_0()
		{
			return (::System::Action**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3CE68);
		}

		static ::System::Action** StaticGet___9__13_3()
		{
			return (::System::Action**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3CE70);
		}

		static ::System::Action** StaticGet___9__13_2()
		{
			return (::System::Action**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3CE78);
		}

		static ::System::Action** StaticGet___9__10_2()
		{
			return (::System::Action**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3CE80);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EJLIOMPMHHI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJLIOMPMHHI___C_CTOR_OFFSET))(this);
		}

		::System::Void _AddVerify_b__9_2(::HIAMBDKHMIJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIAMBDKHMIJ*))((::PBYTE)hIl2Cpp + EJLIOMPMHHI___C__ADDVERIFY_B__9_2_OFFSET))(this, a1);
		}

		::System::Void _AddPreVerify_b__10_2(::HIAMBDKHMIJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIAMBDKHMIJ*))((::PBYTE)hIl2Cpp + EJLIOMPMHHI___C__ADDPREVERIFY_B__10_2_OFFSET))(this, a1);
		}

		::System::Void _AddClear_b__11_0(::KGPCBBIOGLB* a1, ::System::Tuple* a2)
		{
			return ((::System::Void(*)(::PVOID, ::KGPCBBIOGLB*, ::System::Tuple*))((::PBYTE)hIl2Cpp + EJLIOMPMHHI___C__ADDCLEAR_B__11_0_OFFSET))(this, a1, a2);
		}

		::System::Void _AddBlockHPatch_b__13_2(::HIAMBDKHMIJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIAMBDKHMIJ*))((::PBYTE)hIl2Cpp + EJLIOMPMHHI___C__ADDBLOCKHPATCH_B__13_2_OFFSET))(this, a1);
		}

		::System::Void _AddBlockHPatch_b__13_3(::HGCEOEHGPPE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGCEOEHGPPE*))((::PBYTE)hIl2Cpp + EJLIOMPMHHI___C__ADDBLOCKHPATCH_B__13_3_OFFSET))(this, a1);
		}

		::System::Void _AddUnpack_b__14_2(::HIAMBDKHMIJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIAMBDKHMIJ*))((::PBYTE)hIl2Cpp + EJLIOMPMHHI___C__ADDUNPACK_B__14_2_OFFSET))(this, a1);
		}

	};
