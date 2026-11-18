#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/PHGIJHEPAOH.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Nullable_1.h"

namespace IFix { class ILFixDynamicMethodWrapper; }
namespace IFix::Core { class VirtualMachine; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }

#define IFIX_ILFIXDYNAMICMETHODWRAPPER_A23DFC7798C5D20F__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FDBBEC0)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_A23DFC7798C5D20F__CTOR_OFFSET UNITYSDK_OFFSET(0x1FDBAC80)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_A23DFC7798C5D20F__GW_0_OFFSET UNITYSDK_OFFSET(0x1FDBAAD0)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_A23DFC7798C5D20F__GW_10_OFFSET UNITYSDK_OFFSET(0x1FDBB940)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_A23DFC7798C5D20F__GW_11_OFFSET UNITYSDK_OFFSET(0x1FDBBA90)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_A23DFC7798C5D20F__GW_12_OFFSET UNITYSDK_OFFSET(0x1FDBBBC0)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_A23DFC7798C5D20F__GW_13_OFFSET UNITYSDK_OFFSET(0x1FDBBD50)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_A23DFC7798C5D20F__GW_1_OFFSET UNITYSDK_OFFSET(0x1FDBAC90)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_A23DFC7798C5D20F__GW_2_OFFSET UNITYSDK_OFFSET(0x1FDBAE30)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_A23DFC7798C5D20F__GW_3_OFFSET UNITYSDK_OFFSET(0x1FDBAFD0)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_A23DFC7798C5D20F__GW_4_OFFSET UNITYSDK_OFFSET(0x1FDBA3C0)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_A23DFC7798C5D20F__GW_5_OFFSET UNITYSDK_OFFSET(0x1FDBA760)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_A23DFC7798C5D20F__GW_6_OFFSET UNITYSDK_OFFSET(0x1FDBB210)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_A23DFC7798C5D20F__GW_7_OFFSET UNITYSDK_OFFSET(0x1FDBB380)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_A23DFC7798C5D20F__GW_8_OFFSET UNITYSDK_OFFSET(0x1FDBB590)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_A23DFC7798C5D20F__GW_9_OFFSET UNITYSDK_OFFSET(0x1FDBB740)

namespace IFix
{
	inline static constexpr unsigned int ILFixDynamicMethodWrapper_A23DFC7798C5D20F_TypeDefinitionIndex = 28055;

	class ILFixDynamicMethodWrapper_A23DFC7798C5D20F : public ::System::Object
	{
	public:
		static ::Il2CppArray<::IFix::ILFixDynamicMethodWrapper*>** StaticGet_wrapperArray()
		{
			return (::Il2CppArray<::IFix::ILFixDynamicMethodWrapper*>**)Il2CppClass::FromTypeDefinitionIndex(ILFixDynamicMethodWrapper_A23DFC7798C5D20F_TypeDefinitionIndex)->GetStaticField(0x25510);
		}
		::IFix::Core::VirtualMachine* virtualMachine; // 0x10
		::System::Object* anonObj; // 0x18
		::System::Int32 methodId; // 0x20

		::System::Void _ctor(::IFix::Core::VirtualMachine* virtualMachine, ::System::Int32 methodId, ::System::Object* anonObj)
		{
			return ((::System::Void(*)(::PVOID, ::IFix::Core::VirtualMachine*, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_A23DFC7798C5D20F__CTOR_OFFSET))(this, virtualMachine, methodId, anonObj);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_A23DFC7798C5D20F__CCTOR_OFFSET))();
		}

		::System::UInt32 _GW_0(::System::Int32 P0)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_A23DFC7798C5D20F__GW_0_OFFSET))(this, P0);
		}

		::System::Double _GW_1(::System::Object* P0, ::System::Double P1, ::System::Double P2)
		{
			return ((::System::Double(*)(::PVOID, ::System::Object*, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_A23DFC7798C5D20F__GW_1_OFFSET))(this, P0, P1, P2);
		}

		::System::Int32 _GW_2(::System::Object* P0, ::System::Double P1, ::System::Double P2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_A23DFC7798C5D20F__GW_2_OFFSET))(this, P0, P1, P2);
		}

		::System::Void _GW_3(::PHGIJHEPAOH& P0)
		{
			return ((::System::Void(*)(::PVOID, ::PHGIJHEPAOH&))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_A23DFC7798C5D20F__GW_3_OFFSET))(this, P0);
		}

		::System::Object* _GW_4(::System::Object* P0)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_A23DFC7798C5D20F__GW_4_OFFSET))(this, P0);
		}

		::System::Void _GW_5(::System::Object* P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_A23DFC7798C5D20F__GW_5_OFFSET))(this, P0);
		}

		::System::Int32 _GW_6(::System::Object* P0, ::System::Int32 P1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*, ::System::Int32))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_A23DFC7798C5D20F__GW_6_OFFSET))(this, P0, P1);
		}

		::System::Nullable_1<::System::Int32> _GW_7(::System::Object* P0)
		{
			return ((::System::Nullable_1<::System::Int32>(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_A23DFC7798C5D20F__GW_7_OFFSET))(this, P0);
		}

		::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Int32> _GW_8(::System::String* P0, ::System::Collections::Generic::IDictionary_2<::System::String*, ::System::String*>* P1)
		{
			return ((::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Int32>(*)(::PVOID, ::System::String*, ::System::Collections::Generic::IDictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_A23DFC7798C5D20F__GW_8_OFFSET))(this, P0, P1);
		}

		::System::Object* _GW_9(::System::Int32 P0)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_A23DFC7798C5D20F__GW_9_OFFSET))(this, P0);
		}

		::System::Void _GW_10(::System::Object* P0, ::System::Object* P1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_A23DFC7798C5D20F__GW_10_OFFSET))(this, P0, P1);
		}

		::System::Void _GW_11()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_A23DFC7798C5D20F__GW_11_OFFSET))(this);
		}

		::System::Void _GW_12(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_A23DFC7798C5D20F__GW_12_OFFSET))(this, P0);
		}

		::System::Void _GW_13(::System::Int32 P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_A23DFC7798C5D20F__GW_13_OFFSET))(this, P0);
		}
	};
}
