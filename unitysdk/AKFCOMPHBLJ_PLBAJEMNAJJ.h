#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define AKFCOMPHBLJ_PLBAJEMNAJJ_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x155050A0)
#define AKFCOMPHBLJ_PLBAJEMNAJJ_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x15505380)
#define AKFCOMPHBLJ_PLBAJEMNAJJ_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x155053E0)
#define AKFCOMPHBLJ_PLBAJEMNAJJ_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x15505390)
#define AKFCOMPHBLJ_PLBAJEMNAJJ_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15505090)
#define AKFCOMPHBLJ_PLBAJEMNAJJ__CTOR_OFFSET UNITYSDK_OFFSET(0x15505080)

inline static constexpr unsigned int AKFCOMPHBLJ_PLBAJEMNAJJ_TypeDefinitionIndex = 77055;

class AKFCOMPHBLJ_PLBAJEMNAJJ : public ::System::Object
{
public:
	::System::Action* JOODFMNDDMK; // 0x10
	::System::Single LJIOJHBIIGG; // 0x18
	::System::Int32 MDPILDGFNHN; // 0x1C
	::System::Single EKMCJEFDEKG; // 0x20
	::System::Boolean FGOFBCOHDJL; // 0x24
	::System::Boolean LEEAMOBMNJI; // 0x25
	::System::Byte _padding0[0x2];
	::System::Single IDBEJJEKGDI; // 0x28

	::System::Void _ctor(::System::Int32 MDPILDGFNHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AKFCOMPHBLJ_PLBAJEMNAJJ__CTOR_OFFSET))(this, MDPILDGFNHN);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKFCOMPHBLJ_PLBAJEMNAJJ_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AKFCOMPHBLJ_PLBAJEMNAJJ_MOVENEXT_OFFSET))(this);
	}

	::System::Single System_Collections_Generic_IEnumerator_System_Single__get_Current()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + AKFCOMPHBLJ_PLBAJEMNAJJ_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKFCOMPHBLJ_PLBAJEMNAJJ_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKFCOMPHBLJ_PLBAJEMNAJJ_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
