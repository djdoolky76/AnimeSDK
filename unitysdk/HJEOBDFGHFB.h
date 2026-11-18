#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CCIKICBGGLP.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
class NOKJBIJIFHG;
namespace MoleMole::Config { class ConfigPosRot; }
namespace MoleMole::Config { class EffectAutoDynamicValue; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define HJEOBDFGHFB_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x149501D0)
#define HJEOBDFGHFB_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1494FA40)
#define HJEOBDFGHFB_FROMFLX_OFFSET UNITYSDK_OFFSET(0x149502E0)
#define HJEOBDFGHFB_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x149516E0)
#define HJEOBDFGHFB_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x149502D0)
#define HJEOBDFGHFB_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x14951580)
#define HJEOBDFGHFB_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x1494FAA0)
#define HJEOBDFGHFB_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x149500D0)
#define HJEOBDFGHFB_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x14950360)
#define HJEOBDFGHFB__CTOR_OFFSET UNITYSDK_OFFSET(0x14951560)

inline static constexpr unsigned int HJEOBDFGHFB_TypeDefinitionIndex = 65290;

class HJEOBDFGHFB : public ::CCIKICBGGLP
{
public:
	::MoleMole::Config::ConfigPosRot* HJCIBLGMOJA; // 0x20
	::System::String* BPOPIDAAKAH; // 0x28
	::NOKJBIJIFHG* MMCPAHEFKGL; // 0x30
	::System::String* IBIIEHENIDJ; // 0x38
	::MoleMole::Config::EffectAutoDynamicValue* CAPBKNPEFLG; // 0x40
	::System::String* KIHGNGKBADE; // 0x48
	::UnityEngine::Vector3 FHOJEAEANAL; // 0x50
	::System::Boolean NEEIDLJEOKI; // 0x5C
	::System::Boolean AODMKIGNGKO; // 0x5D
	::System::Boolean HDONNHBBJJG; // 0x5E

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJEOBDFGHFB__CTOR_OFFSET))(this);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + HJEOBDFGHFB_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + HJEOBDFGHFB_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::CCIKICBGGLP* DGNAAPGKIPL()
	{
		return ((::CCIKICBGGLP*(*)(::PVOID))((::PBYTE)hIl2Cpp + HJEOBDFGHFB_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HJEOBDFGHFB_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + HJEOBDFGHFB_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + HJEOBDFGHFB_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::HJEOBDFGHFB* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::HJEOBDFGHFB*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + HJEOBDFGHFB_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + HJEOBDFGHFB_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::HJEOBDFGHFB* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::HJEOBDFGHFB*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + HJEOBDFGHFB_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}
};
