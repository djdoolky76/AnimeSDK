#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BKABEBEPPJK.h"
class JMOHKKCNCMA;
namespace RPG::GameCore { class PetMarbleSpecialTalk; }

#define PNNMHFGEHCD_CTOR_OFFSET UNITYSDK_OFFSET(0x1C9CAC20)
#define PNNMHFGEHCD_KDNAAOHECPD_OFFSET UNITYSDK_OFFSET(0x1C9CAC30)

inline static constexpr unsigned int PNNMHFGEHCD_TypeDefinitionIndex = 43106;

	class PNNMHFGEHCD : public ::BKABEBEPPJK
	{
	public:
		::RPG::GameCore::PetMarbleSpecialTalk* IGHAHBNLIJA; // 0x18
		::System::Void _ctor(::RPG::GameCore::PetMarbleSpecialTalk* a1, ::JMOHKKCNCMA* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PetMarbleSpecialTalk*, ::JMOHKKCNCMA*))((::PBYTE)hIl2Cpp + PNNMHFGEHCD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean KDNAAOHECPD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PNNMHFGEHCD_KDNAAOHECPD_OFFSET))(this);
		}

	};
