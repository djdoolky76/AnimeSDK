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

#define POJAJDNMAFL_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x194BC5E0)
#define POJAJDNMAFL_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x194BCE10)
#define POJAJDNMAFL_FROMFLX_OFFSET UNITYSDK_OFFSET(0x194BC6F0)
#define POJAJDNMAFL_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x194BD1B0)
#define POJAJDNMAFL_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x194BC6E0)
#define POJAJDNMAFL_HDEMOBEKGIP_OFFSET UNITYSDK_OFFSET(0x194BC2B0)
#define POJAJDNMAFL_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x194BD400)
#define POJAJDNMAFL_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x194BCE70)
#define POJAJDNMAFL_KDPKEKEJACM_OFFSET UNITYSDK_OFFSET(0x194BD360)
#define POJAJDNMAFL_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x194BC550)
#define POJAJDNMAFL_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x194BC770)
#define POJAJDNMAFL__CTOR_OFFSET UNITYSDK_OFFSET(0x194BD1A0)

inline static constexpr unsigned int POJAJDNMAFL_TypeDefinitionIndex = 48183;

class POJAJDNMAFL : public ::DLPMMBJICAN
{
public:
	::MoleMole::Config::DynamicFloat* KHJHODLGGFD; // 0x10
	::MoleMole::Config::ConfigEntityAttackProperty* BJPGCNGIOME; // 0x18
	::MoleMole::Config::DynamicFloat* IHFMEBKAJPH; // 0x20
	::MoleMole::Config::DynamicFloat* BAOELILBOOG; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POJAJDNMAFL__CTOR_OFFSET))(this);
	}

	::System::Void HDEMOBEKGIP(::JPPHPNAAJMO* AOBNJBCBHAK, ::IHPPCIEFNOC* KAAAHPHMNGI)
	{
		return ((::System::Void(*)(::PVOID, ::JPPHPNAAJMO*, ::IHPPCIEFNOC*))((::PBYTE)hIl2Cpp + POJAJDNMAFL_HDEMOBEKGIP_OFFSET))(this, AOBNJBCBHAK, KAAAHPHMNGI);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + POJAJDNMAFL_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::DLPMMBJICAN* DGNAAPGKIPL()
	{
		return ((::DLPMMBJICAN*(*)(::PVOID))((::PBYTE)hIl2Cpp + POJAJDNMAFL_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + POJAJDNMAFL_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + POJAJDNMAFL_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + POJAJDNMAFL_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::POJAJDNMAFL* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::POJAJDNMAFL*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + POJAJDNMAFL_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void KDPKEKEJACM(::JPPHPNAAJMO* MIALFKCCCPI, ::IHPPCIEFNOC* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::JPPHPNAAJMO*, ::IHPPCIEFNOC*))((::PBYTE)hIl2Cpp + POJAJDNMAFL_KDPKEKEJACM_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	static ::POJAJDNMAFL* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::POJAJDNMAFL*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + POJAJDNMAFL_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + POJAJDNMAFL_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + POJAJDNMAFL_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}
};
