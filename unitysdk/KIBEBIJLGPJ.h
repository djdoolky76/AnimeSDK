#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LEHEHNJNMKM.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class ENGKPGFGGLM;
class FKNIEPCILLG;
class JCADHFOKIHK;
class KFHNCJALFJK;
class LNFCIBHFJHI;
class PICPGIFICCC;
namespace MoleMole::Battle { class Entity; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KIBEBIJLGPJ_CKJINBMJLBH_OFFSET UNITYSDK_OFFSET(0x1299C240)
#define KIBEBIJLGPJ_EOEFBCPNOCC_OFFSET UNITYSDK_OFFSET(0x1299C0E0)
#define KIBEBIJLGPJ_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1299BAB0)
#define KIBEBIJLGPJ_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1299BD20)
#define KIBEBIJLGPJ_GHLNDEIPLDN_OFFSET UNITYSDK_OFFSET(0x1299C3A0)
#define KIBEBIJLGPJ_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x1299BB10)
#define KIBEBIJLGPJ_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x1299BDA0)
#define KIBEBIJLGPJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1299C0D0)

inline static constexpr unsigned int KIBEBIJLGPJ_TypeDefinitionIndex = 88540;

class KIBEBIJLGPJ : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::PICPGIFICCC*>* BPIFGOGNIKM; // 0x10
	::LEHEHNJNMKM CEDLNFLCACM; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIBEBIJLGPJ__CTOR_OFFSET))(this);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + KIBEBIJLGPJ_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + KIBEBIJLGPJ_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Void EOEFBCPNOCC(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + KIBEBIJLGPJ_EOEFBCPNOCC_OFFSET))(this, KECKGDFIALJ);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + KIBEBIJLGPJ_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void CKJINBMJLBH(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + KIBEBIJLGPJ_CKJINBMJLBH_OFFSET))(this, KECKGDFIALJ);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + KIBEBIJLGPJ_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean GHLNDEIPLDN(::KFHNCJALFJK* ADEDEAIPOLH, ::JCADHFOKIHK* KADBFNFHENH, ::LNFCIBHFJHI* FCJDAMKEGFM, ::ENGKPGFGGLM* FFNKDGGHBPP, ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*& IDKNEIEMPAP)
	{
		return ((::System::Boolean(*)(::PVOID, ::KFHNCJALFJK*, ::JCADHFOKIHK*, ::LNFCIBHFJHI*, ::ENGKPGFGGLM*, ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*&))((::PBYTE)hIl2Cpp + KIBEBIJLGPJ_GHLNDEIPLDN_OFFSET))(this, ADEDEAIPOLH, KADBFNFHENH, FCJDAMKEGFM, FFNKDGGHBPP, IDKNEIEMPAP);
	}
};
