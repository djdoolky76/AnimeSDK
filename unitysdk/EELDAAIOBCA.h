#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KHFGGFPIAOM.h"
#include "unitysdk/MEBGCKEHHIN.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
class GPIOLGMOBLJ;
class HDJJJGCHLEE;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define EELDAAIOBCA_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x12BECF60)
#define EELDAAIOBCA_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x12BED570)
#define EELDAAIOBCA_FROMFLX_OFFSET UNITYSDK_OFFSET(0x12BED070)
#define EELDAAIOBCA_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x12BEDA60)
#define EELDAAIOBCA_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x12BED060)
#define EELDAAIOBCA_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x12BED900)
#define EELDAAIOBCA_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x12BED5D0)
#define EELDAAIOBCA_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x12BEDC10)
#define EELDAAIOBCA_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x12BEC920)
#define EELDAAIOBCA_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x12BECEC0)
#define EELDAAIOBCA_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x12BED0F0)
#define EELDAAIOBCA__CTOR_OFFSET UNITYSDK_OFFSET(0x12BED870)

inline static constexpr unsigned int EELDAAIOBCA_TypeDefinitionIndex = 52941;

class EELDAAIOBCA : public ::KHFGGFPIAOM
{
public:
	::GPIOLGMOBLJ* JOFGIJDODCD; // 0x30
	::System::String* OPNMCKJHKLC; // 0x38
	::MEBGCKEHHIN MEFDBLDPCIL; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EELDAAIOBCA__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EELDAAIOBCA_LBHNEFGNNNB_OFFSET))(this);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + EELDAAIOBCA_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::HDJJJGCHLEE* DGNAAPGKIPL()
	{
		return ((::HDJJJGCHLEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + EELDAAIOBCA_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EELDAAIOBCA_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + EELDAAIOBCA_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + EELDAAIOBCA_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + EELDAAIOBCA_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::EELDAAIOBCA* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::EELDAAIOBCA*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + EELDAAIOBCA_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	static ::EELDAAIOBCA* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::EELDAAIOBCA*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + EELDAAIOBCA_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + EELDAAIOBCA_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Void JFLMLBMNFFK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EELDAAIOBCA_JFLMLBMNFFK_OFFSET))(this);
	}
};
