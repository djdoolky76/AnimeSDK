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

#define KBABHPAMDDM_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x13C473F0)
#define KBABHPAMDDM_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x13C47C20)
#define KBABHPAMDDM_FROMFLX_OFFSET UNITYSDK_OFFSET(0x13C47500)
#define KBABHPAMDDM_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x13C47FC0)
#define KBABHPAMDDM_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x13C474F0)
#define KBABHPAMDDM_HDEMOBEKGIP_OFFSET UNITYSDK_OFFSET(0x13C46F70)
#define KBABHPAMDDM_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x13C48170)
#define KBABHPAMDDM_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x13C47C80)
#define KBABHPAMDDM_KDPKEKEJACM_OFFSET UNITYSDK_OFFSET(0x13C482D0)
#define KBABHPAMDDM_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x13C47360)
#define KBABHPAMDDM_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x13C47580)
#define KBABHPAMDDM__CTOR_OFFSET UNITYSDK_OFFSET(0x13C47FB0)

inline static constexpr unsigned int KBABHPAMDDM_TypeDefinitionIndex = 54656;

class KBABHPAMDDM : public ::DLPMMBJICAN
{
public:
	::MoleMole::Config::DynamicFloat* KHJHODLGGFD; // 0x10
	::MoleMole::Config::DynamicFloat* IHFMEBKAJPH; // 0x18
	::MoleMole::Config::DynamicFloat* BAOELILBOOG; // 0x20
	::MoleMole::Config::ConfigEntityAttackProperty* BJPGCNGIOME; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBABHPAMDDM__CTOR_OFFSET))(this);
	}

	::System::Void HDEMOBEKGIP(::JPPHPNAAJMO* AOBNJBCBHAK, ::IHPPCIEFNOC* KAAAHPHMNGI)
	{
		return ((::System::Void(*)(::PVOID, ::JPPHPNAAJMO*, ::IHPPCIEFNOC*))((::PBYTE)hIl2Cpp + KBABHPAMDDM_HDEMOBEKGIP_OFFSET))(this, AOBNJBCBHAK, KAAAHPHMNGI);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + KBABHPAMDDM_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::DLPMMBJICAN* DGNAAPGKIPL()
	{
		return ((::DLPMMBJICAN*(*)(::PVOID))((::PBYTE)hIl2Cpp + KBABHPAMDDM_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KBABHPAMDDM_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + KBABHPAMDDM_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + KBABHPAMDDM_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + KBABHPAMDDM_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::KBABHPAMDDM* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::KBABHPAMDDM*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + KBABHPAMDDM_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::KBABHPAMDDM* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::KBABHPAMDDM*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + KBABHPAMDDM_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Void KDPKEKEJACM(::JPPHPNAAJMO* MIALFKCCCPI, ::IHPPCIEFNOC* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::JPPHPNAAJMO*, ::IHPPCIEFNOC*))((::PBYTE)hIl2Cpp + KBABHPAMDDM_KDPKEKEJACM_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + KBABHPAMDDM_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}
};
