#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JDLHDHDLNNJ.h"
#include "unitysdk/System/Object.h"

class POGFOLAIJCA;

#define JFLHGHFBNGJ_ADAGNMFNONL_OFFSET UNITYSDK_OFFSET(0x19451D30)
#define JFLHGHFBNGJ_COPIDBEMEIE_OFFSET UNITYSDK_OFFSET(0x19451BF0)
#define JFLHGHFBNGJ_HKJKDEEOHKP_OFFSET UNITYSDK_OFFSET(0x19451B60)
#define JFLHGHFBNGJ_LBBHHLLPEEF_OFFSET UNITYSDK_OFFSET(0x19451F00)
#define JFLHGHFBNGJ_LPFMNKEFPMM_OFFSET UNITYSDK_OFFSET(0x19451EE0)
#define JFLHGHFBNGJ__CTOR_OFFSET UNITYSDK_OFFSET(0x19451B50)

inline static constexpr unsigned int JFLHGHFBNGJ_TypeDefinitionIndex = 59002;

class JFLHGHFBNGJ : public ::System::Object
{
public:
	::POGFOLAIJCA* CEJENBBHBBG; // 0x10
	::System::UInt64 FDOMGLGMNML; // 0x18
	::System::Int64 IBFJJCJMKDO; // 0x20
	::JDLHDHDLNNJ OCOJFKMOKMK; // 0x28
	::System::Int32 OEELDKLMFFJ; // 0x2C
	::System::Int32 MMEKEHEOGAM; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFLHGHFBNGJ__CTOR_OFFSET))(this);
	}

	::System::Boolean HKJKDEEOHKP()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JFLHGHFBNGJ_HKJKDEEOHKP_OFFSET))(this);
	}

	::System::Int32 ADAGNMFNONL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JFLHGHFBNGJ_ADAGNMFNONL_OFFSET))(this);
	}

	::System::Int32 LPFMNKEFPMM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JFLHGHFBNGJ_LPFMNKEFPMM_OFFSET))(this);
	}

	::POGFOLAIJCA* COPIDBEMEIE()
	{
		return ((::POGFOLAIJCA*(*)(::PVOID))((::PBYTE)hIl2Cpp + JFLHGHFBNGJ_COPIDBEMEIE_OFFSET))(this);
	}

	::System::Int32 LBBHHLLPEEF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JFLHGHFBNGJ_LBBHHLLPEEF_OFFSET))(this);
	}
};
