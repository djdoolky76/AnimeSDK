#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FOBNALGHPPD_1.h"
#include "unitysdk/HDJJJGCHLEE.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
class GPIOLGMOBLJ;
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define JFMKPEGNKGK_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x13ACC3F0)
#define JFMKPEGNKGK_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x13ACCAC0)
#define JFMKPEGNKGK_FROMFLX_OFFSET UNITYSDK_OFFSET(0x13ACC500)
#define JFMKPEGNKGK_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x13ACCF60)
#define JFMKPEGNKGK_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x13ACC4F0)
#define JFMKPEGNKGK_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x13ACCE00)
#define JFMKPEGNKGK_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x13ACCB20)
#define JFMKPEGNKGK_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x13ACD110)
#define JFMKPEGNKGK_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x13ACC130)
#define JFMKPEGNKGK_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x13ACC360)
#define JFMKPEGNKGK_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x13ACC580)
#define JFMKPEGNKGK__CTOR_OFFSET UNITYSDK_OFFSET(0x13ACCD70)

inline static constexpr unsigned int JFMKPEGNKGK_TypeDefinitionIndex = 89725;

class JFMKPEGNKGK : public ::HDJJJGCHLEE
{
public:
	::FOBNALGHPPD_1<::System::Single> BKLHHDEELFL; // 0x30
	::System::Byte _padding0[0x18];
	::FOBNALGHPPD_1<::System::Single> OMAIMFOELNN; // 0x50
	::System::Byte _padding1[0x18];
	::GPIOLGMOBLJ* JOFGIJDODCD; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFMKPEGNKGK__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFMKPEGNKGK_LBHNEFGNNNB_OFFSET))(this);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + JFMKPEGNKGK_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::HDJJJGCHLEE* DGNAAPGKIPL()
	{
		return ((::HDJJJGCHLEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + JFMKPEGNKGK_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JFMKPEGNKGK_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + JFMKPEGNKGK_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + JFMKPEGNKGK_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + JFMKPEGNKGK_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + JFMKPEGNKGK_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::JFMKPEGNKGK* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::JFMKPEGNKGK*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + JFMKPEGNKGK_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	static ::JFMKPEGNKGK* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::JFMKPEGNKGK*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + JFMKPEGNKGK_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void JFLMLBMNFFK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFMKPEGNKGK_JFLMLBMNFFK_OFFSET))(this);
	}
};
