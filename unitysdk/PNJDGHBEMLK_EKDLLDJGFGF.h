#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class PNJDGHBEMLK_ONMOJBGCJHA;
namespace MoleMole::Config { class ConfigHollowChessboard_PostEffect; }
namespace System { class Action; }

#define PNJDGHBEMLK_EKDLLDJGFGF_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1C1E1210)
#define PNJDGHBEMLK_EKDLLDJGFGF_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1C1E1400)
#define PNJDGHBEMLK_EKDLLDJGFGF_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1C1E1460)
#define PNJDGHBEMLK_EKDLLDJGFGF_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1C1E1410)
#define PNJDGHBEMLK_EKDLLDJGFGF_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C1E1200)
#define PNJDGHBEMLK_EKDLLDJGFGF__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1E11F0)

inline static constexpr unsigned int PNJDGHBEMLK_EKDLLDJGFGF_TypeDefinitionIndex = 64981;

class PNJDGHBEMLK_EKDLLDJGFGF : public ::System::Object
{
public:
	::System::Object* IDBEJJEKGDI; // 0x10
	::PNJDGHBEMLK_ONMOJBGCJHA* PGDOJBDJBOL; // 0x18
	::MoleMole::Config::ConfigHollowChessboard_PostEffect* OAIDHFOBKKO; // 0x20
	::System::Action* IHLBALNBGKM; // 0x28
	::System::Int32 MDPILDGFNHN; // 0x30
	::System::Single IAKPGBCAAKM; // 0x34

	::System::Void _ctor(::System::Int32 MDPILDGFNHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_EKDLLDJGFGF__CTOR_OFFSET))(this, MDPILDGFNHN);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_EKDLLDJGFGF_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_EKDLLDJGFGF_MOVENEXT_OFFSET))(this);
	}

	::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_EKDLLDJGFGF_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_EKDLLDJGFGF_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_EKDLLDJGFGF_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
