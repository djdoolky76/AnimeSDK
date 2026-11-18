#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ALMLLFFEJOC.h"
#include "unitysdk/FOBNALGHPPD_1.h"
#include "unitysdk/HDJJJGCHLEE.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
class HBIBNDIOKPG;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define IDEHEAGMMGO_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x141BAC10)
#define IDEHEAGMMGO_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x141BB4D0)
#define IDEHEAGMMGO_FROMFLX_OFFSET UNITYSDK_OFFSET(0x141BAD20)
#define IDEHEAGMMGO_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x141BBAF0)
#define IDEHEAGMMGO_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x141BAD10)
#define IDEHEAGMMGO_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x141BB900)
#define IDEHEAGMMGO_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x141BB530)
#define IDEHEAGMMGO_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x141BBA60)
#define IDEHEAGMMGO_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x141BA2D0)
#define IDEHEAGMMGO_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x141BAB80)
#define IDEHEAGMMGO_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x141BADA0)
#define IDEHEAGMMGO__CTOR_OFFSET UNITYSDK_OFFSET(0x141BB860)

inline static constexpr unsigned int IDEHEAGMMGO_TypeDefinitionIndex = 84649;

class IDEHEAGMMGO : public ::HDJJJGCHLEE
{
public:
	::FOBNALGHPPD_1<::System::String*> GBKKHKOPLNJ; // 0x30
	::System::Byte _padding0[0x18];
	::FOBNALGHPPD_1<::System::String*> BODECKIDFGF; // 0x50
	::System::Byte _padding1[0x18];
	::HBIBNDIOKPG* KEHECMCDLFC; // 0x70
	::FOBNALGHPPD_1<::UnityEngine::Vector3> MFDOBMEPCLL; // 0x78
	::System::Byte _padding2[0x18];
	::ALMLLFFEJOC KDMGHOAFBGL; // 0x98

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDEHEAGMMGO__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDEHEAGMMGO_LBHNEFGNNNB_OFFSET))(this);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + IDEHEAGMMGO_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::HDJJJGCHLEE* DGNAAPGKIPL()
	{
		return ((::HDJJJGCHLEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + IDEHEAGMMGO_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IDEHEAGMMGO_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + IDEHEAGMMGO_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + IDEHEAGMMGO_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + IDEHEAGMMGO_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + IDEHEAGMMGO_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::IDEHEAGMMGO* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::IDEHEAGMMGO*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + IDEHEAGMMGO_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Void JFLMLBMNFFK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDEHEAGMMGO_JFLMLBMNFFK_OFFSET))(this);
	}

	static ::IDEHEAGMMGO* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::IDEHEAGMMGO*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + IDEHEAGMMGO_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}
};
