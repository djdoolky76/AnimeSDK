#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class PNJDGHBEMLK;
class PNJDGHBEMLK_PNNJEMFIKDK;
namespace MoleMole::Config { class ConfigHollowChessboard_PieceChangeStructConfig; }
namespace MoleMole::Config { class ConfigHollowChessboard_RiseOrSink; }
namespace System { class Action; }

#define PNJDGHBEMLK_CEFCHMBJNOM_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x119A3E90)
#define PNJDGHBEMLK_CEFCHMBJNOM_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x119A3FC0)
#define PNJDGHBEMLK_CEFCHMBJNOM_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x119A4020)
#define PNJDGHBEMLK_CEFCHMBJNOM_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x119A3FD0)
#define PNJDGHBEMLK_CEFCHMBJNOM_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x119A3E80)
#define PNJDGHBEMLK_CEFCHMBJNOM__CTOR_OFFSET UNITYSDK_OFFSET(0x119A3E70)

inline static constexpr unsigned int PNJDGHBEMLK_CEFCHMBJNOM_TypeDefinitionIndex = 64971;

class PNJDGHBEMLK_CEFCHMBJNOM : public ::System::Object
{
public:
	::MoleMole::Config::ConfigHollowChessboard_RiseOrSink* OAIDHFOBKKO; // 0x10
	::PNJDGHBEMLK* KLHPEBKNIFB; // 0x18
	::MoleMole::Config::ConfigHollowChessboard_PieceChangeStructConfig* DFMKILICPFB; // 0x20
	::PNJDGHBEMLK_PNNJEMFIKDK* PGDOJBDJBOL; // 0x28
	::System::Action* IHLBALNBGKM; // 0x30
	::System::Object* IDBEJJEKGDI; // 0x38
	::System::Int32 MDPILDGFNHN; // 0x40
	::System::Single CAOPDAMCNCN; // 0x44

	::System::Void _ctor(::System::Int32 MDPILDGFNHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_CEFCHMBJNOM__CTOR_OFFSET))(this, MDPILDGFNHN);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_CEFCHMBJNOM_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_CEFCHMBJNOM_MOVENEXT_OFFSET))(this);
	}

	::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_CEFCHMBJNOM_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_CEFCHMBJNOM_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_CEFCHMBJNOM_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
