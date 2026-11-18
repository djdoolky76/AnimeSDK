#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FOBNALGHPPD_1.h"
#include "unitysdk/HDJJJGCHLEE.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
class GPIOLGMOBLJ;
class HBIBNDIOKPG;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define ICECIJGMCMN_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x15EA1230)
#define ICECIJGMCMN_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x15EA1970)
#define ICECIJGMCMN_FROMFLX_OFFSET UNITYSDK_OFFSET(0x15EA1340)
#define ICECIJGMCMN_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x15EA1F40)
#define ICECIJGMCMN_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x15EA1330)
#define ICECIJGMCMN_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x15EA1D50)
#define ICECIJGMCMN_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x15EA19D0)
#define ICECIJGMCMN_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x15EA1EB0)
#define ICECIJGMCMN_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x15EA09D0)
#define ICECIJGMCMN_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x15EA1190)
#define ICECIJGMCMN_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x15EA13C0)
#define ICECIJGMCMN__CTOR_OFFSET UNITYSDK_OFFSET(0x15EA1CC0)

inline static constexpr unsigned int ICECIJGMCMN_TypeDefinitionIndex = 87156;

class ICECIJGMCMN : public ::HDJJJGCHLEE
{
public:
	::FOBNALGHPPD_1<::System::String*> OCKBDCDMHHG; // 0x30
	::System::Byte _padding0[0x18];
	::HBIBNDIOKPG* KEHECMCDLFC; // 0x50
	::GPIOLGMOBLJ* MOOHFHCPOIE; // 0x58
	::FOBNALGHPPD_1<::System::String*> NHPCDPGCGIL; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICECIJGMCMN__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICECIJGMCMN_LBHNEFGNNNB_OFFSET))(this);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + ICECIJGMCMN_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::HDJJJGCHLEE* DGNAAPGKIPL()
	{
		return ((::HDJJJGCHLEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICECIJGMCMN_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ICECIJGMCMN_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + ICECIJGMCMN_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + ICECIJGMCMN_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::ICECIJGMCMN* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::ICECIJGMCMN*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + ICECIJGMCMN_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Void JFLMLBMNFFK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICECIJGMCMN_JFLMLBMNFFK_OFFSET))(this);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + ICECIJGMCMN_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + ICECIJGMCMN_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::ICECIJGMCMN* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::ICECIJGMCMN*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + ICECIJGMCMN_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}
};
