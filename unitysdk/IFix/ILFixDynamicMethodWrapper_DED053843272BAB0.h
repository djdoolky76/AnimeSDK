#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace IFix { class ILFixDynamicMethodWrapper; }
namespace IFix::Core { class VirtualMachine; }

#define IFIX_ILFIXDYNAMICMETHODWRAPPER_DED053843272BAB0__CCTOR_OFFSET UNITYSDK_OFFSET(0x20043FB0)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_DED053843272BAB0__CTOR_OFFSET UNITYSDK_OFFSET(0x20043B70)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_DED053843272BAB0__GW_0_OFFSET UNITYSDK_OFFSET(0x20043950)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_DED053843272BAB0__GW_1_OFFSET UNITYSDK_OFFSET(0x20043B80)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_DED053843272BAB0__GW_2_OFFSET UNITYSDK_OFFSET(0x20043CB0)
#define IFIX_ILFIXDYNAMICMETHODWRAPPER_DED053843272BAB0__GW_3_OFFSET UNITYSDK_OFFSET(0x20043E40)

namespace IFix
{
	inline static constexpr unsigned int ILFixDynamicMethodWrapper_DED053843272BAB0_TypeDefinitionIndex = 96715;

	class ILFixDynamicMethodWrapper_DED053843272BAB0 : public ::System::Object
	{
	public:
		static ::Il2CppArray<::IFix::ILFixDynamicMethodWrapper*>** StaticGet_wrapperArray()
		{
			return (::Il2CppArray<::IFix::ILFixDynamicMethodWrapper*>**)Il2CppClass::FromTypeDefinitionIndex(ILFixDynamicMethodWrapper_DED053843272BAB0_TypeDefinitionIndex)->GetStaticField(0x52FF0);
		}
		::System::Object* anonObj; // 0x10
		::IFix::Core::VirtualMachine* virtualMachine; // 0x18
		::System::Int32 methodId; // 0x20

		::System::Void _ctor(::IFix::Core::VirtualMachine* virtualMachine, ::System::Int32 methodId, ::System::Object* anonObj)
		{
			return ((::System::Void(*)(::PVOID, ::IFix::Core::VirtualMachine*, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_DED053843272BAB0__CTOR_OFFSET))(this, virtualMachine, methodId, anonObj);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_DED053843272BAB0__CCTOR_OFFSET))();
		}

		::System::Void _GW_0(::System::Object* P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_DED053843272BAB0__GW_0_OFFSET))(this, P0);
		}

		::System::Void _GW_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_DED053843272BAB0__GW_1_OFFSET))(this);
		}

		::System::Void _GW_2(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_DED053843272BAB0__GW_2_OFFSET))(this, P0);
		}

		::System::Void _GW_3(::System::Int32 P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IFIX_ILFIXDYNAMICMETHODWRAPPER_DED053843272BAB0__GW_3_OFFSET))(this, P0);
		}
	};
}
