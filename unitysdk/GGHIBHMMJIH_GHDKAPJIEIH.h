#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class GGHIBHMMJIH;
namespace System { class Action; }

#define GGHIBHMMJIH_GHDKAPJIEIH_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x10FD7D50)
#define GGHIBHMMJIH_GHDKAPJIEIH_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x10FD7EB0)
#define GGHIBHMMJIH_GHDKAPJIEIH_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x10FD7F10)
#define GGHIBHMMJIH_GHDKAPJIEIH_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x10FD7EC0)
#define GGHIBHMMJIH_GHDKAPJIEIH_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10FD7D40)
#define GGHIBHMMJIH_GHDKAPJIEIH__CTOR_OFFSET UNITYSDK_OFFSET(0x10FD7D30)

inline static constexpr unsigned int GGHIBHMMJIH_GHDKAPJIEIH_TypeDefinitionIndex = 45798;

class GGHIBHMMJIH_GHDKAPJIEIH : public ::System::Object
{
public:
	::GGHIBHMMJIH* KLHPEBKNIFB; // 0x10
	::System::Action* GJBHEJGENMI; // 0x18
	::System::Single IDBEJJEKGDI; // 0x20
	::System::Int32 MDPILDGFNHN; // 0x24

	::System::Void _ctor(::System::Int32 MDPILDGFNHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GGHIBHMMJIH_GHDKAPJIEIH__CTOR_OFFSET))(this, MDPILDGFNHN);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGHIBHMMJIH_GHDKAPJIEIH_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GGHIBHMMJIH_GHDKAPJIEIH_MOVENEXT_OFFSET))(this);
	}

	::System::Single System_Collections_Generic_IEnumerator_System_Single__get_Current()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + GGHIBHMMJIH_GHDKAPJIEIH_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGHIBHMMJIH_GHDKAPJIEIH_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + GGHIBHMMJIH_GHDKAPJIEIH_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
