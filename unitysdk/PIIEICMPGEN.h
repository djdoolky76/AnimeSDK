#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FOBNALGHPPD_1.h"
#include "unitysdk/KHFGGFPIAOM.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
class GPIOLGMOBLJ;
class HDJJJGCHLEE;
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define PIIEICMPGEN_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x1197EC50)
#define PIIEICMPGEN_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1197F320)
#define PIIEICMPGEN_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1197ED60)
#define PIIEICMPGEN_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x1197F890)
#define PIIEICMPGEN_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x1197ED50)
#define PIIEICMPGEN_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x1197F730)
#define PIIEICMPGEN_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x1197F380)
#define PIIEICMPGEN_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x1197F6A0)
#define PIIEICMPGEN_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x1197E900)
#define PIIEICMPGEN_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x1197EBC0)
#define PIIEICMPGEN_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x1197EDE0)
#define PIIEICMPGEN__CTOR_OFFSET UNITYSDK_OFFSET(0x1197F610)

inline static constexpr unsigned int PIIEICMPGEN_TypeDefinitionIndex = 55335;

class PIIEICMPGEN : public ::KHFGGFPIAOM
{
public:
	::FOBNALGHPPD_1<::UnityEngine::Vector3> BDPOBPDKLHJ; // 0x30
	::System::Byte _padding0[0x18];
	::FOBNALGHPPD_1<::System::Single> AAEBAFAMFCC; // 0x50
	::System::Byte _padding1[0x18];
	::GPIOLGMOBLJ* DOGBOBBDLEE; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIIEICMPGEN__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIIEICMPGEN_LBHNEFGNNNB_OFFSET))(this);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + PIIEICMPGEN_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::HDJJJGCHLEE* DGNAAPGKIPL()
	{
		return ((::HDJJJGCHLEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIIEICMPGEN_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PIIEICMPGEN_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + PIIEICMPGEN_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + PIIEICMPGEN_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void JFLMLBMNFFK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIIEICMPGEN_JFLMLBMNFFK_OFFSET))(this);
	}

	static ::PIIEICMPGEN* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::PIIEICMPGEN*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + PIIEICMPGEN_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	static ::PIIEICMPGEN* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::PIIEICMPGEN*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + PIIEICMPGEN_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + PIIEICMPGEN_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + PIIEICMPGEN_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}
};
