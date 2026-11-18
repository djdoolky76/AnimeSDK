#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FOBNALGHPPD_1.h"
#include "unitysdk/HDJJJGCHLEE.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
class HBIBNDIOKPG;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define HMEBFBAJHHA_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x16CFB790)
#define HMEBFBAJHHA_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16CFBE30)
#define HMEBFBAJHHA_FROMFLX_OFFSET UNITYSDK_OFFSET(0x16CFB8A0)
#define HMEBFBAJHHA_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x16CFC3B0)
#define HMEBFBAJHHA_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x16CFB890)
#define HMEBFBAJHHA_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x16CFC250)
#define HMEBFBAJHHA_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x16CFBE90)
#define HMEBFBAJHHA_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x16CFC1C0)
#define HMEBFBAJHHA_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x16CFB3D0)
#define HMEBFBAJHHA_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x16CFB700)
#define HMEBFBAJHHA_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x16CFB920)
#define HMEBFBAJHHA__CTOR_OFFSET UNITYSDK_OFFSET(0x16CFC130)

inline static constexpr unsigned int HMEBFBAJHHA_TypeDefinitionIndex = 82178;

class HMEBFBAJHHA : public ::HDJJJGCHLEE
{
public:
	::FOBNALGHPPD_1<::System::Boolean> KFAENCNBGDL; // 0x30
	::System::Byte _padding0[0x18];
	::HBIBNDIOKPG* KEHECMCDLFC; // 0x50
	::FOBNALGHPPD_1<::System::String*> OLHANDPEFNE; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMEBFBAJHHA__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMEBFBAJHHA_LBHNEFGNNNB_OFFSET))(this);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + HMEBFBAJHHA_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::HDJJJGCHLEE* DGNAAPGKIPL()
	{
		return ((::HDJJJGCHLEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + HMEBFBAJHHA_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HMEBFBAJHHA_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + HMEBFBAJHHA_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + HMEBFBAJHHA_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + HMEBFBAJHHA_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Void JFLMLBMNFFK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMEBFBAJHHA_JFLMLBMNFFK_OFFSET))(this);
	}

	static ::HMEBFBAJHHA* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::HMEBFBAJHHA*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + HMEBFBAJHHA_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + HMEBFBAJHHA_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::HMEBFBAJHHA* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::HMEBFBAJHHA*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + HMEBFBAJHHA_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}
};
