#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AJKECBJFMFI.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define MEFAOFELENF_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x1A6387F0)
#define MEFAOFELENF_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1A6387C0)
#define MEFAOFELENF_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1A638900)
#define MEFAOFELENF_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x1A638B60)
#define MEFAOFELENF_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x1A6388F0)
#define MEFAOFELENF_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x1A638980)
#define MEFAOFELENF_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x1A6387D0)
#define MEFAOFELENF_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x1A6387E0)
#define MEFAOFELENF_OIIKHLLPENK_OFFSET UNITYSDK_OFFSET(0x1A638AA0)
#define MEFAOFELENF_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x1A638960)
#define MEFAOFELENF_POILPAJBBNC_OFFSET UNITYSDK_OFFSET(0x1A638740)
#define MEFAOFELENF__CTOR_OFFSET UNITYSDK_OFFSET(0x1A638970)

inline static constexpr unsigned int MEFAOFELENF_TypeDefinitionIndex = 73302;

class MEFAOFELENF : public ::AJKECBJFMFI
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEFAOFELENF__CTOR_OFFSET))(this);
	}

	::System::Single POILPAJBBNC(::System::Single BDEDDEGJFKL, ::System::Single FNIOPKPHDEH, ::System::Single PMNLNNGEIFM)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MEFAOFELENF_POILPAJBBNC_OFFSET))(this, BDEDDEGJFKL, FNIOPKPHDEH, PMNLNNGEIFM);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MEFAOFELENF_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MEFAOFELENF_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::AJKECBJFMFI* DGNAAPGKIPL()
	{
		return ((::AJKECBJFMFI*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEFAOFELENF_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MEFAOFELENF_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MEFAOFELENF_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::MEFAOFELENF* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::MEFAOFELENF*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MEFAOFELENF_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Single OIIKHLLPENK(::System::Single MIALFKCCCPI, ::System::Single KMGKAIDEIBA, ::System::Single FDHMCIFPNCK)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MEFAOFELENF_OIIKHLLPENK_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MEFAOFELENF_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::MEFAOFELENF* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::MEFAOFELENF*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MEFAOFELENF_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MEFAOFELENF_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}
};
