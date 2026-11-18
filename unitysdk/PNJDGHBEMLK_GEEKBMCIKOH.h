#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class PNJDGHBEMLK;
namespace MoleMole { class UIHollowChessPieceParticle; }
namespace MoleMole::Config { class ConfigHollowChessboard_ChessPieceEffect; }
namespace System { class Action; }

#define PNJDGHBEMLK_GEEKBMCIKOH_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x119A4050)
#define PNJDGHBEMLK_GEEKBMCIKOH_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x119A4390)
#define PNJDGHBEMLK_GEEKBMCIKOH_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x119A43F0)
#define PNJDGHBEMLK_GEEKBMCIKOH_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x119A43A0)
#define PNJDGHBEMLK_GEEKBMCIKOH_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x119A4040)
#define PNJDGHBEMLK_GEEKBMCIKOH__CTOR_OFFSET UNITYSDK_OFFSET(0x119A4030)

inline static constexpr unsigned int PNJDGHBEMLK_GEEKBMCIKOH_TypeDefinitionIndex = 64988;

class PNJDGHBEMLK_GEEKBMCIKOH : public ::System::Object
{
public:
	::PNJDGHBEMLK* KLHPEBKNIFB; // 0x10
	::MoleMole::UIHollowChessPieceParticle* FOCPANAPOCD; // 0x18
	::MoleMole::Config::ConfigHollowChessboard_ChessPieceEffect* OAIDHFOBKKO; // 0x20
	::System::Action* IHLBALNBGKM; // 0x28
	::System::Object* IDBEJJEKGDI; // 0x30
	::System::Int32 MDPILDGFNHN; // 0x38
	::System::Single GIDIBJEOJEP; // 0x3C
	::System::Single CAOPDAMCNCN; // 0x40

	::System::Void _ctor(::System::Int32 MDPILDGFNHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_GEEKBMCIKOH__CTOR_OFFSET))(this, MDPILDGFNHN);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_GEEKBMCIKOH_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_GEEKBMCIKOH_MOVENEXT_OFFSET))(this);
	}

	::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_GEEKBMCIKOH_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_GEEKBMCIKOH_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_GEEKBMCIKOH_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
