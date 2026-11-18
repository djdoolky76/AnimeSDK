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

#define BLANHPAPAPA_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0xFF85F30)
#define BLANHPAPAPA_FROMBINARY_OFFSET UNITYSDK_OFFSET(0xFF86760)
#define BLANHPAPAPA_FROMFLX_OFFSET UNITYSDK_OFFSET(0xFF86040)
#define BLANHPAPAPA_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0xFF86BA0)
#define BLANHPAPAPA_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0xFF86030)
#define BLANHPAPAPA_HDEMOBEKGIP_OFFSET UNITYSDK_OFFSET(0xFF85B50)
#define BLANHPAPAPA_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0xFF86D50)
#define BLANHPAPAPA_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0xFF867C0)
#define BLANHPAPAPA_KDPKEKEJACM_OFFSET UNITYSDK_OFFSET(0xFF86B00)
#define BLANHPAPAPA_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0xFF85EA0)
#define BLANHPAPAPA_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0xFF860C0)
#define BLANHPAPAPA__CTOR_OFFSET UNITYSDK_OFFSET(0xFF86AF0)

inline static constexpr unsigned int BLANHPAPAPA_TypeDefinitionIndex = 73659;

class BLANHPAPAPA : public ::DLPMMBJICAN
{
public:
	::MoleMole::Config::DynamicFloat* BAOELILBOOG; // 0x10
	::MoleMole::Config::DynamicFloat* IHFMEBKAJPH; // 0x18
	::MoleMole::Config::ConfigEntityAttackProperty* BJPGCNGIOME; // 0x20
	::MoleMole::Config::DynamicFloat* KHJHODLGGFD; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLANHPAPAPA__CTOR_OFFSET))(this);
	}

	::System::Void HDEMOBEKGIP(::JPPHPNAAJMO* AOBNJBCBHAK, ::IHPPCIEFNOC* KAAAHPHMNGI)
	{
		return ((::System::Void(*)(::PVOID, ::JPPHPNAAJMO*, ::IHPPCIEFNOC*))((::PBYTE)hIl2Cpp + BLANHPAPAPA_HDEMOBEKGIP_OFFSET))(this, AOBNJBCBHAK, KAAAHPHMNGI);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + BLANHPAPAPA_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::DLPMMBJICAN* DGNAAPGKIPL()
	{
		return ((::DLPMMBJICAN*(*)(::PVOID))((::PBYTE)hIl2Cpp + BLANHPAPAPA_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BLANHPAPAPA_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + BLANHPAPAPA_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + BLANHPAPAPA_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void KDPKEKEJACM(::JPPHPNAAJMO* MIALFKCCCPI, ::IHPPCIEFNOC* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::JPPHPNAAJMO*, ::IHPPCIEFNOC*))((::PBYTE)hIl2Cpp + BLANHPAPAPA_KDPKEKEJACM_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	static ::BLANHPAPAPA* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::BLANHPAPAPA*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + BLANHPAPAPA_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + BLANHPAPAPA_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + BLANHPAPAPA_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::BLANHPAPAPA* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::BLANHPAPAPA*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + BLANHPAPAPA_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}
};
