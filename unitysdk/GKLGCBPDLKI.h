#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LNODBDPJGFL.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
namespace MoleMole::Config { class DynamicFloat; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define GKLGCBPDLKI_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x1814B9C0)
#define GKLGCBPDLKI_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1814B720)
#define GKLGCBPDLKI_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1814BAD0)
#define GKLGCBPDLKI_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x1814BD50)
#define GKLGCBPDLKI_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x1814BAC0)
#define GKLGCBPDLKI_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x1814BF00)
#define GKLGCBPDLKI_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x1814B780)
#define GKLGCBPDLKI_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x1814B960)
#define GKLGCBPDLKI_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x1814BB50)
#define GKLGCBPDLKI__CTOR_OFFSET UNITYSDK_OFFSET(0x1814BD40)

inline static constexpr unsigned int GKLGCBPDLKI_TypeDefinitionIndex = 73138;

class GKLGCBPDLKI : public ::LNODBDPJGFL
{
public:
	::MoleMole::Config::DynamicFloat* ODAMAMPFFOA; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKLGCBPDLKI__CTOR_OFFSET))(this);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + GKLGCBPDLKI_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + GKLGCBPDLKI_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LNODBDPJGFL* DGNAAPGKIPL()
	{
		return ((::LNODBDPJGFL*(*)(::PVOID))((::PBYTE)hIl2Cpp + GKLGCBPDLKI_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GKLGCBPDLKI_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + GKLGCBPDLKI_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::GKLGCBPDLKI* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::GKLGCBPDLKI*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + GKLGCBPDLKI_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + GKLGCBPDLKI_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + GKLGCBPDLKI_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::GKLGCBPDLKI* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::GKLGCBPDLKI*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + GKLGCBPDLKI_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}
};
