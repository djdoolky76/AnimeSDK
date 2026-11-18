#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BIAGAMOMOHO;
namespace System { class Action; }

#define IDHMNMKKCBO_DKDJDEJHABH_OFFSET UNITYSDK_OFFSET(0x1A4564B0)
#define IDHMNMKKCBO_EMDKOMCJAAF_OFFSET UNITYSDK_OFFSET(0x1A456750)
#define IDHMNMKKCBO_HLEJJLCILEB_OFFSET UNITYSDK_OFFSET(0x1A456740)
#define IDHMNMKKCBO_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x1A456690)
#define IDHMNMKKCBO__CTOR_OFFSET UNITYSDK_OFFSET(0x1A456680)

inline static constexpr unsigned int IDHMNMKKCBO_TypeDefinitionIndex = 41797;

class IDHMNMKKCBO : public ::System::Object
{
public:
	::System::UInt32 ACHBBPJIBIE; // 0x10
	::System::UInt32 _BKNFIOHABCL_k__BackingField; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDHMNMKKCBO__CTOR_OFFSET))(this);
	}

	::System::Void DKDJDEJHABH(::System::Action* PABLEDCGDGM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + IDHMNMKKCBO_DKDJDEJHABH_OFFSET))(this, PABLEDCGDGM);
	}

	static ::IDHMNMKKCBO* JFDOOELFAOA(::BIAGAMOMOHO* GDINHGLCODO)
	{
		return ((::IDHMNMKKCBO*(*)(::BIAGAMOMOHO*))((::PBYTE)hIl2Cpp + IDHMNMKKCBO_JFDOOELFAOA_OFFSET))(GDINHGLCODO);
	}

	::System::UInt32 HLEJJLCILEB()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IDHMNMKKCBO_HLEJJLCILEB_OFFSET))(this);
	}

	::System::Void EMDKOMCJAAF(::System::UInt32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IDHMNMKKCBO_EMDKOMCJAAF_OFFSET))(this, EGEGIMGMJHN);
	}
};
