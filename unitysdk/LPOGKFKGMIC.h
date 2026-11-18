#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KEODMFCHOAE.h"

namespace MoleMole { class EventRange; }
namespace System { class String; }

#define LPOGKFKGMIC_CNIKAMOAANF_OFFSET UNITYSDK_OFFSET(0x185218D0)
#define LPOGKFKGMIC_EAKMDAEPICH_OFFSET UNITYSDK_OFFSET(0x185217D0)
#define LPOGKFKGMIC_FKDAEAJFHNN_OFFSET UNITYSDK_OFFSET(0x18521830)
#define LPOGKFKGMIC_MLOKEBDBDCN_OFFSET UNITYSDK_OFFSET(0x18521640)
#define LPOGKFKGMIC__CTOR_OFFSET UNITYSDK_OFFSET(0x185215F0)

inline static constexpr unsigned int LPOGKFKGMIC_TypeDefinitionIndex = 39294;

class LPOGKFKGMIC : public ::KEODMFCHOAE
{
public:
	::MoleMole::EventRange* GGKHDIEOHPM; // 0x38
	::System::String* IEDEBHFJIGN; // 0x40

	::System::Void _ctor(::MoleMole::EventRange* AJGKMHALGPJ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::EventRange*))((::PBYTE)hIl2Cpp + LPOGKFKGMIC__CTOR_OFFSET))(this, AJGKMHALGPJ);
	}

	::System::Void MLOKEBDBDCN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPOGKFKGMIC_MLOKEBDBDCN_OFFSET))(this);
	}

	::System::Double EAKMDAEPICH()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + LPOGKFKGMIC_EAKMDAEPICH_OFFSET))(this);
	}

	::System::Double FKDAEAJFHNN()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + LPOGKFKGMIC_FKDAEAJFHNN_OFFSET))(this);
	}

	::System::Void CNIKAMOAANF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPOGKFKGMIC_CNIKAMOAANF_OFFSET))(this);
	}
};
