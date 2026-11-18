#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MJPLJNPEKOD.h"
#include "unitysdk/PJBGHMDHHBM.h"

class KHJFMDLPNHO;
namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FMACGBCPMCM_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1DAB9D90)
#define FMACGBCPMCM_IKCCFEOEFEA_OFFSET UNITYSDK_OFFSET(0x1DAB9E60)
#define FMACGBCPMCM_KGNEJKNNODJ_OFFSET UNITYSDK_OFFSET(0x1DABA470)
#define FMACGBCPMCM_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1DABA030)
#define FMACGBCPMCM_MDGCOKBMLFG_OFFSET UNITYSDK_OFFSET(0x1DABA650)
#define FMACGBCPMCM_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1DABA3C0)
#define FMACGBCPMCM__CTOR_OFFSET UNITYSDK_OFFSET(0x1DAB9DD0)

inline static constexpr unsigned int FMACGBCPMCM_TypeDefinitionIndex = 93619;

class FMACGBCPMCM : public ::PJBGHMDHHBM
{
public:
	::MJPLJNPEKOD DHDJDGFNBOA; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::KHJFMDLPNHO*>* JMINOGAOFIL; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMACGBCPMCM__CTOR_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMACGBCPMCM_BHLAEBMEOLO_OFFSET))(this);
	}

	::KHJFMDLPNHO* IKCCFEOEFEA(::System::Int32 COHDIAGEOAL)
	{
		return ((::KHJFMDLPNHO*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FMACGBCPMCM_IKCCFEOEFEA_OFFSET))(this, COHDIAGEOAL);
	}

	::System::Void LNFENFDLMIG(::FlatBuffers::ByteBuffer* CAFJHKGOAEB)
	{
		return ((::System::Void(*)(::PVOID, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FMACGBCPMCM_LNFENFDLMIG_OFFSET))(this, CAFJHKGOAEB);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMACGBCPMCM_PHOADBJGFBE_OFFSET))(this);
	}

	::KHJFMDLPNHO* KGNEJKNNODJ(::System::Int32 MGMDLMBEDJF, ::System::Boolean ANLJEKFCBNO)
	{
		return ((::KHJFMDLPNHO*(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + FMACGBCPMCM_KGNEJKNNODJ_OFFSET))(this, MGMDLMBEDJF, ANLJEKFCBNO);
	}

	::System::Boolean MDGCOKBMLFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FMACGBCPMCM_MDGCOKBMLFG_OFFSET))(this);
	}
};
