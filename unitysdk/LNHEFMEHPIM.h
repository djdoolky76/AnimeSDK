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

#define LNHEFMEHPIM_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x1637D670)
#define LNHEFMEHPIM_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1637DB60)
#define LNHEFMEHPIM_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1637D780)
#define LNHEFMEHPIM_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x1637E0A0)
#define LNHEFMEHPIM_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x1637D770)
#define LNHEFMEHPIM_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x1637DEB0)
#define LNHEFMEHPIM_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x1637DBC0)
#define LNHEFMEHPIM_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x1637E010)
#define LNHEFMEHPIM_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x1637CC70)
#define LNHEFMEHPIM_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x1637D5E0)
#define LNHEFMEHPIM_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x1637D800)
#define LNHEFMEHPIM__CTOR_OFFSET UNITYSDK_OFFSET(0x1637DE20)

inline static constexpr unsigned int LNHEFMEHPIM_TypeDefinitionIndex = 69405;

class LNHEFMEHPIM : public ::HDJJJGCHLEE
{
public:
	::FOBNALGHPPD_1<::System::String*> DCJCHGOGLMF; // 0x30
	::System::Byte _padding0[0x18];
	::HBIBNDIOKPG* KEHECMCDLFC; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNHEFMEHPIM__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNHEFMEHPIM_LBHNEFGNNNB_OFFSET))(this);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + LNHEFMEHPIM_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::HDJJJGCHLEE* DGNAAPGKIPL()
	{
		return ((::HDJJJGCHLEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + LNHEFMEHPIM_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LNHEFMEHPIM_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + LNHEFMEHPIM_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + LNHEFMEHPIM_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::LNHEFMEHPIM* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::LNHEFMEHPIM*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + LNHEFMEHPIM_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Void JFLMLBMNFFK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNHEFMEHPIM_JFLMLBMNFFK_OFFSET))(this);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + LNHEFMEHPIM_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + LNHEFMEHPIM_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::LNHEFMEHPIM* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::LNHEFMEHPIM*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + LNHEFMEHPIM_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}
};
