#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FOBNALGHPPD_1.h"
#include "unitysdk/HDJJJGCHLEE.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
class GPIOLGMOBLJ;
class HBIBNDIOKPG;
namespace MoleMole::Config { class EffectAutoDynamicValue; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define EHDKDDMICFA_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x1710B960)
#define EHDKDDMICFA_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1710C790)
#define EHDKDDMICFA_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1710BA70)
#define EHDKDDMICFA_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x1710CD00)
#define EHDKDDMICFA_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x1710BA60)
#define EHDKDDMICFA_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x1710CEB0)
#define EHDKDDMICFA_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x1710C7F0)
#define EHDKDDMICFA_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x1710D010)
#define EHDKDDMICFA_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x1710AF80)
#define EHDKDDMICFA_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x1710B880)
#define EHDKDDMICFA_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x1710BAF0)
#define EHDKDDMICFA__CTOR_OFFSET UNITYSDK_OFFSET(0x1710CC70)

inline static constexpr unsigned int EHDKDDMICFA_TypeDefinitionIndex = 76169;

class EHDKDDMICFA : public ::HDJJJGCHLEE
{
public:
	::FOBNALGHPPD_1<::System::String*> DCJCHGOGLMF; // 0x30
	::System::Byte _padding0[0x18];
	::HBIBNDIOKPG* IFEFGIHOKOC; // 0x50
	::GPIOLGMOBLJ* BPHNOMCLEJD; // 0x58
	::MoleMole::Config::EffectAutoDynamicValue* NFKNDLMAPMO; // 0x60
	::FOBNALGHPPD_1<::UnityEngine::Vector3> JEJMGCNBMAD; // 0x68
	::System::Byte _padding1[0x18];
	::HBIBNDIOKPG* CJHKKDKFGJE; // 0x88
	::FOBNALGHPPD_1<::UnityEngine::Vector3> ILOJFPNKJII; // 0x90

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHDKDDMICFA__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHDKDDMICFA_LBHNEFGNNNB_OFFSET))(this);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + EHDKDDMICFA_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::HDJJJGCHLEE* DGNAAPGKIPL()
	{
		return ((::HDJJJGCHLEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + EHDKDDMICFA_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EHDKDDMICFA_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + EHDKDDMICFA_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + EHDKDDMICFA_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::EHDKDDMICFA* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::EHDKDDMICFA*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + EHDKDDMICFA_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + EHDKDDMICFA_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::EHDKDDMICFA* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::EHDKDDMICFA*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + EHDKDDMICFA_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Void JFLMLBMNFFK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHDKDDMICFA_JFLMLBMNFFK_OFFSET))(this);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + EHDKDDMICFA_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}
};
