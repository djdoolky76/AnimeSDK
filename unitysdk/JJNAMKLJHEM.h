#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NDCPBAGEPAJ.h"
#include "unitysdk/PJBGHMDHHBM.h"

class MCOEIIIOLFJ;
namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JJNAMKLJHEM_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1E723510)
#define JJNAMKLJHEM_KGNEJKNNODJ_OFFSET UNITYSDK_OFFSET(0x1E723C40)
#define JJNAMKLJHEM_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1E7235E0)
#define JJNAMKLJHEM_MDGCOKBMLFG_OFFSET UNITYSDK_OFFSET(0x1E723A20)
#define JJNAMKLJHEM_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1E723970)
#define JJNAMKLJHEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1E723550)

inline static constexpr unsigned int JJNAMKLJHEM_TypeDefinitionIndex = 93923;

class JJNAMKLJHEM : public ::PJBGHMDHHBM
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::MCOEIIIOLFJ*>* JMINOGAOFIL; // 0x18
	::NDCPBAGEPAJ DHDJDGFNBOA; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJNAMKLJHEM__CTOR_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJNAMKLJHEM_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG(::FlatBuffers::ByteBuffer* CAFJHKGOAEB)
	{
		return ((::System::Void(*)(::PVOID, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JJNAMKLJHEM_LNFENFDLMIG_OFFSET))(this, CAFJHKGOAEB);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJNAMKLJHEM_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Boolean MDGCOKBMLFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JJNAMKLJHEM_MDGCOKBMLFG_OFFSET))(this);
	}

	::MCOEIIIOLFJ* KGNEJKNNODJ(::System::Int32 MGMDLMBEDJF, ::System::Boolean ANLJEKFCBNO)
	{
		return ((::MCOEIIIOLFJ*(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + JJNAMKLJHEM_KGNEJKNNODJ_OFFSET))(this, MGMDLMBEDJF, ANLJEKFCBNO);
	}
};
