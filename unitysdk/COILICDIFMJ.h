#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/EntityType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/AnimatorCullingMode.h"

class NLNIIPDCABP;
namespace MoleMole::Battle { class Entity; }

#define COILICDIFMJ_BBPCBEEHALC_OFFSET UNITYSDK_OFFSET(0x1497A840)
#define COILICDIFMJ_DAPCBDMHKJA_1_OFFSET UNITYSDK_OFFSET(0x1497A6D0)
#define COILICDIFMJ_DAPCBDMHKJA_OFFSET UNITYSDK_OFFSET(0x1497A500)
#define COILICDIFMJ_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x1497A680)
#define COILICDIFMJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1497A4F0)

inline static constexpr unsigned int COILICDIFMJ_TypeDefinitionIndex = 69012;

class COILICDIFMJ : public ::System::Object
{
public:
	::NLNIIPDCABP* FNFNDIBMPDE; // 0x10
	::MoleMole::Battle::Entity* KECKGDFIALJ; // 0x18
	::System::Int32 ABOLAPGOFMP; // 0x20
	::System::Boolean EEAGIIOJLLL; // 0x24
	::System::Byte _padding0[0x3];
	::System::UInt32 BKLGNCBNEGM; // 0x28
	::MoleMole::Config::EntityType MKCOMJHINNJ; // 0x2C
	::UnityEngine::AnimatorCullingMode AJACLBAMNDH; // 0x30
	::System::Int32 KKIIJGFNHOD; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COILICDIFMJ__CTOR_OFFSET))(this);
	}

	static ::System::Void DAPCBDMHKJA(::COILICDIFMJ*& EGJEOPHDLDK)
	{
		return ((::System::Void(*)(::COILICDIFMJ*&))((::PBYTE)hIl2Cpp + COILICDIFMJ_DAPCBDMHKJA_OFFSET))(EGJEOPHDLDK);
	}

	static ::System::Void DAPCBDMHKJA_1(::COILICDIFMJ* EGJEOPHDLDK)
	{
		return ((::System::Void(*)(::COILICDIFMJ*))((::PBYTE)hIl2Cpp + COILICDIFMJ_DAPCBDMHKJA_1_OFFSET))(EGJEOPHDLDK);
	}

	static ::COILICDIFMJ* BBPCBEEHALC()
	{
		return ((::COILICDIFMJ*(*)())((::PBYTE)hIl2Cpp + COILICDIFMJ_BBPCBEEHALC_OFFSET))();
	}

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COILICDIFMJ_NPOLNFDBOOD_OFFSET))(this);
	}
};
