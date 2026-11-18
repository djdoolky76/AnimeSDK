#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NFBFJFBCGLP.h"
#include "unitysdk/PJBGHMDHHBM.h"

class KOLKIGMPHNK;
namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GALJDOEOAGA_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1E71F330)
#define GALJDOEOAGA_KGNEJKNNODJ_OFFSET UNITYSDK_OFFSET(0x1E71F840)
#define GALJDOEOAGA_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1E71F400)
#define GALJDOEOAGA_MDGCOKBMLFG_OFFSET UNITYSDK_OFFSET(0x1E71FA20)
#define GALJDOEOAGA_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1E71F790)
#define GALJDOEOAGA__CTOR_OFFSET UNITYSDK_OFFSET(0x1E71F370)

inline static constexpr unsigned int GALJDOEOAGA_TypeDefinitionIndex = 93801;

class GALJDOEOAGA : public ::PJBGHMDHHBM
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::KOLKIGMPHNK*>* JMINOGAOFIL; // 0x18
	::NFBFJFBCGLP DHDJDGFNBOA; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GALJDOEOAGA__CTOR_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GALJDOEOAGA_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG(::FlatBuffers::ByteBuffer* CAFJHKGOAEB)
	{
		return ((::System::Void(*)(::PVOID, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GALJDOEOAGA_LNFENFDLMIG_OFFSET))(this, CAFJHKGOAEB);
	}

	::KOLKIGMPHNK* KGNEJKNNODJ(::System::Int32 MGMDLMBEDJF, ::System::Boolean ANLJEKFCBNO)
	{
		return ((::KOLKIGMPHNK*(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + GALJDOEOAGA_KGNEJKNNODJ_OFFSET))(this, MGMDLMBEDJF, ANLJEKFCBNO);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GALJDOEOAGA_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Boolean MDGCOKBMLFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GALJDOEOAGA_MDGCOKBMLFG_OFFSET))(this);
	}
};
