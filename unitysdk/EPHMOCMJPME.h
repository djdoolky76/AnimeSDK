#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FOBNALGHPPD_1.h"
#include "unitysdk/HDJJJGCHLEE.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/EntityHandle.h"

class FKNIEPCILLG;
class HBIBNDIOKPG;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define EPHMOCMJPME_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x172525A0)
#define EPHMOCMJPME_EAOFNOLGMFG_OFFSET UNITYSDK_OFFSET(0x17252430)
#define EPHMOCMJPME_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x17252C90)
#define EPHMOCMJPME_FROMFLX_OFFSET UNITYSDK_OFFSET(0x172526B0)
#define EPHMOCMJPME_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x17253080)
#define EPHMOCMJPME_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x172526A0)
#define EPHMOCMJPME_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x17253230)
#define EPHMOCMJPME_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x17252CF0)
#define EPHMOCMJPME_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x17253390)
#define EPHMOCMJPME_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x17251FC0)
#define EPHMOCMJPME_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x17252500)
#define EPHMOCMJPME_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x17252730)
#define EPHMOCMJPME__CTOR_OFFSET UNITYSDK_OFFSET(0x17252FF0)

inline static constexpr unsigned int EPHMOCMJPME_TypeDefinitionIndex = 52438;

class EPHMOCMJPME : public ::HDJJJGCHLEE
{
public:
	::FOBNALGHPPD_1<::System::String*> BODECKIDFGF; // 0x30
	::System::Byte _padding0[0x18];
	::HBIBNDIOKPG* PBANCBCAMOI; // 0x50
	::HBIBNDIOKPG* MCEHKCOHJEO; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPHMOCMJPME__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPHMOCMJPME_LBHNEFGNNNB_OFFSET))(this);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + EPHMOCMJPME_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::HDJJJGCHLEE* DGNAAPGKIPL()
	{
		return ((::HDJJJGCHLEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPHMOCMJPME_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPHMOCMJPME_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + EPHMOCMJPME_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + EPHMOCMJPME_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + EPHMOCMJPME_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + EPHMOCMJPME_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::MoleMole::EntityHandle EAOFNOLGMFG()
	{
		return ((::MoleMole::EntityHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + EPHMOCMJPME_EAOFNOLGMFG_OFFSET))(this);
	}

	static ::EPHMOCMJPME* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::EPHMOCMJPME*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + EPHMOCMJPME_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::EPHMOCMJPME* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::EPHMOCMJPME*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + EPHMOCMJPME_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Void JFLMLBMNFFK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPHMOCMJPME_JFLMLBMNFFK_OFFSET))(this);
	}
};
