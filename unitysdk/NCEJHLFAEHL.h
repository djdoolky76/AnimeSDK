#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CHNIDBLJFIJ.h"
#include "unitysdk/DDHEGIHEKLH.h"

class BHECBBCIMBF;
class NCEJHLFAEHL_KKIFNCJMEPJ;
namespace MoleMole { class UIInLevelPlayerCameraChildWindowController; }
namespace MoleMole { class UIInLevelPlayerMoveChildWindowController; }
namespace MoleMole { class UIWindowController; }

#define NCEJHLFAEHL_GFFGAFCMFHD_OFFSET UNITYSDK_OFFSET(0x120F4140)
#define NCEJHLFAEHL_HGLIJKILKKG_OFFSET UNITYSDK_OFFSET(0x120F4130)
#define NCEJHLFAEHL_MBDFANLLCHK_OFFSET UNITYSDK_OFFSET(0x120F43E0)
#define NCEJHLFAEHL_OOMIPDLFMJI_OFFSET UNITYSDK_OFFSET(0x120F4260)
#define NCEJHLFAEHL_PGGAOMNFHJI_OFFSET UNITYSDK_OFFSET(0x120F4200)
#define NCEJHLFAEHL__CTOR_OFFSET UNITYSDK_OFFSET(0x120F4250)

inline static constexpr unsigned int NCEJHLFAEHL_TypeDefinitionIndex = 89059;

class NCEJHLFAEHL : public ::DDHEGIHEKLH
{
public:
	::MoleMole::UIInLevelPlayerCameraChildWindowController* BMNGKJKABOB; // 0x28
	::MoleMole::UIInLevelPlayerMoveChildWindowController* DDONBNGGGML; // 0x30
	::NCEJHLFAEHL_KKIFNCJMEPJ* OBGBFHGKILC; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCEJHLFAEHL__CTOR_OFFSET))(this);
	}

	::CHNIDBLJFIJ HGLIJKILKKG()
	{
		return ((::CHNIDBLJFIJ(*)(::PVOID))((::PBYTE)hIl2Cpp + NCEJHLFAEHL_HGLIJKILKKG_OFFSET))(this);
	}

	::System::Void GFFGAFCMFHD(::BHECBBCIMBF* OBGBFHGKILC, ::MoleMole::UIWindowController* GHBLGLMKCEJ)
	{
		return ((::System::Void(*)(::PVOID, ::BHECBBCIMBF*, ::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + NCEJHLFAEHL_GFFGAFCMFHD_OFFSET))(this, OBGBFHGKILC, GHBLGLMKCEJ);
	}

	::System::Void PGGAOMNFHJI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCEJHLFAEHL_PGGAOMNFHJI_OFFSET))(this);
	}

	::MoleMole::UIInLevelPlayerCameraChildWindowController* OOMIPDLFMJI()
	{
		return ((::MoleMole::UIInLevelPlayerCameraChildWindowController*(*)(::PVOID))((::PBYTE)hIl2Cpp + NCEJHLFAEHL_OOMIPDLFMJI_OFFSET))(this);
	}

	::System::Void MBDFANLLCHK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCEJHLFAEHL_MBDFANLLCHK_OFFSET))(this);
	}
};
