#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MIBEBGCMPOL;
namespace System { class Object; }
namespace System { template <typename T> class Comparison_1; }

#define JICPKADGNIF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE15830)
#define JICPKADGNIF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE15870)
#define JICPKADGNIF___C__GETAUXILIARYLINE_B__13_0_OFFSET UNITYSDK_OFFSET(0x1DE15880)
#define JICPKADGNIF___C__GETAUXILIARYLINE_B__13_1_OFFSET UNITYSDK_OFFSET(0x1DE158C0)
#define JICPKADGNIF___C___SIMULATEONEFRAME_B__16_0_OFFSET UNITYSDK_OFFSET(0x1DE15900)
#define JICPKADGNIF___C___TESTCIRCLE2RECT_B__18_0_OFFSET UNITYSDK_OFFSET(0x1DE15940)

inline static constexpr unsigned int JICPKADGNIF___c_TypeDefinitionIndex = 44065;

	class JICPKADGNIF___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::MIBEBGCMPOL*>** StaticGet___9__16_0()
		{
			return (::System::Comparison_1<::MIBEBGCMPOL*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x43B50);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x43B58);
		}

		static ::System::Comparison_1<::MIBEBGCMPOL*>** StaticGet___9__13_0()
		{
			return (::System::Comparison_1<::MIBEBGCMPOL*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x43B60);
		}

		static ::System::Comparison_1<::MIBEBGCMPOL*>** StaticGet___9__13_1()
		{
			return (::System::Comparison_1<::MIBEBGCMPOL*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x43B68);
		}

		static ::System::Comparison_1<::MIBEBGCMPOL*>** StaticGet___9__18_0()
		{
			return (::System::Comparison_1<::MIBEBGCMPOL*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x43B70);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JICPKADGNIF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JICPKADGNIF___C_CTOR_OFFSET))(this);
		}

		::System::Int32 _GetAuxiliaryLine_b__13_0(::MIBEBGCMPOL* a1, ::MIBEBGCMPOL* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::MIBEBGCMPOL*, ::MIBEBGCMPOL*))((::PBYTE)hIl2Cpp + JICPKADGNIF___C__GETAUXILIARYLINE_B__13_0_OFFSET))(this, a1, a2);
		}

		::System::Int32 _GetAuxiliaryLine_b__13_1(::MIBEBGCMPOL* a1, ::MIBEBGCMPOL* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::MIBEBGCMPOL*, ::MIBEBGCMPOL*))((::PBYTE)hIl2Cpp + JICPKADGNIF___C__GETAUXILIARYLINE_B__13_1_OFFSET))(this, a1, a2);
		}

		::System::Int32 __SimulateOneFrame_b__16_0(::MIBEBGCMPOL* a1, ::MIBEBGCMPOL* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::MIBEBGCMPOL*, ::MIBEBGCMPOL*))((::PBYTE)hIl2Cpp + JICPKADGNIF___C___SIMULATEONEFRAME_B__16_0_OFFSET))(this, a1, a2);
		}

		::System::Int32 __TestCircle2Rect_b__18_0(::MIBEBGCMPOL* a1, ::MIBEBGCMPOL* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::MIBEBGCMPOL*, ::MIBEBGCMPOL*))((::PBYTE)hIl2Cpp + JICPKADGNIF___C___TESTCIRCLE2RECT_B__18_0_OFFSET))(this, a1, a2);
		}

	};
