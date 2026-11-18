#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DLPMMBJICAN.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
class IHPPCIEFNOC;
class JPPHPNAAJMO;
namespace MoleMole::Config { class ConfigEntityAttackProperty; }
namespace MoleMole::Config { class DynamicFloat; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define MCCCHPBMNOB_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x13D14770)
#define MCCCHPBMNOB_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x13D14FA0)
#define MCCCHPBMNOB_FROMFLX_OFFSET UNITYSDK_OFFSET(0x13D14880)
#define MCCCHPBMNOB_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x13D15540)
#define MCCCHPBMNOB_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x13D14870)
#define MCCCHPBMNOB_HDEMOBEKGIP_OFFSET UNITYSDK_OFFSET(0x13D14240)
#define MCCCHPBMNOB_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x13D153E0)
#define MCCCHPBMNOB_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x13D15000)
#define MCCCHPBMNOB_KDPKEKEJACM_OFFSET UNITYSDK_OFFSET(0x13D15340)
#define MCCCHPBMNOB_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x13D146E0)
#define MCCCHPBMNOB_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x13D14900)
#define MCCCHPBMNOB__CTOR_OFFSET UNITYSDK_OFFSET(0x13D15330)

inline static constexpr unsigned int MCCCHPBMNOB_TypeDefinitionIndex = 75697;

class MCCCHPBMNOB : public ::DLPMMBJICAN
{
public:
	::MoleMole::Config::DynamicFloat* BAOELILBOOG; // 0x10
	::MoleMole::Config::DynamicFloat* IHFMEBKAJPH; // 0x18
	::MoleMole::Config::DynamicFloat* KHJHODLGGFD; // 0x20
	::MoleMole::Config::ConfigEntityAttackProperty* BJPGCNGIOME; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCCCHPBMNOB__CTOR_OFFSET))(this);
	}

	::System::Void HDEMOBEKGIP(::JPPHPNAAJMO* AOBNJBCBHAK, ::IHPPCIEFNOC* KAAAHPHMNGI)
	{
		return ((::System::Void(*)(::PVOID, ::JPPHPNAAJMO*, ::IHPPCIEFNOC*))((::PBYTE)hIl2Cpp + MCCCHPBMNOB_HDEMOBEKGIP_OFFSET))(this, AOBNJBCBHAK, KAAAHPHMNGI);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MCCCHPBMNOB_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::DLPMMBJICAN* DGNAAPGKIPL()
	{
		return ((::DLPMMBJICAN*(*)(::PVOID))((::PBYTE)hIl2Cpp + MCCCHPBMNOB_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MCCCHPBMNOB_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MCCCHPBMNOB_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MCCCHPBMNOB_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void KDPKEKEJACM(::JPPHPNAAJMO* MIALFKCCCPI, ::IHPPCIEFNOC* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::JPPHPNAAJMO*, ::IHPPCIEFNOC*))((::PBYTE)hIl2Cpp + MCCCHPBMNOB_KDPKEKEJACM_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	static ::MCCCHPBMNOB* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::MCCCHPBMNOB*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MCCCHPBMNOB_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MCCCHPBMNOB_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MCCCHPBMNOB_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::MCCCHPBMNOB* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::MCCCHPBMNOB*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MCCCHPBMNOB_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}
};
