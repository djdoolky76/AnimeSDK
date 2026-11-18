#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class KOHPAOOBMGD;
namespace IFix { class ILFixDynamicMethodWrapper; }
namespace IFix::Core { class VirtualMachine; }

#define IFIX_ILFIXDYNAMICMETHODWRAPPER_0B6EE6E4ECEA4557__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A8C20D0)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_0B6EE6E4ECEA4557__CTOR_OFFSET UNITYSDK_OFFSET(0x1A8C1880)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_0B6EE6E4ECEA4557__GW_2_OFFSET UNITYSDK_OFFSET(0x1A8C1890)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_0B6EE6E4ECEA4557__GW_3_OFFSET UNITYSDK_OFFSET(0x1A8C19D0)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_0B6EE6E4ECEA4557__GW_4_OFFSET UNITYSDK_OFFSET(0x1A8C1CA0)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_0B6EE6E4ECEA4557__GW_5_OFFSET UNITYSDK_OFFSET(0x1A8C1DD0)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_0B6EE6E4ECEA4557__GW_6_OFFSET UNITYSDK_OFFSET(0x1A8C1F60)

namespace IFix
{
	inline static constexpr unsigned int ILFixDynamicMethodWrapper_0B6EE6E4ECEA4557_TypeDefinitionIndex = 22465;

	class ILFixDynamicMethodWrapper_0B6EE6E4ECEA4557 : public ::System::Object
	{
	public:
		static ::Il2CppArray<::IFix::ILFixDynamicMethodWrapper*>** StaticGet_wrapperArray()
		{
			return (::Il2CppArray<::IFix::ILFixDynamicMethodWrapper*>**)Il2CppClass::FromTypeDefinitionIndex(ILFixDynamicMethodWrapper_0B6EE6E4ECEA4557_TypeDefinitionIndex)->GetStaticField(0x1E350);
		}
		::System::Object* anonObj; // 0x10
		::IFix::Core::VirtualMachine* virtualMachine; // 0x18
		::System::Int32 methodId; // 0x20

		::System::Void _ctor(::IFix::Core::VirtualMachine* virtualMachine, ::System::Int32 methodId, ::System::Object* anonObj)
		{
			return ((::System::Void(*)(::PVOID, ::IFix::Core::VirtualMachine*, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_0B6EE6E4ECEA4557__CTOR_OFFSET))(this, virtualMachine, methodId, anonObj);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_0B6EE6E4ECEA4557__CCTOR_OFFSET))();
		}

		::System::Void _GW_2(::System::Object* P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_0B6EE6E4ECEA4557__GW_2_OFFSET))(this, P0);
		}

		::System::Boolean _GW_3(::System::Object* P0, ::System::Int32 P1, ::KOHPAOOBMGD*& P2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*, ::System::Int32, ::KOHPAOOBMGD*&))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_0B6EE6E4ECEA4557__GW_3_OFFSET))(this, P0, P1, P2);
		}

		::System::Void _GW_4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_0B6EE6E4ECEA4557__GW_4_OFFSET))(this);
		}

		::System::Void _GW_5(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_0B6EE6E4ECEA4557__GW_5_OFFSET))(this, P0);
		}

		::System::Void _GW_6(::System::Int32 P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_0B6EE6E4ECEA4557__GW_6_OFFSET))(this, P0);
		}
	};
}
