#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PMLGOFHIMLP.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"

class FGNEAMDEOLM;
namespace System { class String; }
namespace UnityEngine { class Object; }

#define KPFPECMEFGA_BCPBNJBFOGI_OFFSET UNITYSDK_OFFSET(0x1864E4C0)
#define KPFPECMEFGA_BHPCNFDFMAJ_OFFSET UNITYSDK_OFFSET(0x1864E320)
#define KPFPECMEFGA_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1864E080)
#define KPFPECMEFGA_EIKFMDLKNFE_OFFSET UNITYSDK_OFFSET(0x1864E470)
#define KPFPECMEFGA_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1864E370)
#define KPFPECMEFGA_MLKIOJLFDIK_OFFSET UNITYSDK_OFFSET(0x1864E0E0)
#define KPFPECMEFGA_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1864E510)
#define KPFPECMEFGA__CTOR_OFFSET UNITYSDK_OFFSET(0x1864E070)

inline static constexpr unsigned int KPFPECMEFGA_TypeDefinitionIndex = 84414;

class KPFPECMEFGA : public ::System::Object
{
public:
	::System::String* OIIHCACKLHD; // 0x10
	::FGNEAMDEOLM* NLIGIFNOMBF; // 0x18
	::System::Int32 OGDJMJOFLON; // 0x20
	::System::UInt32 LODHDPLDPAH; // 0x24
	::PMLGOFHIMLP KKMENMCMMBN; // 0x28
	::System::Single PLFLMMPHCHO; // 0x2C

	::System::Void _ctor(::System::UInt32 LODHDPLDPAH, ::System::String* OIIHCACKLHD)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + KPFPECMEFGA__CTOR_OFFSET))(this, LODHDPLDPAH, OIIHCACKLHD);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPFPECMEFGA_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void MLKIOJLFDIK(::UnityEngine::Object* NGLKIKLLLFL, ::Foundation::AssetRequestHandle PHHDHIBOCKA)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*, ::Foundation::AssetRequestHandle))((::PBYTE)hIl2Cpp + KPFPECMEFGA_MLKIOJLFDIK_OFFSET))(this, NGLKIKLLLFL, PHHDHIBOCKA);
	}

	::System::Void BHPCNFDFMAJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPFPECMEFGA_BHPCNFDFMAJ_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPFPECMEFGA_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void EIKFMDLKNFE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPFPECMEFGA_EIKFMDLKNFE_OFFSET))(this);
	}

	::System::Void BCPBNJBFOGI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPFPECMEFGA_BCPBNJBFOGI_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPFPECMEFGA_PHOADBJGFBE_OFFSET))(this);
	}
};
