#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
namespace System { template <typename T> class Action_1; }

#define AJKECBJFMFI_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x12662EF0)
#define AJKECBJFMFI_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x12662EC0)
#define AJKECBJFMFI_FROMFLX_OFFSET UNITYSDK_OFFSET(0x12663000)
#define AJKECBJFMFI_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x12663080)
#define AJKECBJFMFI_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x12662FF0)
#define AJKECBJFMFI_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x126631D0)
#define AJKECBJFMFI_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x12662ED0)
#define AJKECBJFMFI_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x12662EE0)
#define AJKECBJFMFI_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x12663060)
#define AJKECBJFMFI_POILPAJBBNC_OFFSET UNITYSDK_OFFSET(0x12662E40)
#define AJKECBJFMFI__CTOR_OFFSET UNITYSDK_OFFSET(0x12663070)

inline static constexpr unsigned int AJKECBJFMFI_TypeDefinitionIndex = 42745;

class AJKECBJFMFI : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJKECBJFMFI__CTOR_OFFSET))(this);
	}

	::System::Single POILPAJBBNC(::System::Single BDEDDEGJFKL, ::System::Single FNIOPKPHDEH, ::System::Single PMNLNNGEIFM)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + AJKECBJFMFI_POILPAJBBNC_OFFSET))(this, BDEDDEGJFKL, FNIOPKPHDEH, PMNLNNGEIFM);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + AJKECBJFMFI_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + AJKECBJFMFI_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::AJKECBJFMFI* DGNAAPGKIPL()
	{
		return ((::AJKECBJFMFI*(*)(::PVOID))((::PBYTE)hIl2Cpp + AJKECBJFMFI_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AJKECBJFMFI_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + AJKECBJFMFI_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::AJKECBJFMFI* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::AJKECBJFMFI*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + AJKECBJFMFI_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + AJKECBJFMFI_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::AJKECBJFMFI* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::AJKECBJFMFI*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + AJKECBJFMFI_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + AJKECBJFMFI_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}
};
