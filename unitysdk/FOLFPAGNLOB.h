#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CelestialBodyType.h"
#include "unitysdk/HGEGFCADEEC.h"
#include "unitysdk/UnityEngine/Vector2.h"
class PEKCKMDIAFL;
namespace System { class String; }

#define FOLFPAGNLOB_CTOR_OFFSET UNITYSDK_OFFSET(0x18757340)
#define FOLFPAGNLOB_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x187573D0)

inline static constexpr unsigned int FOLFPAGNLOB_TypeDefinitionIndex = 71759;

	class FOLFPAGNLOB : public ::HGEGFCADEEC
	{
	public:
		::PEKCKMDIAFL* CCDHDAGPMNA; // 0x28
		::CelestialBodyType DJGDEEGEPCJ; // 0x30
		::System::Single JEJPHFEPFPN; // 0x34
		::System::Single DMMINDDMKGC; // 0x38
		::UnityEngine::Vector2 HMAGPLNGNMP; // 0x3C
		::System::Void _ctor(::System::String* a1, ::CelestialBodyType a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::CelestialBodyType))((::PBYTE)hIl2Cpp + FOLFPAGNLOB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void JLANKNHFKCN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOLFPAGNLOB_JLANKNHFKCN_OFFSET))(this);
		}

	};
