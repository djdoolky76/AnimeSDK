#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DOHFIMEPJHN.h"
#include "unitysdk/MoleMole/Config/BuffGroupName.h"
#include "unitysdk/PICPGIFICCC.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define BMJGKGNBAEB_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x14C501A0)
#define BMJGKGNBAEB_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x14C4FF20)
#define BMJGKGNBAEB_FROMFLX_OFFSET UNITYSDK_OFFSET(0x14C502B0)
#define BMJGKGNBAEB_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x14C506A0)
#define BMJGKGNBAEB_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x14C502A0)
#define BMJGKGNBAEB_HEFNIOOCCIM_OFFSET UNITYSDK_OFFSET(0x14C4FED0)
#define BMJGKGNBAEB_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x14C50540)
#define BMJGKGNBAEB_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x14C4FF80)
#define BMJGKGNBAEB_IGEGDFPMHAO_OFFSET UNITYSDK_OFFSET(0x14C50850)
#define BMJGKGNBAEB_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x14C50130)
#define BMJGKGNBAEB_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x14C50330)
#define BMJGKGNBAEB__CTOR_OFFSET UNITYSDK_OFFSET(0x14C504D0)

inline static constexpr unsigned int BMJGKGNBAEB_TypeDefinitionIndex = 41305;

class BMJGKGNBAEB : public ::PICPGIFICCC
{
public:
	::MoleMole::Config::BuffGroupName OGEJKIJCNFH; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMJGKGNBAEB__CTOR_OFFSET))(this);
	}

	::DOHFIMEPJHN HEFNIOOCCIM()
	{
		return ((::DOHFIMEPJHN(*)(::PVOID))((::PBYTE)hIl2Cpp + BMJGKGNBAEB_HEFNIOOCCIM_OFFSET))(this);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + BMJGKGNBAEB_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + BMJGKGNBAEB_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::PICPGIFICCC* DGNAAPGKIPL()
	{
		return ((::PICPGIFICCC*(*)(::PVOID))((::PBYTE)hIl2Cpp + BMJGKGNBAEB_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BMJGKGNBAEB_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + BMJGKGNBAEB_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::BMJGKGNBAEB* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::BMJGKGNBAEB*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + BMJGKGNBAEB_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + BMJGKGNBAEB_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::BMJGKGNBAEB* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::BMJGKGNBAEB*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + BMJGKGNBAEB_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + BMJGKGNBAEB_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::DOHFIMEPJHN IGEGDFPMHAO()
	{
		return ((::DOHFIMEPJHN(*)(::PVOID))((::PBYTE)hIl2Cpp + BMJGKGNBAEB_IGEGDFPMHAO_OFFSET))(this);
	}
};
