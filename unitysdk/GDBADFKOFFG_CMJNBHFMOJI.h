#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class EPHEPHOHAEB;
class KFHNCJALFJK;
namespace System { class String; }

#define GDBADFKOFFG_CMJNBHFMOJI_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x116E09F0)
#define GDBADFKOFFG_CMJNBHFMOJI_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x116E0C70)
#define GDBADFKOFFG_CMJNBHFMOJI_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x116E0CD0)
#define GDBADFKOFFG_CMJNBHFMOJI_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x116E0C80)
#define GDBADFKOFFG_CMJNBHFMOJI_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x116E09E0)
#define GDBADFKOFFG_CMJNBHFMOJI__CTOR_OFFSET UNITYSDK_OFFSET(0x116E09D0)

inline static constexpr unsigned int GDBADFKOFFG_CMJNBHFMOJI_TypeDefinitionIndex = 74132;

class GDBADFKOFFG_CMJNBHFMOJI : public ::System::Object
{
public:
	::System::String* GHMEPKNKIPI; // 0x10
	::EPHEPHOHAEB* FPGDGHKCCMJ; // 0x18
	::System::String* AOPMAJPOLJA; // 0x20
	::KFHNCJALFJK* ADEDEAIPOLH; // 0x28
	::System::Single IDBEJJEKGDI; // 0x30
	::System::Int32 MDPILDGFNHN; // 0x34
	::System::Int32 HMKFCCMCJGA; // 0x38

	::System::Void _ctor(::System::Int32 MDPILDGFNHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GDBADFKOFFG_CMJNBHFMOJI__CTOR_OFFSET))(this, MDPILDGFNHN);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDBADFKOFFG_CMJNBHFMOJI_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GDBADFKOFFG_CMJNBHFMOJI_MOVENEXT_OFFSET))(this);
	}

	::System::Single System_Collections_Generic_IEnumerator_System_Single__get_Current()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + GDBADFKOFFG_CMJNBHFMOJI_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDBADFKOFFG_CMJNBHFMOJI_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + GDBADFKOFFG_CMJNBHFMOJI_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
