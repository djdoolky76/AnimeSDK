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

#define NHPKIMAPKCH_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x11F78030)
#define NHPKIMAPKCH_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x11F78560)
#define NHPKIMAPKCH_FROMFLX_OFFSET UNITYSDK_OFFSET(0x11F78140)
#define NHPKIMAPKCH_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x11F78940)
#define NHPKIMAPKCH_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x11F78130)
#define NHPKIMAPKCH_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x11F78AF0)
#define NHPKIMAPKCH_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x11F785C0)
#define NHPKIMAPKCH_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x11F788B0)
#define NHPKIMAPKCH_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x11F77F00)
#define NHPKIMAPKCH_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x11F77F90)
#define NHPKIMAPKCH_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x11F781C0)
#define NHPKIMAPKCH__CTOR_OFFSET UNITYSDK_OFFSET(0x11F78820)

inline static constexpr unsigned int NHPKIMAPKCH_TypeDefinitionIndex = 82997;

class NHPKIMAPKCH : public ::HDJJJGCHLEE
{
public:
	::HBIBNDIOKPG* MFKJLJJGHJF; // 0x30
	::GPIOLGMOBLJ* JOFGIJDODCD; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHPKIMAPKCH__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHPKIMAPKCH_LBHNEFGNNNB_OFFSET))(this);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + NHPKIMAPKCH_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::HDJJJGCHLEE* DGNAAPGKIPL()
	{
		return ((::HDJJJGCHLEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + NHPKIMAPKCH_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NHPKIMAPKCH_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + NHPKIMAPKCH_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + NHPKIMAPKCH_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + NHPKIMAPKCH_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Void JFLMLBMNFFK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHPKIMAPKCH_JFLMLBMNFFK_OFFSET))(this);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + NHPKIMAPKCH_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::NHPKIMAPKCH* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::NHPKIMAPKCH*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + NHPKIMAPKCH_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::NHPKIMAPKCH* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::NHPKIMAPKCH*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + NHPKIMAPKCH_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}
};
