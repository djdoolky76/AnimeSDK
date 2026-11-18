#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FOBNALGHPPD_1.h"
#include "unitysdk/KHFGGFPIAOM.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
class GPIOLGMOBLJ;
class HDJJJGCHLEE;
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define ONFMKEJHPMF_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x172DD9A0)
#define ONFMKEJHPMF_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x172DE200)
#define ONFMKEJHPMF_FROMFLX_OFFSET UNITYSDK_OFFSET(0x172DDAB0)
#define ONFMKEJHPMF_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x172DE5C0)
#define ONFMKEJHPMF_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x172DDAA0)
#define ONFMKEJHPMF_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x172DE770)
#define ONFMKEJHPMF_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x172DE260)
#define ONFMKEJHPMF_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x172DE8D0)
#define ONFMKEJHPMF_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x172DD760)
#define ONFMKEJHPMF_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x172DD910)
#define ONFMKEJHPMF_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x172DDB30)
#define ONFMKEJHPMF__CTOR_OFFSET UNITYSDK_OFFSET(0x172DE530)

inline static constexpr unsigned int ONFMKEJHPMF_TypeDefinitionIndex = 50284;

class ONFMKEJHPMF : public ::KHFGGFPIAOM
{
public:
	::FOBNALGHPPD_1<::System::Single> OMAIMFOELNN; // 0x30
	::System::Byte _padding0[0x18];
	::GPIOLGMOBLJ* JOFGIJDODCD; // 0x50
	::FOBNALGHPPD_1<::System::Single> BKLHHDEELFL; // 0x58
	::System::Byte _padding1[0x18];
	::FOBNALGHPPD_1<::System::Single> MFKJLJJGHJF; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONFMKEJHPMF__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONFMKEJHPMF_LBHNEFGNNNB_OFFSET))(this);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + ONFMKEJHPMF_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::HDJJJGCHLEE* DGNAAPGKIPL()
	{
		return ((::HDJJJGCHLEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + ONFMKEJHPMF_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ONFMKEJHPMF_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + ONFMKEJHPMF_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + ONFMKEJHPMF_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::ONFMKEJHPMF* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::ONFMKEJHPMF*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + ONFMKEJHPMF_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::ONFMKEJHPMF* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::ONFMKEJHPMF*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + ONFMKEJHPMF_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Void JFLMLBMNFFK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONFMKEJHPMF_JFLMLBMNFFK_OFFSET))(this);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + ONFMKEJHPMF_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + ONFMKEJHPMF_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}
};
