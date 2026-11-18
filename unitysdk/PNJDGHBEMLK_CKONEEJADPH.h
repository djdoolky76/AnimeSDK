#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigHollowChessboard_BigTVMoveFireEffect_RuntimeEffectInfo.h"
#include "unitysdk/System/Object.h"

class PNJDGHBEMLK;

#define PNJDGHBEMLK_CKONEEJADPH_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1CB59180)
#define PNJDGHBEMLK_CKONEEJADPH_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1CB59390)
#define PNJDGHBEMLK_CKONEEJADPH_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1CB593F0)
#define PNJDGHBEMLK_CKONEEJADPH_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1CB593A0)
#define PNJDGHBEMLK_CKONEEJADPH_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1CB59170)
#define PNJDGHBEMLK_CKONEEJADPH__CTOR_OFFSET UNITYSDK_OFFSET(0x1CB59160)

inline static constexpr unsigned int PNJDGHBEMLK_CKONEEJADPH_TypeDefinitionIndex = 64976;

class PNJDGHBEMLK_CKONEEJADPH : public ::System::Object
{
public:
	::PNJDGHBEMLK* KLHPEBKNIFB; // 0x10
	::System::Object* IDBEJJEKGDI; // 0x18
	::MoleMole::Config::ConfigHollowChessboard_BigTVMoveFireEffect_RuntimeEffectInfo OAIDHFOBKKO; // 0x20
	::System::Int32 MDPILDGFNHN; // 0x58
	::System::Single IAKPGBCAAKM; // 0x5C

	::System::Void _ctor(::System::Int32 MDPILDGFNHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_CKONEEJADPH__CTOR_OFFSET))(this, MDPILDGFNHN);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_CKONEEJADPH_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_CKONEEJADPH_MOVENEXT_OFFSET))(this);
	}

	::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_CKONEEJADPH_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_CKONEEJADPH_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_CKONEEJADPH_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
