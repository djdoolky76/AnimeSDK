#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AJKECBJFMFI.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define IEKNIKOFBEN_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0xEBBEBD0)
#define IEKNIKOFBEN_FROMBINARY_OFFSET UNITYSDK_OFFSET(0xEBBE930)
#define IEKNIKOFBEN_FROMFLX_OFFSET UNITYSDK_OFFSET(0xEBBECE0)
#define IEKNIKOFBEN_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0xEBBF1F0)
#define IEKNIKOFBEN_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0xEBBECD0)
#define IEKNIKOFBEN_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0xEBBF090)
#define IEKNIKOFBEN_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0xEBBE990)
#define IEKNIKOFBEN_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0xEBBEBC0)
#define IEKNIKOFBEN_OIIKHLLPENK_OFFSET UNITYSDK_OFFSET(0xEBBF3A0)
#define IEKNIKOFBEN_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0xEBBED60)
#define IEKNIKOFBEN_POILPAJBBNC_OFFSET UNITYSDK_OFFSET(0xEBBE890)
#define IEKNIKOFBEN__CTOR_OFFSET UNITYSDK_OFFSET(0xEBBF080)

inline static constexpr unsigned int IEKNIKOFBEN_TypeDefinitionIndex = 80156;

class IEKNIKOFBEN : public ::AJKECBJFMFI
{
public:
	::System::Boolean ALNBIMOOCFI; // 0x10
	::System::Byte _padding0[0x3];
	::System::Single MMNNLOMMNGL; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEKNIKOFBEN__CTOR_OFFSET))(this);
	}

	::System::Single POILPAJBBNC(::System::Single BDEDDEGJFKL, ::System::Single FNIOPKPHDEH, ::System::Single PMNLNNGEIFM)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + IEKNIKOFBEN_POILPAJBBNC_OFFSET))(this, BDEDDEGJFKL, FNIOPKPHDEH, PMNLNNGEIFM);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + IEKNIKOFBEN_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + IEKNIKOFBEN_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::AJKECBJFMFI* DGNAAPGKIPL()
	{
		return ((::AJKECBJFMFI*(*)(::PVOID))((::PBYTE)hIl2Cpp + IEKNIKOFBEN_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IEKNIKOFBEN_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + IEKNIKOFBEN_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::IEKNIKOFBEN* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::IEKNIKOFBEN*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + IEKNIKOFBEN_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + IEKNIKOFBEN_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + IEKNIKOFBEN_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::IEKNIKOFBEN* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::IEKNIKOFBEN*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + IEKNIKOFBEN_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Single OIIKHLLPENK(::System::Single MIALFKCCCPI, ::System::Single KMGKAIDEIBA, ::System::Single FDHMCIFPNCK)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + IEKNIKOFBEN_OIIKHLLPENK_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK);
	}
};
