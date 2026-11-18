#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FOBNALGHPPD_1.h"
#include "unitysdk/HDJJJGCHLEE.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define PKBDEGAEMFC_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x1198F050)
#define PKBDEGAEMFC_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1198F880)
#define PKBDEGAEMFC_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1198F160)
#define PKBDEGAEMFC_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x1198FD60)
#define PKBDEGAEMFC_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x1198F150)
#define PKBDEGAEMFC_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x1198FC00)
#define PKBDEGAEMFC_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x1198F8E0)
#define PKBDEGAEMFC_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x1198FF10)
#define PKBDEGAEMFC_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x1198EC70)
#define PKBDEGAEMFC_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x1198F000)
#define PKBDEGAEMFC_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x1198F1E0)
#define PKBDEGAEMFC__CTOR_OFFSET UNITYSDK_OFFSET(0x1198FB70)

inline static constexpr unsigned int PKBDEGAEMFC_TypeDefinitionIndex = 60339;

class PKBDEGAEMFC : public ::HDJJJGCHLEE
{
public:
	::FOBNALGHPPD_1<::System::Boolean> HFBPONNNLBA; // 0x30
	::System::Byte _padding0[0x18];
	::FOBNALGHPPD_1<::System::Int32> BHMFDMBFEKP; // 0x50
	::System::Byte _padding1[0x18];
	::FOBNALGHPPD_1<::System::Int32> KOPONDLAANH; // 0x70
	::System::Byte _padding2[0x18];
	::FOBNALGHPPD_1<::System::String*> NJCFHJPAKDB; // 0x90

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKBDEGAEMFC__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKBDEGAEMFC_LBHNEFGNNNB_OFFSET))(this);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + PKBDEGAEMFC_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::HDJJJGCHLEE* DGNAAPGKIPL()
	{
		return ((::HDJJJGCHLEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + PKBDEGAEMFC_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PKBDEGAEMFC_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + PKBDEGAEMFC_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + PKBDEGAEMFC_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + PKBDEGAEMFC_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + PKBDEGAEMFC_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::PKBDEGAEMFC* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::PKBDEGAEMFC*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + PKBDEGAEMFC_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	static ::PKBDEGAEMFC* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::PKBDEGAEMFC*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + PKBDEGAEMFC_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void JFLMLBMNFFK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKBDEGAEMFC_JFLMLBMNFFK_OFFSET))(this);
	}
};
