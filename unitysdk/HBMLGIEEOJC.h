#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AJKECBJFMFI.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define HBMLGIEEOJC_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x146E2170)
#define HBMLGIEEOJC_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x146E1FA0)
#define HBMLGIEEOJC_FROMFLX_OFFSET UNITYSDK_OFFSET(0x146E2280)
#define HBMLGIEEOJC_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x146E2610)
#define HBMLGIEEOJC_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x146E2270)
#define HBMLGIEEOJC_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x146E24B0)
#define HBMLGIEEOJC_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x146E2000)
#define HBMLGIEEOJC_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x146E2160)
#define HBMLGIEEOJC_OIIKHLLPENK_OFFSET UNITYSDK_OFFSET(0x146E27C0)
#define HBMLGIEEOJC_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x146E2300)
#define HBMLGIEEOJC_POILPAJBBNC_OFFSET UNITYSDK_OFFSET(0x146E1EF0)
#define HBMLGIEEOJC__CTOR_OFFSET UNITYSDK_OFFSET(0x146E24A0)

inline static constexpr unsigned int HBMLGIEEOJC_TypeDefinitionIndex = 82206;

class HBMLGIEEOJC : public ::AJKECBJFMFI
{
public:
	::System::Single GJLKCLKBNME; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBMLGIEEOJC__CTOR_OFFSET))(this);
	}

	::System::Single POILPAJBBNC(::System::Single BDEDDEGJFKL, ::System::Single FNIOPKPHDEH, ::System::Single PMNLNNGEIFM)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + HBMLGIEEOJC_POILPAJBBNC_OFFSET))(this, BDEDDEGJFKL, FNIOPKPHDEH, PMNLNNGEIFM);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + HBMLGIEEOJC_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + HBMLGIEEOJC_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::AJKECBJFMFI* DGNAAPGKIPL()
	{
		return ((::AJKECBJFMFI*(*)(::PVOID))((::PBYTE)hIl2Cpp + HBMLGIEEOJC_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HBMLGIEEOJC_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + HBMLGIEEOJC_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::HBMLGIEEOJC* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::HBMLGIEEOJC*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + HBMLGIEEOJC_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	static ::HBMLGIEEOJC* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::HBMLGIEEOJC*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + HBMLGIEEOJC_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Single OIIKHLLPENK(::System::Single MIALFKCCCPI, ::System::Single KMGKAIDEIBA, ::System::Single FDHMCIFPNCK)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + HBMLGIEEOJC_OIIKHLLPENK_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + HBMLGIEEOJC_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + HBMLGIEEOJC_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}
};
