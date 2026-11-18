#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KHFGGFPIAOM.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
class GPIOLGMOBLJ;
class HDJJJGCHLEE;
namespace MoleMole::Config { class ConfigDynamicValue; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define BHICAHDJKHH_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x14251600)
#define BHICAHDJKHH_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x14251B00)
#define BHICAHDJKHH_FROMFLX_OFFSET UNITYSDK_OFFSET(0x14251710)
#define BHICAHDJKHH_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x14252040)
#define BHICAHDJKHH_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x14251700)
#define BHICAHDJKHH_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x14251EE0)
#define BHICAHDJKHH_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x14251B60)
#define BHICAHDJKHH_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x14251E50)
#define BHICAHDJKHH_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x14251420)
#define BHICAHDJKHH_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x14251560)
#define BHICAHDJKHH_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x14251790)
#define BHICAHDJKHH__CTOR_OFFSET UNITYSDK_OFFSET(0x14251DC0)

inline static constexpr unsigned int BHICAHDJKHH_TypeDefinitionIndex = 63657;

class BHICAHDJKHH : public ::KHFGGFPIAOM
{
public:
	::MoleMole::Config::ConfigDynamicValue* GPIOJBLKFAJ; // 0x30
	::GPIOLGMOBLJ* JOFGIJDODCD; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHICAHDJKHH__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHICAHDJKHH_LBHNEFGNNNB_OFFSET))(this);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + BHICAHDJKHH_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::HDJJJGCHLEE* DGNAAPGKIPL()
	{
		return ((::HDJJJGCHLEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + BHICAHDJKHH_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BHICAHDJKHH_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + BHICAHDJKHH_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + BHICAHDJKHH_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void JFLMLBMNFFK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHICAHDJKHH_JFLMLBMNFFK_OFFSET))(this);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + BHICAHDJKHH_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::BHICAHDJKHH* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::BHICAHDJKHH*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + BHICAHDJKHH_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	static ::BHICAHDJKHH* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::BHICAHDJKHH*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + BHICAHDJKHH_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + BHICAHDJKHH_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}
};
