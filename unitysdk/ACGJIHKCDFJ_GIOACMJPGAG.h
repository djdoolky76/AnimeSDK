#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }

#define ACGJIHKCDFJ_GIOACMJPGAG_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x154D1E20)
#define ACGJIHKCDFJ_GIOACMJPGAG_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x154D22D0)
#define ACGJIHKCDFJ_GIOACMJPGAG_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x154D2330)
#define ACGJIHKCDFJ_GIOACMJPGAG_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x154D22E0)
#define ACGJIHKCDFJ_GIOACMJPGAG_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x154D1E10)
#define ACGJIHKCDFJ_GIOACMJPGAG__CTOR_OFFSET UNITYSDK_OFFSET(0x154D1E00)

inline static constexpr unsigned int ACGJIHKCDFJ_GIOACMJPGAG_TypeDefinitionIndex = 38513;

class ACGJIHKCDFJ_GIOACMJPGAG : public ::System::Object
{
public:
	::MoleMole::Battle::Entity* IAILGCFENHB; // 0x10
	::MoleMole::Battle::Entity* MFMPICKHAMJ; // 0x18
	::System::Int32 KDFLBLCBICM; // 0x20
	::System::Int32 MDPILDGFNHN; // 0x24
	::System::Int32 DMLKNCPMMPB; // 0x28
	::System::Single IDBEJJEKGDI; // 0x2C

	::System::Void _ctor(::System::Int32 MDPILDGFNHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ACGJIHKCDFJ_GIOACMJPGAG__CTOR_OFFSET))(this, MDPILDGFNHN);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACGJIHKCDFJ_GIOACMJPGAG_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ACGJIHKCDFJ_GIOACMJPGAG_MOVENEXT_OFFSET))(this);
	}

	::System::Single System_Collections_Generic_IEnumerator_System_Single__get_Current()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ACGJIHKCDFJ_GIOACMJPGAG_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACGJIHKCDFJ_GIOACMJPGAG_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + ACGJIHKCDFJ_GIOACMJPGAG_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
