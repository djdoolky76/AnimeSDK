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

#define APOAHOKODFO_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x11BE4120)
#define APOAHOKODFO_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x11BE47E0)
#define APOAHOKODFO_FROMFLX_OFFSET UNITYSDK_OFFSET(0x11BE4230)
#define APOAHOKODFO_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x11BE4B60)
#define APOAHOKODFO_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x11BE4220)
#define APOAHOKODFO_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x11BE4D10)
#define APOAHOKODFO_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x11BE4840)
#define APOAHOKODFO_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x11BE4E70)
#define APOAHOKODFO_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x11BE3F40)
#define APOAHOKODFO_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x11BE4090)
#define APOAHOKODFO_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x11BE42B0)
#define APOAHOKODFO__CTOR_OFFSET UNITYSDK_OFFSET(0x11BE4AD0)

inline static constexpr unsigned int APOAHOKODFO_TypeDefinitionIndex = 55521;

class APOAHOKODFO : public ::KHFGGFPIAOM
{
public:
	::GPIOLGMOBLJ* EPMNNELBGFG; // 0x30
	::FOBNALGHPPD_1<::System::Boolean> LMIBEHAAIIB; // 0x38
	::System::Byte _padding0[0x18];
	::FOBNALGHPPD_1<::System::Boolean> HFGOOECLHDD; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APOAHOKODFO__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APOAHOKODFO_LBHNEFGNNNB_OFFSET))(this);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + APOAHOKODFO_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::HDJJJGCHLEE* DGNAAPGKIPL()
	{
		return ((::HDJJJGCHLEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + APOAHOKODFO_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + APOAHOKODFO_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + APOAHOKODFO_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + APOAHOKODFO_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + APOAHOKODFO_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + APOAHOKODFO_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::APOAHOKODFO* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::APOAHOKODFO*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + APOAHOKODFO_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::APOAHOKODFO* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::APOAHOKODFO*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + APOAHOKODFO_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Void JFLMLBMNFFK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APOAHOKODFO_JFLMLBMNFFK_OFFSET))(this);
	}
};
