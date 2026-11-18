#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HOCDHMEPPEG.h"
#include "unitysdk/OHCFLICGFEF.h"
#include "unitysdk/System/Object.h"

class BPHGNMNLLHF;
class COJMBEOAKMD;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define OGLDBFGKOLI_IKMPMKFBBNI_LIDNPLMPHAL_OFFSET UNITYSDK_OFFSET(0x15FE0860)
#define OGLDBFGKOLI_IKMPMKFBBNI__CTOR_OFFSET UNITYSDK_OFFSET(0x15FE0850)

inline static constexpr unsigned int OGLDBFGKOLI_IKMPMKFBBNI_TypeDefinitionIndex = 80070;

class OGLDBFGKOLI_IKMPMKFBBNI : public ::System::Object
{
public:
	::HOCDHMEPPEG CJOFHMGHFPN; // 0x10
	::System::Collections::Generic::List_1<::COJMBEOAKMD*>* LENDCJIHGOH; // 0x40
	::BPHGNMNLLHF* GNEEPLGJPGP; // 0x48
	::HOCDHMEPPEG DJPMNKCDAFL; // 0x50
	::OHCFLICGFEF IAHPJLAHLBG; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGLDBFGKOLI_IKMPMKFBBNI__CTOR_OFFSET))(this);
	}

	::System::Void LIDNPLMPHAL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGLDBFGKOLI_IKMPMKFBBNI_LIDNPLMPHAL_OFFSET))(this);
	}
};
