#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NMNIJNNFPGP;
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define MMHPBKNKBGP_EHCHDILLGPK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xB9CDB10)
#define MMHPBKNKBGP_EHCHDILLGPK___C_CTOR_OFFSET UNITYSDK_OFFSET(0xB9CDB40)
#define MMHPBKNKBGP_EHCHDILLGPK___C__ALLBUTTONS_B__29_0_OFFSET UNITYSDK_OFFSET(0xB9CDB60)
#define MMHPBKNKBGP_EHCHDILLGPK___C__BUTTONS_B__27_0_OFFSET UNITYSDK_OFFSET(0xB9CDB50)
#define MMHPBKNKBGP_EHCHDILLGPK___C__GETALLACTIVEBUTTONS_B__45_0_OFFSET UNITYSDK_OFFSET(0xB9CDB70)

	class MMHPBKNKBGP_EHCHDILLGPK___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::NMNIJNNFPGP*, ::System::Boolean>** StaticGet___9__45_0()
		{
			return (::System::Func_2<::NMNIJNNFPGP*, ::System::Boolean>**)UnitySDK::FromName("", "<>c")->GetStaticField(0xD720);
		}

		static ::System::Func_2<::NMNIJNNFPGP*, ::System::Boolean>** StaticGet___9__27_0()
		{
			return (::System::Func_2<::NMNIJNNFPGP*, ::System::Boolean>**)UnitySDK::FromName("", "<>c")->GetStaticField(0xD728);
		}

		static ::System::Func_2<::NMNIJNNFPGP*, ::System::Boolean>** StaticGet___9__29_0()
		{
			return (::System::Func_2<::NMNIJNNFPGP*, ::System::Boolean>**)UnitySDK::FromName("", "<>c")->GetStaticField(0xD730);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xD738);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MMHPBKNKBGP_EHCHDILLGPK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMHPBKNKBGP_EHCHDILLGPK___C_CTOR_OFFSET))(this);
		}

		::System::Boolean _Buttons_b__27_0(::NMNIJNNFPGP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NMNIJNNFPGP*))((::PBYTE)hIl2Cpp + MMHPBKNKBGP_EHCHDILLGPK___C__BUTTONS_B__27_0_OFFSET))(this, a1);
		}

		::System::Boolean _AllButtons_b__29_0(::NMNIJNNFPGP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NMNIJNNFPGP*))((::PBYTE)hIl2Cpp + MMHPBKNKBGP_EHCHDILLGPK___C__ALLBUTTONS_B__29_0_OFFSET))(this, a1);
		}

		::System::Boolean _GetAllActiveButtons_b__45_0(::NMNIJNNFPGP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NMNIJNNFPGP*))((::PBYTE)hIl2Cpp + MMHPBKNKBGP_EHCHDILLGPK___C__GETALLACTIVEBUTTONS_B__45_0_OFFSET))(this, a1);
		}

	};
