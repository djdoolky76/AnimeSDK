#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGLPNCHGAPL.h"
#include "unitysdk/LDJLGHJJMKE.h"
#include "unitysdk/LLOJABJBONL.h"
#include "unitysdk/LNBNNCCIDOF.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
namespace System { class String; }

#define JKGHMPILFCF_BFDANFKFPDO_OFFSET UNITYSDK_OFFSET(0x18A25AF0)
#define JKGHMPILFCF_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x18A23B10)
#define JKGHMPILFCF_NFAOKJPILBO_OFFSET UNITYSDK_OFFSET(0x18A23A60)
#define JKGHMPILFCF_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x18A24150)
#define JKGHMPILFCF__CTOR_OFFSET UNITYSDK_OFFSET(0x18A23A50)

inline static constexpr unsigned int JKGHMPILFCF_TypeDefinitionIndex = 84587;

class JKGHMPILFCF : public ::System::Object
{
public:
	::System::String* BKGJFCCEECD; // 0x10
	::System::String* BODECKIDFGF; // 0x18
	::System::String* EIGLJHIMCLM; // 0x20
	::System::String* JPKGPMKHIJF; // 0x28
	::System::String* DFFOMDOCDFI; // 0x30
	::System::String* OKDBIILAMJP; // 0x38
	::UnityEngine::Vector3 JPJJJFCMGLL; // 0x40
	::LDJLGHJJMKE GPAJKCNJNLM; // 0x4C
	::CGLPNCHGAPL AOKBJMAOBJN; // 0x50
	::UnityEngine::Vector3 ANEGFGDLDBM; // 0x54
	::LNBNNCCIDOF ABAIIIABKLI; // 0x60
	::LLOJABJBONL JMLCPADPPNM; // 0x64
	::UnityEngine::Vector3 OKGEBFKJGCK; // 0x68
	::UnityEngine::Vector3 NNIDMMBIJPI; // 0x74
	::UnityEngine::Vector3 ENFMPOKJOFF; // 0x80
	::System::Single GAODFCDHCFE; // 0x8C
	::System::Single ELDAOJCCHMC; // 0x90
	::UnityEngine::Vector3 PCIAMMBFIHB; // 0x94

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKGHMPILFCF__CTOR_OFFSET))(this);
	}

	::System::Boolean NFAOKJPILBO(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + JKGHMPILFCF_NFAOKJPILBO_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + JKGHMPILFCF_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + JKGHMPILFCF_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean BFDANFKFPDO(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + JKGHMPILFCF_BFDANFKFPDO_OFFSET))(this, HHIJHDFHPOI);
	}
};
