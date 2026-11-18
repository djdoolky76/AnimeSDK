#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/CinemaNpcOffsetSo.h"

namespace System { class String; }

#define MOLEMOLE_CINEMAPOSITIONSO_EBCFEHBPKON_OFFSET UNITYSDK_OFFSET(0x19B02750)
#define MOLEMOLE_CINEMAPOSITIONSO_MKFMEKDJNBA_OFFSET UNITYSDK_OFFSET(0x19B027D0)
#define MOLEMOLE_CINEMAPOSITIONSO__CTOR_OFFSET UNITYSDK_OFFSET(0x19B027C0)

namespace MoleMole
{
	inline static constexpr unsigned int CinemaPositionSo_TypeDefinitionIndex = 51668;

	class CinemaPositionSo : public ::MoleMole::CinemaNpcOffsetSo
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CINEMAPOSITIONSO__CTOR_OFFSET))(this);
		}

		::System::String* EBCFEHBPKON()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CINEMAPOSITIONSO_EBCFEHBPKON_OFFSET))(this);
		}

		::System::String* MKFMEKDJNBA()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CINEMAPOSITIONSO_MKFMEKDJNBA_OFFSET))(this);
		}
	};
}
