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

#define NHEDJFIFLDG_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x1AE1F8E0)
#define NHEDJFIFLDG_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1AE1FFA0)
#define NHEDJFIFLDG_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1AE1F9F0)
#define NHEDJFIFLDG_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x1AE20480)
#define NHEDJFIFLDG_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x1AE1F9E0)
#define NHEDJFIFLDG_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x1AE20320)
#define NHEDJFIFLDG_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x1AE20000)
#define NHEDJFIFLDG_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x1AE20630)
#define NHEDJFIFLDG_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x1AE1F700)
#define NHEDJFIFLDG_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x1AE1F850)
#define NHEDJFIFLDG_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x1AE1FA70)
#define NHEDJFIFLDG__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE20290)

inline static constexpr unsigned int NHEDJFIFLDG_TypeDefinitionIndex = 54383;

class NHEDJFIFLDG : public ::KHFGGFPIAOM
{
public:
	::FOBNALGHPPD_1<::System::Int32> HFGOOECLHDD; // 0x30
	::System::Byte _padding0[0x18];
	::FOBNALGHPPD_1<::System::Int32> LMIBEHAAIIB; // 0x50
	::System::Byte _padding1[0x18];
	::GPIOLGMOBLJ* EPMNNELBGFG; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHEDJFIFLDG__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHEDJFIFLDG_LBHNEFGNNNB_OFFSET))(this);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + NHEDJFIFLDG_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::HDJJJGCHLEE* DGNAAPGKIPL()
	{
		return ((::HDJJJGCHLEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + NHEDJFIFLDG_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NHEDJFIFLDG_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + NHEDJFIFLDG_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + NHEDJFIFLDG_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::NHEDJFIFLDG* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::NHEDJFIFLDG*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + NHEDJFIFLDG_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	static ::NHEDJFIFLDG* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::NHEDJFIFLDG*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + NHEDJFIFLDG_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + NHEDJFIFLDG_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Void JFLMLBMNFFK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHEDJFIFLDG_JFLMLBMNFFK_OFFSET))(this);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + NHEDJFIFLDG_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}
};
