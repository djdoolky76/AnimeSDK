#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FOBNALGHPPD_1.h"
#include "unitysdk/HDJJJGCHLEE.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
class GPIOLGMOBLJ;
class HBIBNDIOKPG;
namespace MoleMole::Battle { class Entity; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define LENAKDJJFIO_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x15DF1220)
#define LENAKDJJFIO_FEHJGECAMIN_OFFSET UNITYSDK_OFFSET(0x15DF1010)
#define LENAKDJJFIO_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x15DF1870)
#define LENAKDJJFIO_FROMFLX_OFFSET UNITYSDK_OFFSET(0x15DF1330)
#define LENAKDJJFIO_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x15DF1E00)
#define LENAKDJJFIO_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x15DF1320)
#define LENAKDJJFIO_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x15DF1C10)
#define LENAKDJJFIO_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x15DF18D0)
#define LENAKDJJFIO_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x15DF1D70)
#define LENAKDJJFIO_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x15DF0970)
#define LENAKDJJFIO_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x15DF1180)
#define LENAKDJJFIO_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x15DF13B0)
#define LENAKDJJFIO__CTOR_OFFSET UNITYSDK_OFFSET(0x15DF1B80)

inline static constexpr unsigned int LENAKDJJFIO_TypeDefinitionIndex = 83321;

class LENAKDJJFIO : public ::HDJJJGCHLEE
{
public:
	::GPIOLGMOBLJ* DMPPGEOCPLC; // 0x30
	::FOBNALGHPPD_1<::System::String*> KMCHLFJNPLD; // 0x38
	::System::Byte _padding0[0x18];
	::HBIBNDIOKPG* KEHECMCDLFC; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LENAKDJJFIO__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LENAKDJJFIO_LBHNEFGNNNB_OFFSET))(this);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + LENAKDJJFIO_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::HDJJJGCHLEE* DGNAAPGKIPL()
	{
		return ((::HDJJJGCHLEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + LENAKDJJFIO_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LENAKDJJFIO_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + LENAKDJJFIO_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + LENAKDJJFIO_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + LENAKDJJFIO_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean FEHJGECAMIN(::MoleMole::Battle::Entity* KECKGDFIALJ, ::MoleMole::Battle::Entity* JHGPEHNCJID, ::System::String* NOFAJEJIODE)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::System::String*))((::PBYTE)hIl2Cpp + LENAKDJJFIO_FEHJGECAMIN_OFFSET))(this, KECKGDFIALJ, JHGPEHNCJID, NOFAJEJIODE);
	}

	static ::LENAKDJJFIO* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::LENAKDJJFIO*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + LENAKDJJFIO_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Void JFLMLBMNFFK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LENAKDJJFIO_JFLMLBMNFFK_OFFSET))(this);
	}

	static ::LENAKDJJFIO* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::LENAKDJJFIO*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + LENAKDJJFIO_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + LENAKDJJFIO_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}
};
