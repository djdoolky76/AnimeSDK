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

#define DEIIHMKDHNI_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x149985F0)
#define DEIIHMKDHNI_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x14998EB0)
#define DEIIHMKDHNI_FROMFLX_OFFSET UNITYSDK_OFFSET(0x14998700)
#define DEIIHMKDHNI_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x14999440)
#define DEIIHMKDHNI_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x149986F0)
#define DEIIHMKDHNI_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x149992E0)
#define DEIIHMKDHNI_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x14998F10)
#define DEIIHMKDHNI_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x149995F0)
#define DEIIHMKDHNI_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x14997C00)
#define DEIIHMKDHNI_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x14998560)
#define DEIIHMKDHNI_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x14998780)
#define DEIIHMKDHNI__CTOR_OFFSET UNITYSDK_OFFSET(0x14999240)

inline static constexpr unsigned int DEIIHMKDHNI_TypeDefinitionIndex = 48162;

class DEIIHMKDHNI : public ::HDJJJGCHLEE
{
public:
	::FOBNALGHPPD_1<::System::String*> BGPMDIKJFPJ; // 0x30
	::System::Byte _padding0[0x18];
	::FOBNALGHPPD_1<::System::String*> BODECKIDFGF; // 0x50
	::System::Byte _padding1[0x18];
	::HBIBNDIOKPG* KEHECMCDLFC; // 0x70
	::FOBNALGHPPD_1<::UnityEngine::Vector3> MFDOBMEPCLL; // 0x78
	::System::Byte _padding2[0x18];
	::ALMLLFFEJOC KDMGHOAFBGL; // 0x98

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEIIHMKDHNI__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEIIHMKDHNI_LBHNEFGNNNB_OFFSET))(this);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + DEIIHMKDHNI_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::HDJJJGCHLEE* DGNAAPGKIPL()
	{
		return ((::HDJJJGCHLEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + DEIIHMKDHNI_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DEIIHMKDHNI_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + DEIIHMKDHNI_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + DEIIHMKDHNI_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::DEIIHMKDHNI* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::DEIIHMKDHNI*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + DEIIHMKDHNI_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + DEIIHMKDHNI_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::DEIIHMKDHNI* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::DEIIHMKDHNI*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + DEIIHMKDHNI_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void JFLMLBMNFFK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEIIHMKDHNI_JFLMLBMNFFK_OFFSET))(this);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + DEIIHMKDHNI_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}
};
