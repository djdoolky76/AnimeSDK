#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LNODBDPJGFL.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
namespace MoleMole::Config { class DynamicInt; }
namespace MoleMole::Config { class DynamicString; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define JBFONGAKMKL_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x1382CBE0)
#define JBFONGAKMKL_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1382C8C0)
#define JBFONGAKMKL_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1382CCF0)
#define JBFONGAKMKL_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x1382D100)
#define JBFONGAKMKL_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x1382CCE0)
#define JBFONGAKMKL_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x1382D2B0)
#define JBFONGAKMKL_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x1382C920)
#define JBFONGAKMKL_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x1382CB70)
#define JBFONGAKMKL_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x1382CD70)
#define JBFONGAKMKL__CTOR_OFFSET UNITYSDK_OFFSET(0x1382D0F0)

inline static constexpr unsigned int JBFONGAKMKL_TypeDefinitionIndex = 86017;

class JBFONGAKMKL : public ::LNODBDPJGFL
{
public:
	::MoleMole::Config::DynamicString* PFIBJDMAJOO; // 0x50
	::MoleMole::Config::DynamicInt* HBADNCJHEOJ; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBFONGAKMKL__CTOR_OFFSET))(this);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + JBFONGAKMKL_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + JBFONGAKMKL_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LNODBDPJGFL* DGNAAPGKIPL()
	{
		return ((::LNODBDPJGFL*(*)(::PVOID))((::PBYTE)hIl2Cpp + JBFONGAKMKL_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JBFONGAKMKL_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + JBFONGAKMKL_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + JBFONGAKMKL_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::JBFONGAKMKL* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::JBFONGAKMKL*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + JBFONGAKMKL_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + JBFONGAKMKL_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::JBFONGAKMKL* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::JBFONGAKMKL*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + JBFONGAKMKL_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}
};
