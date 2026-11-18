#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HDJJJGCHLEE.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
class GPIOLGMOBLJ;
class HBIBNDIOKPG;
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define BJEMCOPDCPM_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x14C472D0)
#define BJEMCOPDCPM_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x14C47800)
#define BJEMCOPDCPM_FROMFLX_OFFSET UNITYSDK_OFFSET(0x14C473E0)
#define BJEMCOPDCPM_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x14C47D40)
#define BJEMCOPDCPM_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x14C473D0)
#define BJEMCOPDCPM_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x14C47BE0)
#define BJEMCOPDCPM_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x14C47860)
#define BJEMCOPDCPM_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x14C47B50)
#define BJEMCOPDCPM_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x14C46DD0)
#define BJEMCOPDCPM_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x14C47230)
#define BJEMCOPDCPM_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x14C47460)
#define BJEMCOPDCPM__CTOR_OFFSET UNITYSDK_OFFSET(0x14C47AC0)

inline static constexpr unsigned int BJEMCOPDCPM_TypeDefinitionIndex = 46442;

class BJEMCOPDCPM : public ::HDJJJGCHLEE
{
public:
	::HBIBNDIOKPG* MFKJLJJGHJF; // 0x30
	::GPIOLGMOBLJ* JOFGIJDODCD; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJEMCOPDCPM__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJEMCOPDCPM_LBHNEFGNNNB_OFFSET))(this);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + BJEMCOPDCPM_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::HDJJJGCHLEE* DGNAAPGKIPL()
	{
		return ((::HDJJJGCHLEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + BJEMCOPDCPM_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BJEMCOPDCPM_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + BJEMCOPDCPM_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + BJEMCOPDCPM_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void JFLMLBMNFFK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJEMCOPDCPM_JFLMLBMNFFK_OFFSET))(this);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + BJEMCOPDCPM_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::BJEMCOPDCPM* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::BJEMCOPDCPM*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + BJEMCOPDCPM_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	static ::BJEMCOPDCPM* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::BJEMCOPDCPM*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + BJEMCOPDCPM_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + BJEMCOPDCPM_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}
};
