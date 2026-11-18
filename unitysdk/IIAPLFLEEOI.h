#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GLPILGBLOJH.h"
#include "unitysdk/PJBGHMDHHBM.h"

class PMCMBOAEDME;
namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define IIAPLFLEEOI_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1DB81860)
#define IIAPLFLEEOI_KBEMEKJFJNO_OFFSET UNITYSDK_OFFSET(0x1DB81D70)
#define IIAPLFLEEOI_KGNEJKNNODJ_OFFSET UNITYSDK_OFFSET(0x1DB81F60)
#define IIAPLFLEEOI_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1DB81930)
#define IIAPLFLEEOI_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1DB81CC0)
#define IIAPLFLEEOI__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB818A0)

inline static constexpr unsigned int IIAPLFLEEOI_TypeDefinitionIndex = 93683;

class IIAPLFLEEOI : public ::PJBGHMDHHBM
{
public:
	::GLPILGBLOJH DHDJDGFNBOA; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::PMCMBOAEDME*>* JMINOGAOFIL; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIAPLFLEEOI__CTOR_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIAPLFLEEOI_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG(::FlatBuffers::ByteBuffer* CAFJHKGOAEB)
	{
		return ((::System::Void(*)(::PVOID, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IIAPLFLEEOI_LNFENFDLMIG_OFFSET))(this, CAFJHKGOAEB);
	}

	::System::Int32 KBEMEKJFJNO(::System::Int32 GCOOJKDMJHE, ::System::Boolean MHBNDKHFGND)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + IIAPLFLEEOI_KBEMEKJFJNO_OFFSET))(this, GCOOJKDMJHE, MHBNDKHFGND);
	}

	::PMCMBOAEDME* KGNEJKNNODJ(::System::Int32 MGMDLMBEDJF)
	{
		return ((::PMCMBOAEDME*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IIAPLFLEEOI_KGNEJKNNODJ_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIAPLFLEEOI_PHOADBJGFBE_OFFSET))(this);
	}
};
