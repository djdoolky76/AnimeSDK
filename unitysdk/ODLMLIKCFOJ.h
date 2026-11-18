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

#define ODLMLIKCFOJ_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x16BFF450)
#define ODLMLIKCFOJ_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16BFFB10)
#define ODLMLIKCFOJ_FROMFLX_OFFSET UNITYSDK_OFFSET(0x16BFF560)
#define ODLMLIKCFOJ_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x16BFFFF0)
#define ODLMLIKCFOJ_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x16BFF550)
#define ODLMLIKCFOJ_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x16BFFE90)
#define ODLMLIKCFOJ_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x16BFFB70)
#define ODLMLIKCFOJ_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x16C001A0)
#define ODLMLIKCFOJ_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x16BFF270)
#define ODLMLIKCFOJ_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x16BFF3C0)
#define ODLMLIKCFOJ_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x16BFF5E0)
#define ODLMLIKCFOJ__CTOR_OFFSET UNITYSDK_OFFSET(0x16BFFE00)

inline static constexpr unsigned int ODLMLIKCFOJ_TypeDefinitionIndex = 38643;

class ODLMLIKCFOJ : public ::KHFGGFPIAOM
{
public:
	::FOBNALGHPPD_1<::System::Boolean> LMIBEHAAIIB; // 0x30
	::System::Byte _padding0[0x18];
	::FOBNALGHPPD_1<::System::Boolean> HFGOOECLHDD; // 0x50
	::System::Byte _padding1[0x18];
	::GPIOLGMOBLJ* EPMNNELBGFG; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODLMLIKCFOJ__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODLMLIKCFOJ_LBHNEFGNNNB_OFFSET))(this);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + ODLMLIKCFOJ_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::HDJJJGCHLEE* DGNAAPGKIPL()
	{
		return ((::HDJJJGCHLEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + ODLMLIKCFOJ_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ODLMLIKCFOJ_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + ODLMLIKCFOJ_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + ODLMLIKCFOJ_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + ODLMLIKCFOJ_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::ODLMLIKCFOJ* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::ODLMLIKCFOJ*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + ODLMLIKCFOJ_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	static ::ODLMLIKCFOJ* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::ODLMLIKCFOJ*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + ODLMLIKCFOJ_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void JFLMLBMNFFK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODLMLIKCFOJ_JFLMLBMNFFK_OFFSET))(this);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + ODLMLIKCFOJ_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}
};
