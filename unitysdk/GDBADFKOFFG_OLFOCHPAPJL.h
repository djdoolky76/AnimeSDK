#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class EPHEPHOHAEB;
class JCADHFOKIHK;
class JPPHPNAAJMO;
class KFHNCJALFJK;
class LCDHCHIECKF;
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }

#define GDBADFKOFFG_OLFOCHPAPJL_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x132495F0)
#define GDBADFKOFFG_OLFOCHPAPJL_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x13249780)
#define GDBADFKOFFG_OLFOCHPAPJL_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x132497E0)
#define GDBADFKOFFG_OLFOCHPAPJL_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x13249790)
#define GDBADFKOFFG_OLFOCHPAPJL_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x132495E0)
#define GDBADFKOFFG_OLFOCHPAPJL__CTOR_OFFSET UNITYSDK_OFFSET(0x132495D0)

inline static constexpr unsigned int GDBADFKOFFG_OLFOCHPAPJL_TypeDefinitionIndex = 74134;

class GDBADFKOFFG_OLFOCHPAPJL : public ::System::Object
{
public:
	::System::String* AOPMAJPOLJA; // 0x10
	::System::String* GHMEPKNKIPI; // 0x18
	::EPHEPHOHAEB* FPGDGHKCCMJ; // 0x20
	::JCADHFOKIHK* KADBFNFHENH; // 0x28
	::MoleMole::Battle::Entity* NGODDCIOJDP; // 0x30
	::KFHNCJALFJK* ADEDEAIPOLH; // 0x38
	::JPPHPNAAJMO* HJDKEMKGOJL; // 0x40
	::LCDHCHIECKF* HFMGJDGPCPI; // 0x48
	::System::Single IDBEJJEKGDI; // 0x50
	::System::Int32 MDPILDGFNHN; // 0x54

	::System::Void _ctor(::System::Int32 MDPILDGFNHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GDBADFKOFFG_OLFOCHPAPJL__CTOR_OFFSET))(this, MDPILDGFNHN);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDBADFKOFFG_OLFOCHPAPJL_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GDBADFKOFFG_OLFOCHPAPJL_MOVENEXT_OFFSET))(this);
	}

	::System::Single System_Collections_Generic_IEnumerator_System_Single__get_Current()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + GDBADFKOFFG_OLFOCHPAPJL_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDBADFKOFFG_OLFOCHPAPJL_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + GDBADFKOFFG_OLFOCHPAPJL_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
