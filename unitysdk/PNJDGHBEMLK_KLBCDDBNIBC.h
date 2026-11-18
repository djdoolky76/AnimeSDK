#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class PNJDGHBEMLK_CFHKNIIIPMD;
namespace MoleMole::Config { class ConfigHollowChessboard_CameraShake; }
namespace System { class Action; }

#define PNJDGHBEMLK_KLBCDDBNIBC_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1CB59420)
#define PNJDGHBEMLK_KLBCDDBNIBC_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1CB59840)
#define PNJDGHBEMLK_KLBCDDBNIBC_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1CB598A0)
#define PNJDGHBEMLK_KLBCDDBNIBC_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1CB59850)
#define PNJDGHBEMLK_KLBCDDBNIBC_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1CB59410)
#define PNJDGHBEMLK_KLBCDDBNIBC__CTOR_OFFSET UNITYSDK_OFFSET(0x1CB59400)

inline static constexpr unsigned int PNJDGHBEMLK_KLBCDDBNIBC_TypeDefinitionIndex = 64979;

class PNJDGHBEMLK_KLBCDDBNIBC : public ::System::Object
{
public:
	::System::Object* IDBEJJEKGDI; // 0x10
	::System::Action* IHLBALNBGKM; // 0x18
	::PNJDGHBEMLK_CFHKNIIIPMD* PGDOJBDJBOL; // 0x20
	::MoleMole::Config::ConfigHollowChessboard_CameraShake* OAIDHFOBKKO; // 0x28
	::System::Int32 MDPILDGFNHN; // 0x30

	::System::Void _ctor(::System::Int32 MDPILDGFNHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_KLBCDDBNIBC__CTOR_OFFSET))(this, MDPILDGFNHN);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_KLBCDDBNIBC_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_KLBCDDBNIBC_MOVENEXT_OFFSET))(this);
	}

	::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_KLBCDDBNIBC_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_KLBCDDBNIBC_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_KLBCDDBNIBC_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
