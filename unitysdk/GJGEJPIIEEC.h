#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LNODBDPJGFL.h"
#include "unitysdk/MoleMole/Config/AbilityTargetting.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define GJGEJPIIEEC_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x10EFD000)
#define GJGEJPIIEEC_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x10EFCCD0)
#define GJGEJPIIEEC_FROMFLX_OFFSET UNITYSDK_OFFSET(0x10EFD110)
#define GJGEJPIIEEC_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x10EFD5B0)
#define GJGEJPIIEEC_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x10EFD100)
#define GJGEJPIIEEC_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x10EFD760)
#define GJGEJPIIEEC_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x10EFCD30)
#define GJGEJPIIEEC_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x10EFCFF0)
#define GJGEJPIIEEC_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x10EFD190)
#define GJGEJPIIEEC__CTOR_OFFSET UNITYSDK_OFFSET(0x10EFD5A0)

inline static constexpr unsigned int GJGEJPIIEEC_TypeDefinitionIndex = 87616;

class GJGEJPIIEEC : public ::LNODBDPJGFL
{
public:
	::MoleMole::Config::AbilityTargetting PCHMCKNLAJO; // 0x50
	::System::Boolean NGCPOMMOMCC; // 0x54
	::System::Byte _padding0[0x3];
	::MoleMole::Config::AbilityTargetting HLBKCBDDLCP; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJGEJPIIEEC__CTOR_OFFSET))(this);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + GJGEJPIIEEC_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + GJGEJPIIEEC_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::LNODBDPJGFL* DGNAAPGKIPL()
	{
		return ((::LNODBDPJGFL*(*)(::PVOID))((::PBYTE)hIl2Cpp + GJGEJPIIEEC_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GJGEJPIIEEC_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + GJGEJPIIEEC_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::GJGEJPIIEEC* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::GJGEJPIIEEC*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + GJGEJPIIEEC_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::GJGEJPIIEEC* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::GJGEJPIIEEC*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + GJGEJPIIEEC_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + GJGEJPIIEEC_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + GJGEJPIIEEC_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}
};
