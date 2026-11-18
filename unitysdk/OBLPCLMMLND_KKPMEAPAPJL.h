#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define OBLPCLMMLND_KKPMEAPAPJL_BFDMMFODMFA_OFFSET UNITYSDK_OFFSET(0xB307580)
#define OBLPCLMMLND_KKPMEAPAPJL_OHGLADLNCHG_OFFSET UNITYSDK_OFFSET(0xB3075D0)
#define OBLPCLMMLND_KKPMEAPAPJL__CTOR_OFFSET UNITYSDK_OFFSET(0xB307570)

inline static constexpr unsigned int OBLPCLMMLND_KKPMEAPAPJL_TypeDefinitionIndex = 63062;

class OBLPCLMMLND_KKPMEAPAPJL : public ::System::Object
{
public:
	::System::Int32 EOHEKGNGNGD; // 0x10
	::System::Boolean MCJCCJOEKGN; // 0x14
	::System::Boolean FOPPNBJLOJO; // 0x15
	::System::Byte _padding0[0x2];
	::System::Int32 EGJLKNINDAK; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBLPCLMMLND_KKPMEAPAPJL__CTOR_OFFSET))(this);
	}

	::System::Void BFDMMFODMFA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBLPCLMMLND_KKPMEAPAPJL_BFDMMFODMFA_OFFSET))(this);
	}

	::System::Void OHGLADLNCHG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBLPCLMMLND_KKPMEAPAPJL_OHGLADLNCHG_OFFSET))(this);
	}
};
