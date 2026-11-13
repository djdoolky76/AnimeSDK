#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NMNIJNNFPGP;
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define MMHPBKNKBGP_EHCHDILLGPK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x188F6A20)
#define MMHPBKNKBGP_EHCHDILLGPK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x188F6A50)
#define MMHPBKNKBGP_EHCHDILLGPK___C__ALLBUTTONS_B__29_0_OFFSET UNITYSDK_OFFSET(0x188F6A70)
#define MMHPBKNKBGP_EHCHDILLGPK___C__BUTTONS_B__27_0_OFFSET UNITYSDK_OFFSET(0x188F6A60)
#define MMHPBKNKBGP_EHCHDILLGPK___C__GETALLACTIVEBUTTONS_B__45_0_OFFSET UNITYSDK_OFFSET(0x188F6A80)

inline static constexpr unsigned int MMHPBKNKBGP_EHCHDILLGPK___c_TypeDefinitionIndex = 73922;

	class MMHPBKNKBGP_EHCHDILLGPK___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::NMNIJNNFPGP*, ::System::Boolean>** StaticGet___9__45_0()
		{
			return (::System::Func_2<::NMNIJNNFPGP*, ::System::Boolean>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x9320);
		}

		static ::System::Func_2<::NMNIJNNFPGP*, ::System::Boolean>** StaticGet___9__27_0()
		{
			return (::System::Func_2<::NMNIJNNFPGP*, ::System::Boolean>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x9328);
		}

		static ::System::Func_2<::NMNIJNNFPGP*, ::System::Boolean>** StaticGet___9__29_0()
		{
			return (::System::Func_2<::NMNIJNNFPGP*, ::System::Boolean>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x9330);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x9338);
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
