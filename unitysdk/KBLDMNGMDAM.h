#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowChessboardUID.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class AtmosphereData; }
namespace MoleMole::Config { class ConfigHollowChessboardBGVideo; }
namespace System { class String; }

#define KBLDMNGMDAM_BJANDJKKNCD_OFFSET UNITYSDK_OFFSET(0x17639460)
#define KBLDMNGMDAM_ENCKDAKFEOG_OFFSET UNITYSDK_OFFSET(0x176395E0)
#define KBLDMNGMDAM_HJNMIONNHEP_OFFSET UNITYSDK_OFFSET(0x17639440)
#define KBLDMNGMDAM_LIFLCLKDFAJ_OFFSET UNITYSDK_OFFSET(0x17639600)
#define KBLDMNGMDAM_OJMABHKNMNJ_OFFSET UNITYSDK_OFFSET(0x17639620)
#define KBLDMNGMDAM__CTOR_OFFSET UNITYSDK_OFFSET(0x17639430)

inline static constexpr unsigned int KBLDMNGMDAM_TypeDefinitionIndex = 46893;

class KBLDMNGMDAM : public ::System::Object
{
public:
	::MoleMole::Config::AtmosphereData* LJBPECKCCEA; // 0x10
	::MoleMole::HollowChessboard::HollowChessboardUID GOGLFLDGDJF; // 0x18
	::System::Nullable_1<::System::Int32> GOPLKEDJBKE; // 0x20

	::System::Void _ctor(::MoleMole::Config::AtmosphereData* LJBPECKCCEA, ::MoleMole::HollowChessboard::HollowChessboardUID GOGLFLDGDJF)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AtmosphereData*, ::MoleMole::HollowChessboard::HollowChessboardUID))((::PBYTE)hIl2Cpp + KBLDMNGMDAM__CTOR_OFFSET))(this, LJBPECKCCEA, GOGLFLDGDJF);
	}

	::System::Single HJNMIONNHEP()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + KBLDMNGMDAM_HJNMIONNHEP_OFFSET))(this);
	}

	::System::Void BJANDJKKNCD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBLDMNGMDAM_BJANDJKKNCD_OFFSET))(this);
	}

	::MoleMole::Config::ConfigHollowChessboardBGVideo* ENCKDAKFEOG()
	{
		return ((::MoleMole::Config::ConfigHollowChessboardBGVideo*(*)(::PVOID))((::PBYTE)hIl2Cpp + KBLDMNGMDAM_ENCKDAKFEOG_OFFSET))(this);
	}

	::MoleMole::HollowChessboard::HollowChessboardUID LIFLCLKDFAJ()
	{
		return ((::MoleMole::HollowChessboard::HollowChessboardUID(*)(::PVOID))((::PBYTE)hIl2Cpp + KBLDMNGMDAM_LIFLCLKDFAJ_OFFSET))(this);
	}

	::System::String* OJMABHKNMNJ()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KBLDMNGMDAM_OJMABHKNMNJ_OFFSET))(this);
	}
};
