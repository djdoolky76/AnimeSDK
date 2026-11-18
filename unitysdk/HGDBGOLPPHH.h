#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IEJFCIOLADO.h"
#include "unitysdk/PJBGHMDHHBM.h"

class LHBNDHPNFLB;
namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HGDBGOLPPHH_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1CCBF3D0)
#define HGDBGOLPPHH_KGNEJKNNODJ_OFFSET UNITYSDK_OFFSET(0x1CCBF8E0)
#define HGDBGOLPPHH_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1CCBF4A0)
#define HGDBGOLPPHH_MDGCOKBMLFG_OFFSET UNITYSDK_OFFSET(0x1CCBFAC0)
#define HGDBGOLPPHH_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1CCBF830)
#define HGDBGOLPPHH__CTOR_OFFSET UNITYSDK_OFFSET(0x1CCBF410)

inline static constexpr unsigned int HGDBGOLPPHH_TypeDefinitionIndex = 93718;

class HGDBGOLPPHH : public ::PJBGHMDHHBM
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::LHBNDHPNFLB*>* JMINOGAOFIL; // 0x18
	::IEJFCIOLADO DHDJDGFNBOA; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGDBGOLPPHH__CTOR_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGDBGOLPPHH_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG(::FlatBuffers::ByteBuffer* CAFJHKGOAEB)
	{
		return ((::System::Void(*)(::PVOID, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HGDBGOLPPHH_LNFENFDLMIG_OFFSET))(this, CAFJHKGOAEB);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGDBGOLPPHH_PHOADBJGFBE_OFFSET))(this);
	}

	::LHBNDHPNFLB* KGNEJKNNODJ(::System::Int32 MGMDLMBEDJF, ::System::Boolean ANLJEKFCBNO)
	{
		return ((::LHBNDHPNFLB*(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + HGDBGOLPPHH_KGNEJKNNODJ_OFFSET))(this, MGMDLMBEDJF, ANLJEKFCBNO);
	}

	::System::Boolean MDGCOKBMLFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HGDBGOLPPHH_MDGCOKBMLFG_OFFSET))(this);
	}
};
