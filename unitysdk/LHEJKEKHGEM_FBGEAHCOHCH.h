#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

#define LHEJKEKHGEM_FBGEAHCOHCH_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x184F76F0)
#define LHEJKEKHGEM_FBGEAHCOHCH_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x184F86B0)
#define LHEJKEKHGEM_FBGEAHCOHCH_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x184F8710)
#define LHEJKEKHGEM_FBGEAHCOHCH_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x184F86C0)
#define LHEJKEKHGEM_FBGEAHCOHCH_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x184F76E0)
#define LHEJKEKHGEM_FBGEAHCOHCH__CTOR_OFFSET UNITYSDK_OFFSET(0x184F76D0)

inline static constexpr unsigned int LHEJKEKHGEM_FBGEAHCOHCH_TypeDefinitionIndex = 46278;

class LHEJKEKHGEM_FBGEAHCOHCH : public ::System::Object
{
public:
	::Foundation::ViewObject::ViewObjectHandle HODAIDNDKHD; // 0x10
	::Foundation::ViewObject::ViewObjectHandle GOGKEOGCNIB; // 0x20
	::System::Object* IDBEJJEKGDI; // 0x30
	::System::Boolean NBDHBKLLBLL; // 0x38
	::System::Byte _padding0[0x3];
	::System::ValueTuple_2<::System::Int32, ::System::Int32> MGMDLMBEDJF; // 0x3C
	::System::Single IHMPCKPNJEA; // 0x44
	::System::Int32 MDPILDGFNHN; // 0x48
	::System::Single FAMBCIJIIOH; // 0x4C
	::System::Single BEFMIMJBDKG; // 0x50

	::System::Void _ctor(::System::Int32 MDPILDGFNHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LHEJKEKHGEM_FBGEAHCOHCH__CTOR_OFFSET))(this, MDPILDGFNHN);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHEJKEKHGEM_FBGEAHCOHCH_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LHEJKEKHGEM_FBGEAHCOHCH_MOVENEXT_OFFSET))(this);
	}

	::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + LHEJKEKHGEM_FBGEAHCOHCH_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHEJKEKHGEM_FBGEAHCOHCH_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + LHEJKEKHGEM_FBGEAHCOHCH_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
