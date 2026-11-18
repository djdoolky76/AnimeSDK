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

#define PHNOJCLMNLA_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x1C659990)
#define PHNOJCLMNLA_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1C65A1F0)
#define PHNOJCLMNLA_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1C659AA0)
#define PHNOJCLMNLA_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x1C65A640)
#define PHNOJCLMNLA_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x1C659A90)
#define PHNOJCLMNLA_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x1C65A7F0)
#define PHNOJCLMNLA_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x1C65A250)
#define PHNOJCLMNLA_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x1C65A5B0)
#define PHNOJCLMNLA_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x1C659770)
#define PHNOJCLMNLA_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x1C659900)
#define PHNOJCLMNLA_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x1C659B20)
#define PHNOJCLMNLA__CTOR_OFFSET UNITYSDK_OFFSET(0x1C65A520)

inline static constexpr unsigned int PHNOJCLMNLA_TypeDefinitionIndex = 74536;

class PHNOJCLMNLA : public ::KHFGGFPIAOM
{
public:
	::GPIOLGMOBLJ* JOFGIJDODCD; // 0x30
	::FOBNALGHPPD_1<::System::Int32> OMAIMFOELNN; // 0x38
	::System::Byte _padding0[0x18];
	::FOBNALGHPPD_1<::System::Int32> BKLHHDEELFL; // 0x58
	::System::Byte _padding1[0x18];
	::FOBNALGHPPD_1<::System::Int32> MFKJLJJGHJF; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHNOJCLMNLA__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHNOJCLMNLA_LBHNEFGNNNB_OFFSET))(this);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + PHNOJCLMNLA_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::HDJJJGCHLEE* DGNAAPGKIPL()
	{
		return ((::HDJJJGCHLEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + PHNOJCLMNLA_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PHNOJCLMNLA_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + PHNOJCLMNLA_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + PHNOJCLMNLA_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void JFLMLBMNFFK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHNOJCLMNLA_JFLMLBMNFFK_OFFSET))(this);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + PHNOJCLMNLA_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::PHNOJCLMNLA* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::PHNOJCLMNLA*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + PHNOJCLMNLA_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + PHNOJCLMNLA_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::PHNOJCLMNLA* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::PHNOJCLMNLA*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + PHNOJCLMNLA_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}
};
