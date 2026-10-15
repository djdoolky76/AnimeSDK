#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/NOJEJFMMCEG.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/FixVec2.h"
class FPNHGPEICOG;
class IDEJGLMNJAC;

#define BMFBJNAJGIJ_CTOR_OFFSET UNITYSDK_OFFSET(0xBDA0610)
#define BMFBJNAJGIJ_ILLFHEIFKNA_OFFSET UNITYSDK_OFFSET(0xBD9FD00)
#define BMFBJNAJGIJ_ILOHHJDPDBE_OFFSET UNITYSDK_OFFSET(0xBD9F620)

inline static constexpr unsigned int BMFBJNAJGIJ_TypeDefinitionIndex = 53688;

	class BMFBJNAJGIJ : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMFBJNAJGIJ_CTOR_OFFSET))(this);
		}

		::System::Boolean ILOHHJDPDBE(::FPNHGPEICOG* a1, ::FPNHGPEICOG* a2, ::NOJEJFMMCEG a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::FPNHGPEICOG*, ::FPNHGPEICOG*, ::NOJEJFMMCEG))((::PBYTE)hIl2Cpp + BMFBJNAJGIJ_ILOHHJDPDBE_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Boolean ILLFHEIFKNA(::RPG::GameCore::FixVec2 a1, ::RPG::GameCore::FixVec2 a2, ::IDEJGLMNJAC* a3, ::IDEJGLMNJAC* a4, ::RPG::GameCore::FixVec2 a5, ::RPG::GameCore::FixVec2 a6, ::RPG::GameCore::FixPoint a7, ::RPG::GameCore::FixVec2 a8)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::FixVec2, ::RPG::GameCore::FixVec2, ::IDEJGLMNJAC*, ::IDEJGLMNJAC*, ::RPG::GameCore::FixVec2, ::RPG::GameCore::FixVec2, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixVec2))((::PBYTE)hIl2Cpp + BMFBJNAJGIJ_ILLFHEIFKNA_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8);
		}

	};
