#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KMDDELBODKB.h"
#include "unitysdk/PJBGHMDHHBM.h"

class DBKBBMANGEI;
namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DPOBIJKDLJI_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1E231AD0)
#define DPOBIJKDLJI_KGNEJKNNODJ_OFFSET UNITYSDK_OFFSET(0x1E232200)
#define DPOBIJKDLJI_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1E231BA0)
#define DPOBIJKDLJI_MDGCOKBMLFG_OFFSET UNITYSDK_OFFSET(0x1E231FE0)
#define DPOBIJKDLJI_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1E231F30)
#define DPOBIJKDLJI__CTOR_OFFSET UNITYSDK_OFFSET(0x1E231B10)

inline static constexpr unsigned int DPOBIJKDLJI_TypeDefinitionIndex = 93753;

class DPOBIJKDLJI : public ::PJBGHMDHHBM
{
public:
	::KMDDELBODKB DHDJDGFNBOA; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::DBKBBMANGEI*>* JMINOGAOFIL; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPOBIJKDLJI__CTOR_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPOBIJKDLJI_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG(::FlatBuffers::ByteBuffer* CAFJHKGOAEB)
	{
		return ((::System::Void(*)(::PVOID, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DPOBIJKDLJI_LNFENFDLMIG_OFFSET))(this, CAFJHKGOAEB);
	}

	::System::Boolean MDGCOKBMLFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DPOBIJKDLJI_MDGCOKBMLFG_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPOBIJKDLJI_PHOADBJGFBE_OFFSET))(this);
	}

	::DBKBBMANGEI* KGNEJKNNODJ(::System::Int32 MGMDLMBEDJF, ::System::Boolean ANLJEKFCBNO)
	{
		return ((::DBKBBMANGEI*(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + DPOBIJKDLJI_KGNEJKNNODJ_OFFSET))(this, MGMDLMBEDJF, ANLJEKFCBNO);
	}
};
