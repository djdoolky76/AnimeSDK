#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/HOCDHMEPPEG.h"
#include "unitysdk/System/Object.h"

#define LJCDOJAMPMF_GEHDJGOCCBP_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x16373790)
#define LJCDOJAMPMF_GEHDJGOCCBP_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x163739C0)
#define LJCDOJAMPMF_GEHDJGOCCBP_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x16373A20)
#define LJCDOJAMPMF_GEHDJGOCCBP_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x163739D0)
#define LJCDOJAMPMF_GEHDJGOCCBP_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16373780)
#define LJCDOJAMPMF_GEHDJGOCCBP__CTOR_OFFSET UNITYSDK_OFFSET(0x16373770)

inline static constexpr unsigned int LJCDOJAMPMF_GEHDJGOCCBP_TypeDefinitionIndex = 71948;

class LJCDOJAMPMF_GEHDJGOCCBP : public ::System::Object
{
public:
	::Foundation::ViewObject::ViewObjectHandle GDMNDDJHBDJ; // 0x10
	::HOCDHMEPPEG ECLGGGCDNKC; // 0x20
	::System::Single IDBEJJEKGDI; // 0x50
	::System::Int32 EMIHPNKBMBF; // 0x54
	::System::UInt32 BKLGNCBNEGM; // 0x58
	::System::Int32 MDPILDGFNHN; // 0x5C

	::System::Void _ctor(::System::Int32 MDPILDGFNHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LJCDOJAMPMF_GEHDJGOCCBP__CTOR_OFFSET))(this, MDPILDGFNHN);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJCDOJAMPMF_GEHDJGOCCBP_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LJCDOJAMPMF_GEHDJGOCCBP_MOVENEXT_OFFSET))(this);
	}

	::System::Single System_Collections_Generic_IEnumerator_System_Single__get_Current()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + LJCDOJAMPMF_GEHDJGOCCBP_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJCDOJAMPMF_GEHDJGOCCBP_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + LJCDOJAMPMF_GEHDJGOCCBP_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
