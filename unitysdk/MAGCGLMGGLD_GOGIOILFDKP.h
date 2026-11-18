#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class GMKDGIEJNHN;
class MAGCGLMGGLD;

#define MAGCGLMGGLD_GOGIOILFDKP_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x14DD7900)
#define MAGCGLMGGLD_GOGIOILFDKP_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x14DD8450)
#define MAGCGLMGGLD_GOGIOILFDKP_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x14DD84B0)
#define MAGCGLMGGLD_GOGIOILFDKP_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x14DD8460)
#define MAGCGLMGGLD_GOGIOILFDKP_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x14DD78F0)
#define MAGCGLMGGLD_GOGIOILFDKP__CTOR_OFFSET UNITYSDK_OFFSET(0x14DD78E0)

inline static constexpr unsigned int MAGCGLMGGLD_GOGIOILFDKP_TypeDefinitionIndex = 80042;

class MAGCGLMGGLD_GOGIOILFDKP : public ::System::Object
{
public:
	::GMKDGIEJNHN* MLBNIBGOGNH; // 0x10
	::MAGCGLMGGLD* KLHPEBKNIFB; // 0x18
	::System::Single IEEJNBJBKON; // 0x20
	::System::Single IKCNCGBJEBH; // 0x24
	::System::Boolean CAAFEGLOALC; // 0x28
	::System::Byte _padding0[0x3];
	::System::Int32 MDPILDGFNHN; // 0x2C
	::System::Int64 MLFNLIMAAFK; // 0x30
	::System::Single OJEMDFABGGO; // 0x38
	::System::Single MKFECHKKCEN; // 0x3C
	::System::Int64 MOOFPJBBEHC; // 0x40
	::System::Int64 IGOKHILIHNL; // 0x48
	::System::Single IDBEJJEKGDI; // 0x50
	::System::Single BLPIDAMCMLM; // 0x54

	::System::Void _ctor(::System::Int32 MDPILDGFNHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MAGCGLMGGLD_GOGIOILFDKP__CTOR_OFFSET))(this, MDPILDGFNHN);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAGCGLMGGLD_GOGIOILFDKP_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MAGCGLMGGLD_GOGIOILFDKP_MOVENEXT_OFFSET))(this);
	}

	::System::Single System_Collections_Generic_IEnumerator_System_Single__get_Current()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MAGCGLMGGLD_GOGIOILFDKP_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAGCGLMGGLD_GOGIOILFDKP_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MAGCGLMGGLD_GOGIOILFDKP_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
