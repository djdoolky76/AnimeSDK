#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class PNJDGHBEMLK_MPILOAMJCCK;
namespace MoleMole::Config { class ConfigHollowChessboard_CameraEffect; }
namespace System { class Action; }

#define PNJDGHBEMLK_IFDOJFEDLDP_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x150E1B00)
#define PNJDGHBEMLK_IFDOJFEDLDP_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x150E1C40)
#define PNJDGHBEMLK_IFDOJFEDLDP_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x150E1CA0)
#define PNJDGHBEMLK_IFDOJFEDLDP_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x150E1C50)
#define PNJDGHBEMLK_IFDOJFEDLDP_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x150E1AF0)
#define PNJDGHBEMLK_IFDOJFEDLDP__CTOR_OFFSET UNITYSDK_OFFSET(0x150E1AE0)

inline static constexpr unsigned int PNJDGHBEMLK_IFDOJFEDLDP_TypeDefinitionIndex = 64970;

class PNJDGHBEMLK_IFDOJFEDLDP : public ::System::Object
{
public:
	::System::Object* IDBEJJEKGDI; // 0x10
	::MoleMole::Config::ConfigHollowChessboard_CameraEffect* OAIDHFOBKKO; // 0x18
	::PNJDGHBEMLK_MPILOAMJCCK* PGDOJBDJBOL; // 0x20
	::System::Action* IHLBALNBGKM; // 0x28
	::System::Int32 MDPILDGFNHN; // 0x30

	::System::Void _ctor(::System::Int32 MDPILDGFNHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_IFDOJFEDLDP__CTOR_OFFSET))(this, MDPILDGFNHN);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_IFDOJFEDLDP_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_IFDOJFEDLDP_MOVENEXT_OFFSET))(this);
	}

	::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_IFDOJFEDLDP_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_IFDOJFEDLDP_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_IFDOJFEDLDP_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
