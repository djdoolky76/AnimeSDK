#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class EGOPHPIBPJJ;
namespace System { class String; }

#define MFLPFAHAEOH_CDKFGKJBMNA_NFGHLGAEONC_OFFSET UNITYSDK_OFFSET(0x185302D0)
#define MFLPFAHAEOH_CDKFGKJBMNA__CTOR_OFFSET UNITYSDK_OFFSET(0x185302C0)

inline static constexpr unsigned int MFLPFAHAEOH_CDKFGKJBMNA_TypeDefinitionIndex = 75510;

class MFLPFAHAEOH_CDKFGKJBMNA : public ::System::Object
{
public:
	::EGOPHPIBPJJ* PEPKAKDLBHE; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFLPFAHAEOH_CDKFGKJBMNA__CTOR_OFFSET))(this);
	}

	::System::String* NFGHLGAEONC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MFLPFAHAEOH_CDKFGKJBMNA_NFGHLGAEONC_OFFSET))(this);
	}
};
