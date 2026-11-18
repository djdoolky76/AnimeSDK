#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FOPPBECEADK.h"
#include "unitysdk/LCCKBEOEKJF.h"

class PJOHPBGHNHK;
namespace IFix { class ILFixDynamicMethodWrapper; }
namespace IFix::Core { class VirtualMachine; }

#define IFIX_ILFIXDYNAMICMETHODWRAPPER_AEB005F15762B980__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FA7FBA0)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_AEB005F15762B980__CTOR_OFFSET UNITYSDK_OFFSET(0x1FA7DFE0)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_AEB005F15762B980__GW_0_OFFSET UNITYSDK_OFFSET(0x1FA7DFF0)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_AEB005F15762B980__GW_10_OFFSET UNITYSDK_OFFSET(0x1FA7F1A0)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_AEB005F15762B980__GW_11_OFFSET UNITYSDK_OFFSET(0x1FA7F310)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_AEB005F15762B980__GW_12_OFFSET UNITYSDK_OFFSET(0x1FA7CA10)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_AEB005F15762B980__GW_13_OFFSET UNITYSDK_OFFSET(0x1FA7CCB0)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_AEB005F15762B980__GW_14_OFFSET UNITYSDK_OFFSET(0x1FA7C050)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_AEB005F15762B980__GW_15_OFFSET UNITYSDK_OFFSET(0x1FA7C690)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_AEB005F15762B980__GW_16_OFFSET UNITYSDK_OFFSET(0x1FA7F4A0)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_AEB005F15762B980__GW_17_OFFSET UNITYSDK_OFFSET(0x1FA7DC80)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_AEB005F15762B980__GW_1_OFFSET UNITYSDK_OFFSET(0x1FA7E220)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_AEB005F15762B980__GW_21_OFFSET UNITYSDK_OFFSET(0x1FA7F610)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_AEB005F15762B980__GW_25_OFFSET UNITYSDK_OFFSET(0x1FA7CF30)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_AEB005F15762B980__GW_26_OFFSET UNITYSDK_OFFSET(0x1FA7D280)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_AEB005F15762B980__GW_27_OFFSET UNITYSDK_OFFSET(0x1FA7D540)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_AEB005F15762B980__GW_29_OFFSET UNITYSDK_OFFSET(0x1FA7D8F0)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_AEB005F15762B980__GW_2_OFFSET UNITYSDK_OFFSET(0x1FA7E4D0)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_AEB005F15762B980__GW_30_OFFSET UNITYSDK_OFFSET(0x1FA7F770)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_AEB005F15762B980__GW_31_OFFSET UNITYSDK_OFFSET(0x1FA7F8A0)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_AEB005F15762B980__GW_32_OFFSET UNITYSDK_OFFSET(0x1FA7FA30)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_AEB005F15762B980__GW_3_OFFSET UNITYSDK_OFFSET(0x1FA7B840)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_AEB005F15762B980__GW_4_OFFSET UNITYSDK_OFFSET(0x1FA7E7A0)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_AEB005F15762B980__GW_5_OFFSET UNITYSDK_OFFSET(0x1FA7E990)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_AEB005F15762B980__GW_6_OFFSET UNITYSDK_OFFSET(0x1FA7EB10)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_AEB005F15762B980__GW_7_OFFSET UNITYSDK_OFFSET(0x1FA7EDA0)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_AEB005F15762B980__GW_8_OFFSET UNITYSDK_OFFSET(0x1FA7BC20)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_AEB005F15762B980__GW_9_OFFSET UNITYSDK_OFFSET(0x1FA7EF10)

namespace IFix
{
	inline static constexpr unsigned int ILFixDynamicMethodWrapper_AEB005F15762B980_TypeDefinitionIndex = 17975;

	class ILFixDynamicMethodWrapper_AEB005F15762B980 : public ::System::Object
	{
	public:
		static ::Il2CppArray<::IFix::ILFixDynamicMethodWrapper*>** StaticGet_wrapperArray()
		{
			return (::Il2CppArray<::IFix::ILFixDynamicMethodWrapper*>**)Il2CppClass::FromTypeDefinitionIndex(ILFixDynamicMethodWrapper_AEB005F15762B980_TypeDefinitionIndex)->GetStaticField(0x7CA0);
		}
		::System::Object* anonObj; // 0x10
		::IFix::Core::VirtualMachine* virtualMachine; // 0x18
		::System::Int32 methodId; // 0x20

		::System::Void _ctor(::IFix::Core::VirtualMachine* virtualMachine, ::System::Int32 methodId, ::System::Object* anonObj)
		{
			return ((::System::Void(*)(::PVOID, ::IFix::Core::VirtualMachine*, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_AEB005F15762B980__CTOR_OFFSET))(this, virtualMachine, methodId, anonObj);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_AEB005F15762B980__CCTOR_OFFSET))();
		}

		::System::Object* _GW_0(::System::Object* P0, ::System::Int32 P1, ::System::Int32 P2)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_AEB005F15762B980__GW_0_OFFSET))(this, P0, P1, P2);
		}

		::System::Object* _GW_1(::System::Object* P0, ::System::Single P1, ::System::Int32 P2, ::System::Byte P3, ::System::Single P4, ::System::Single P5)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*, ::System::Single, ::System::Int32, ::System::Byte, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_AEB005F15762B980__GW_1_OFFSET))(this, P0, P1, P2, P3, P4, P5);
		}

		::System::Object* _GW_2(::System::Int32 P0, ::System::Int32 P1, ::System::Single P2, ::System::Int32 P3, ::System::Byte P4, ::System::Single P5, ::System::Single P6)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Single, ::System::Int32, ::System::Byte, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_AEB005F15762B980__GW_2_OFFSET))(this, P0, P1, P2, P3, P4, P5, P6);
		}

		::System::Void _GW_3(::System::Object* P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_AEB005F15762B980__GW_3_OFFSET))(this, P0);
		}

		::System::Object* _GW_4(::System::Object* P0)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_AEB005F15762B980__GW_4_OFFSET))(this, P0);
		}

		::System::Single _GW_5(::System::Object* P0, ::System::Single P1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Object*, ::System::Single))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_AEB005F15762B980__GW_5_OFFSET))(this, P0, P1);
		}

		::System::Boolean _GW_6(::LCCKBEOEKJF& P0, ::System::Int32 P1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LCCKBEOEKJF&, ::System::Int32))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_AEB005F15762B980__GW_6_OFFSET))(this, P0, P1);
		}

		::System::Boolean _GW_7(::System::Object* P0, ::System::Int32 P1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*, ::System::Int32))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_AEB005F15762B980__GW_7_OFFSET))(this, P0, P1);
		}

		::System::Void _GW_8(::System::Object* P0, ::System::Object* P1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_AEB005F15762B980__GW_8_OFFSET))(this, P0, P1);
		}

		::System::Void _GW_9(::LCCKBEOEKJF& P0, ::System::Single P1)
		{
			return ((::System::Void(*)(::PVOID, ::LCCKBEOEKJF&, ::System::Single))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_AEB005F15762B980__GW_9_OFFSET))(this, P0, P1);
		}

		::System::Void _GW_10(::System::Object* P0, ::System::Single P1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Single))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_AEB005F15762B980__GW_10_OFFSET))(this, P0, P1);
		}

		::System::Void _GW_11(::System::Object* P0, ::System::Single P1, ::System::Single P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_AEB005F15762B980__GW_11_OFFSET))(this, P0, P1, P2);
		}

		::System::Object* _GW_12()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_AEB005F15762B980__GW_12_OFFSET))(this);
		}

		::System::Object* _GW_13(::System::Object* P0, ::System::Int32 P1)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*, ::System::Int32))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_AEB005F15762B980__GW_13_OFFSET))(this, P0, P1);
		}

		::System::Void _GW_14(::System::Object* P0, ::System::Int32 P1, ::System::Single P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_AEB005F15762B980__GW_14_OFFSET))(this, P0, P1, P2);
		}

		::System::Boolean _GW_15(::System::Object* P0, ::System::Int32 P1, ::PJOHPBGHNHK*& P2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*, ::System::Int32, ::PJOHPBGHNHK*&))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_AEB005F15762B980__GW_15_OFFSET))(this, P0, P1, P2);
		}

		::System::Void _GW_16(::System::Object* P0, ::System::Int32 P1, ::System::Object* P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_AEB005F15762B980__GW_16_OFFSET))(this, P0, P1, P2);
		}

		::FOPPBECEADK _GW_17(::System::Int32 P0, ::System::Int32 P1)
		{
			return ((::FOPPBECEADK(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_AEB005F15762B980__GW_17_OFFSET))(this, P0, P1);
		}

		::System::Void _GW_21(::System::Object* P0, ::System::Object* P1, ::System::Object* P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_AEB005F15762B980__GW_21_OFFSET))(this, P0, P1, P2);
		}

		::System::Boolean _GW_25(::FOPPBECEADK& P0, ::FOPPBECEADK P1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FOPPBECEADK&, ::FOPPBECEADK))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_AEB005F15762B980__GW_25_OFFSET))(this, P0, P1);
		}

		::System::Boolean _GW_26(::FOPPBECEADK& P0, ::System::Object* P1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FOPPBECEADK&, ::System::Object*))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_AEB005F15762B980__GW_26_OFFSET))(this, P0, P1);
		}

		::System::Int32 _GW_27(::FOPPBECEADK& P0)
		{
			return ((::System::Int32(*)(::PVOID, ::FOPPBECEADK&))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_AEB005F15762B980__GW_27_OFFSET))(this, P0);
		}

		::System::Object* _GW_29(::FOPPBECEADK& P0)
		{
			return ((::System::Object*(*)(::PVOID, ::FOPPBECEADK&))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_AEB005F15762B980__GW_29_OFFSET))(this, P0);
		}

		::System::Void _GW_30()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_AEB005F15762B980__GW_30_OFFSET))(this);
		}

		::System::Void _GW_31(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_AEB005F15762B980__GW_31_OFFSET))(this, P0);
		}

		::System::Void _GW_32(::System::Int32 P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_AEB005F15762B980__GW_32_OFFSET))(this, P0);
		}
	};
}
