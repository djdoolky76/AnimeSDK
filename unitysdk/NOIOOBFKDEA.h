#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IKNAEDLKKKE.h"
#include "unitysdk/RPG/MVector2.h"
class IFFJIHFGOBO;

#define NOIOOBFKDEA_CTOR_OFFSET UNITYSDK_OFFSET(0x1C961F30)
#define NOIOOBFKDEA_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0x1C9761F0)

inline static constexpr unsigned int NOIOOBFKDEA_TypeDefinitionIndex = 43062;

	class NOIOOBFKDEA : public ::IKNAEDLKKKE
	{
	public:
		::IFFJIHFGOBO* PIAAAIKAGFA; // 0x20
		::System::UInt32 AGDOLIPGNND; // 0x28
		::System::UInt32 AHINLNKPBNC; // 0x2C
		::RPG::MVector2 EMEKEFJEHOB; // 0x30
		::System::Void _ctor(::IFFJIHFGOBO* a1, ::System::UInt32 a2, ::System::UInt32 a3, ::RPG::MVector2 a4)
		{
			return ((::System::Void(*)(::PVOID, ::IFFJIHFGOBO*, ::System::UInt32, ::System::UInt32, ::RPG::MVector2))((::PBYTE)hIl2Cpp + NOIOOBFKDEA_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void NPAFMEBNFOB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOIOOBFKDEA_NPAFMEBNFOB_OFFSET))(this);
		}

	};
