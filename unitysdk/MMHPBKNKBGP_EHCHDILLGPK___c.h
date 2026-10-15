#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NMNIJNNFPGP;
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define MMHPBKNKBGP_EHCHDILLGPK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xB9C84B0)
#define MMHPBKNKBGP_EHCHDILLGPK___C_CTOR_OFFSET UNITYSDK_OFFSET(0xB9C84E0)
#define MMHPBKNKBGP_EHCHDILLGPK___C__ALLBUTTONS_B__29_0_OFFSET UNITYSDK_OFFSET(0xB9C8500)
#define MMHPBKNKBGP_EHCHDILLGPK___C__BUTTONS_B__27_0_OFFSET UNITYSDK_OFFSET(0xB9C84F0)
#define MMHPBKNKBGP_EHCHDILLGPK___C__GETALLACTIVEBUTTONS_B__45_0_OFFSET UNITYSDK_OFFSET(0xB9C8510)

inline static constexpr unsigned int MMHPBKNKBGP_EHCHDILLGPK___c_TypeDefinitionIndex = 71901;

	class MMHPBKNKBGP_EHCHDILLGPK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xEA10);
		}

		static ::System::Func_2<::NMNIJNNFPGP*, ::System::Boolean>** StaticGet___9__27_0()
		{
			return (::System::Func_2<::NMNIJNNFPGP*, ::System::Boolean>**)UnitySDK::FromName("", "<>c")->GetStaticField(0xEA18);
		}

		static ::System::Func_2<::NMNIJNNFPGP*, ::System::Boolean>** StaticGet___9__29_0()
		{
			return (::System::Func_2<::NMNIJNNFPGP*, ::System::Boolean>**)UnitySDK::FromName("", "<>c")->GetStaticField(0xEA20);
		}

		static ::System::Func_2<::NMNIJNNFPGP*, ::System::Boolean>** StaticGet___9__45_0()
		{
			return (::System::Func_2<::NMNIJNNFPGP*, ::System::Boolean>**)UnitySDK::FromName("", "<>c")->GetStaticField(0xEA28);
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
