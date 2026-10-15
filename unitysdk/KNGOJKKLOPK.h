#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BKABEBEPPJK.h"
class JMOHKKCNCMA;
namespace RPG::GameCore { class PetMarbleSetFaceEmotion; }

#define KNGOJKKLOPK_CTOR_OFFSET UNITYSDK_OFFSET(0x1C909980)
#define KNGOJKKLOPK_KDNAAOHECPD_OFFSET UNITYSDK_OFFSET(0x1C909990)

inline static constexpr unsigned int KNGOJKKLOPK_TypeDefinitionIndex = 43103;

	class KNGOJKKLOPK : public ::BKABEBEPPJK
	{
	public:
		::RPG::GameCore::PetMarbleSetFaceEmotion* IGHAHBNLIJA; // 0x18
		::System::Void _ctor(::RPG::GameCore::PetMarbleSetFaceEmotion* a1, ::JMOHKKCNCMA* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PetMarbleSetFaceEmotion*, ::JMOHKKCNCMA*))((::PBYTE)hIl2Cpp + KNGOJKKLOPK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean KDNAAOHECPD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KNGOJKKLOPK_KDNAAOHECPD_OFFSET))(this);
		}

	};
