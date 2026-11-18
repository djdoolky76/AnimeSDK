#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FOBNALGHPPD_1.h"
#include "unitysdk/HDJJJGCHLEE.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
class HBIBNDIOKPG;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define PGHMMBCHCAC_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x150C7B40)
#define PGHMMBCHCAC_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x150C8050)
#define PGHMMBCHCAC_FROMFLX_OFFSET UNITYSDK_OFFSET(0x150C7C50)
#define PGHMMBCHCAC_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x150C83A0)
#define PGHMMBCHCAC_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x150C7C40)
#define PGHMMBCHCAC_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x150C85E0)
#define PGHMMBCHCAC_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x150C80B0)
#define PGHMMBCHCAC_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x150C8550)
#define PGHMMBCHCAC_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x150C7850)
#define PGHMMBCHCAC_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x150C7AB0)
#define PGHMMBCHCAC_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x150C7CD0)
#define PGHMMBCHCAC__CTOR_OFFSET UNITYSDK_OFFSET(0x150C8310)

inline static constexpr unsigned int PGHMMBCHCAC_TypeDefinitionIndex = 62579;

class PGHMMBCHCAC : public ::HDJJJGCHLEE
{
public:
	::HBIBNDIOKPG* KEHECMCDLFC; // 0x30
	::FOBNALGHPPD_1<::System::String*> AOLGDHDOCLP; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGHMMBCHCAC__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGHMMBCHCAC_LBHNEFGNNNB_OFFSET))(this);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + PGHMMBCHCAC_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::HDJJJGCHLEE* DGNAAPGKIPL()
	{
		return ((::HDJJJGCHLEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + PGHMMBCHCAC_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PGHMMBCHCAC_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + PGHMMBCHCAC_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + PGHMMBCHCAC_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + PGHMMBCHCAC_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::PGHMMBCHCAC* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::PGHMMBCHCAC*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + PGHMMBCHCAC_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + PGHMMBCHCAC_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void JFLMLBMNFFK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGHMMBCHCAC_JFLMLBMNFFK_OFFSET))(this);
	}

	static ::PGHMMBCHCAC* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::PGHMMBCHCAC*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + PGHMMBCHCAC_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}
};
