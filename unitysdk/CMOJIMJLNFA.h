#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
namespace System { template <typename T> class Action_1; }

#define CMOJIMJLNFA_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x1A1BD6C0)
#define CMOJIMJLNFA_FCFOEJGPDNO_OFFSET UNITYSDK_OFFSET(0x1A1BD650)
#define CMOJIMJLNFA_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1A1BD840)
#define CMOJIMJLNFA_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1A1BD7D0)
#define CMOJIMJLNFA_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x1A1BD940)
#define CMOJIMJLNFA_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x1A1BD7C0)
#define CMOJIMJLNFA_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x1A1BD870)
#define CMOJIMJLNFA_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x1A1BD850)
#define CMOJIMJLNFA_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x1A1BD6B0)
#define CMOJIMJLNFA_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x1A1BD830)
#define CMOJIMJLNFA__CTOR_OFFSET UNITYSDK_OFFSET(0x1A1BD860)

inline static constexpr unsigned int CMOJIMJLNFA_TypeDefinitionIndex = 89904;

class CMOJIMJLNFA : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMOJIMJLNFA__CTOR_OFFSET))(this);
	}

	::System::Single FCFOEJGPDNO(::System::Single NFCFJIEHJAJ)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CMOJIMJLNFA_FCFOEJGPDNO_OFFSET))(this, NFCFJIEHJAJ);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CMOJIMJLNFA_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::CMOJIMJLNFA* DGNAAPGKIPL()
	{
		return ((::CMOJIMJLNFA*(*)(::PVOID))((::PBYTE)hIl2Cpp + CMOJIMJLNFA_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CMOJIMJLNFA_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CMOJIMJLNFA_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + CMOJIMJLNFA_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::CMOJIMJLNFA* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::CMOJIMJLNFA*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CMOJIMJLNFA_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	static ::CMOJIMJLNFA* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::CMOJIMJLNFA*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + CMOJIMJLNFA_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + CMOJIMJLNFA_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CMOJIMJLNFA_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}
};
