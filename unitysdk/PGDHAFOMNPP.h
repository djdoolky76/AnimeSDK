#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OCBJEIHKMBE.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
namespace MoleMole { class HackerGameBaseDamage; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define PGDHAFOMNPP_COKNIICCODC_OFFSET UNITYSDK_OFFSET(0x178C5A50)
#define PGDHAFOMNPP_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x178C5480)
#define PGDHAFOMNPP_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x178C57C0)
#define PGDHAFOMNPP_FROMFLX_OFFSET UNITYSDK_OFFSET(0x178C55A0)
#define PGDHAFOMNPP_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x178C5C40)
#define PGDHAFOMNPP_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x178C5580)
#define PGDHAFOMNPP_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x178C5AE0)
#define PGDHAFOMNPP_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x178C5820)
#define PGDHAFOMNPP_IGCGENIMIIP_OFFSET UNITYSDK_OFFSET(0x178C5590)
#define PGDHAFOMNPP_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x178C5470)
#define PGDHAFOMNPP_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x178C5620)
#define PGDHAFOMNPP_PPFAELPEMPE_OFFSET UNITYSDK_OFFSET(0x178C5DF0)
#define PGDHAFOMNPP__CTOR_OFFSET UNITYSDK_OFFSET(0x178C5AD0)

inline static constexpr unsigned int PGDHAFOMNPP_TypeDefinitionIndex = 51544;

class PGDHAFOMNPP : public ::OCBJEIHKMBE
{
public:
	::System::Int32 JMLCPADPPNM; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGDHAFOMNPP__CTOR_OFFSET))(this);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + PGDHAFOMNPP_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::OCBJEIHKMBE* DGNAAPGKIPL()
	{
		return ((::OCBJEIHKMBE*(*)(::PVOID))((::PBYTE)hIl2Cpp + PGDHAFOMNPP_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PGDHAFOMNPP_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Void IGCGENIMIIP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGDHAFOMNPP_IGCGENIMIIP_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + PGDHAFOMNPP_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + PGDHAFOMNPP_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::MoleMole::HackerGameBaseDamage* COKNIICCODC()
	{
		return ((::MoleMole::HackerGameBaseDamage*(*)(::PVOID))((::PBYTE)hIl2Cpp + PGDHAFOMNPP_COKNIICCODC_OFFSET))(this);
	}

	static ::PGDHAFOMNPP* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::PGDHAFOMNPP*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + PGDHAFOMNPP_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + PGDHAFOMNPP_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::PGDHAFOMNPP* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::PGDHAFOMNPP*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + PGDHAFOMNPP_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::MoleMole::HackerGameBaseDamage* PPFAELPEMPE()
	{
		return ((::MoleMole::HackerGameBaseDamage*(*)(::PVOID))((::PBYTE)hIl2Cpp + PGDHAFOMNPP_PPFAELPEMPE_OFFSET))(this);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + PGDHAFOMNPP_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}
};
