#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

#define NOMOKAFFKFE_KGAFHLGGNHJ_OFFSET UNITYSDK_OFFSET(0x22400)

inline static constexpr unsigned int NOMOKAFFKFE_TypeDefinitionIndex = 56235;

	struct alignas(4) NOMOKAFFKFE
	{
		::RPG::GameCore::FixPoint ANLELHFADEA; // 0x10
		::System::Boolean DELKCOOACNI; // 0x18
		::System::Boolean CLJPKHNNCIC; // 0x19
		::System::Byte _padding0[0x2];
		::System::Int32 NALMBOOCCIN; // 0x1C
		::System::Int32 DOLABMMBADH; // 0x20
		::System::Int32 HOCLANAJNII; // 0x24
		/*
		::System::Int32 KGAFHLGGNHJ(::NOMOKAFFKFE a1)
		{
			return ((::System::Int32(*)(::PVOID, ::NOMOKAFFKFE))((::PBYTE)hIl2Cpp + NOMOKAFFKFE_KGAFHLGGNHJ_OFFSET))(this, a1);
		}
		*/

	};
