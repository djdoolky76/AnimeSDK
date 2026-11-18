#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HDJJJGCHLEE.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
class GPIOLGMOBLJ;
class HBIBNDIOKPG;
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define OMKIJNENKGJ_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x172DB9B0)
#define OMKIJNENKGJ_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x172DBEE0)
#define OMKIJNENKGJ_FROMFLX_OFFSET UNITYSDK_OFFSET(0x172DBAC0)
#define OMKIJNENKGJ_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x172DC230)
#define OMKIJNENKGJ_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x172DBAB0)
#define OMKIJNENKGJ_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x172DC3E0)
#define OMKIJNENKGJ_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x172DBF40)
#define OMKIJNENKGJ_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x172DC540)
#define OMKIJNENKGJ_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x172DB280)
#define OMKIJNENKGJ_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x172DB910)
#define OMKIJNENKGJ_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x172DBB40)
#define OMKIJNENKGJ__CTOR_OFFSET UNITYSDK_OFFSET(0x172DC1A0)

inline static constexpr unsigned int OMKIJNENKGJ_TypeDefinitionIndex = 57300;

class OMKIJNENKGJ : public ::HDJJJGCHLEE
{
public:
	::GPIOLGMOBLJ* BFDGJMPKGGC; // 0x30
	::HBIBNDIOKPG* KEHECMCDLFC; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMKIJNENKGJ__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMKIJNENKGJ_LBHNEFGNNNB_OFFSET))(this);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + OMKIJNENKGJ_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::HDJJJGCHLEE* DGNAAPGKIPL()
	{
		return ((::HDJJJGCHLEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + OMKIJNENKGJ_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OMKIJNENKGJ_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + OMKIJNENKGJ_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + OMKIJNENKGJ_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::OMKIJNENKGJ* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::OMKIJNENKGJ*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + OMKIJNENKGJ_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + OMKIJNENKGJ_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::OMKIJNENKGJ* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::OMKIJNENKGJ*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + OMKIJNENKGJ_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + OMKIJNENKGJ_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Void JFLMLBMNFFK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMKIJNENKGJ_JFLMLBMNFFK_OFFSET))(this);
	}
};
