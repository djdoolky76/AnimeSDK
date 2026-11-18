#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AJKECBJFMFI.h"
#include "unitysdk/MoleMole/Config/AbilityTargetting.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define KNGHPBLDEIG_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x18643F00)
#define KNGHPBLDEIG_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18643AC0)
#define KNGHPBLDEIG_FROMFLX_OFFSET UNITYSDK_OFFSET(0x18644010)
#define KNGHPBLDEIG_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x18644700)
#define KNGHPBLDEIG_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x18644000)
#define KNGHPBLDEIG_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x186448B0)
#define KNGHPBLDEIG_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x18643B20)
#define KNGHPBLDEIG_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x18643EF0)
#define KNGHPBLDEIG_OIIKHLLPENK_OFFSET UNITYSDK_OFFSET(0x18644640)
#define KNGHPBLDEIG_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x18644090)
#define KNGHPBLDEIG_POILPAJBBNC_OFFSET UNITYSDK_OFFSET(0x18643A40)
#define KNGHPBLDEIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18644630)

inline static constexpr unsigned int KNGHPBLDEIG_TypeDefinitionIndex = 68263;

class KNGHPBLDEIG : public ::AJKECBJFMFI
{
public:
	::MoleMole::Config::AbilityTargetting GHBLKMHNAOE; // 0x10
	::System::Boolean DKHGMMDDOJG; // 0x14
	::System::Boolean EHKAFHHFCNG; // 0x15
	::System::Boolean MBJOEECLBEA; // 0x16

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNGHPBLDEIG__CTOR_OFFSET))(this);
	}

	::System::Single POILPAJBBNC(::System::Single BDEDDEGJFKL, ::System::Single FNIOPKPHDEH, ::System::Single PMNLNNGEIFM)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + KNGHPBLDEIG_POILPAJBBNC_OFFSET))(this, BDEDDEGJFKL, FNIOPKPHDEH, PMNLNNGEIFM);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + KNGHPBLDEIG_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + KNGHPBLDEIG_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::AJKECBJFMFI* DGNAAPGKIPL()
	{
		return ((::AJKECBJFMFI*(*)(::PVOID))((::PBYTE)hIl2Cpp + KNGHPBLDEIG_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KNGHPBLDEIG_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + KNGHPBLDEIG_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + KNGHPBLDEIG_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Single OIIKHLLPENK(::System::Single MIALFKCCCPI, ::System::Single KMGKAIDEIBA, ::System::Single FDHMCIFPNCK)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + KNGHPBLDEIG_OIIKHLLPENK_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + KNGHPBLDEIG_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::KNGHPBLDEIG* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::KNGHPBLDEIG*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + KNGHPBLDEIG_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::KNGHPBLDEIG* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::KNGHPBLDEIG*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + KNGHPBLDEIG_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}
};
