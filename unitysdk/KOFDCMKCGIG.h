#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FECPHHDBIBP.h"
#include "unitysdk/PJBGHMDHHBM.h"

class GDEDFOIMJOF;
namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KOFDCMKCGIG_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1D9986A0)
#define KOFDCMKCGIG_KGNEJKNNODJ_OFFSET UNITYSDK_OFFSET(0x1D998DD0)
#define KOFDCMKCGIG_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1D998990)
#define KOFDCMKCGIG_MDGCOKBMLFG_OFFSET UNITYSDK_OFFSET(0x1D998770)
#define KOFDCMKCGIG_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1D998D20)
#define KOFDCMKCGIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D9986E0)

inline static constexpr unsigned int KOFDCMKCGIG_TypeDefinitionIndex = 93949;

class KOFDCMKCGIG : public ::PJBGHMDHHBM
{
public:
	::FECPHHDBIBP DHDJDGFNBOA; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::GDEDFOIMJOF*>* JMINOGAOFIL; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOFDCMKCGIG__CTOR_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOFDCMKCGIG_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Boolean MDGCOKBMLFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KOFDCMKCGIG_MDGCOKBMLFG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG(::FlatBuffers::ByteBuffer* CAFJHKGOAEB)
	{
		return ((::System::Void(*)(::PVOID, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KOFDCMKCGIG_LNFENFDLMIG_OFFSET))(this, CAFJHKGOAEB);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOFDCMKCGIG_PHOADBJGFBE_OFFSET))(this);
	}

	::GDEDFOIMJOF* KGNEJKNNODJ(::System::Int32 MGMDLMBEDJF, ::System::Boolean ANLJEKFCBNO)
	{
		return ((::GDEDFOIMJOF*(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + KOFDCMKCGIG_KGNEJKNNODJ_OFFSET))(this, MGMDLMBEDJF, ANLJEKFCBNO);
	}
};
