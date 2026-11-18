#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCANJIJBKD.h"
#include "unitysdk/PJBGHMDHHBM.h"

class IOELCALDECH;
namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GEIEDJHJHHN_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1E1C4470)
#define GEIEDJHJHHN_KGNEJKNNODJ_OFFSET UNITYSDK_OFFSET(0x1E1C4540)
#define GEIEDJHJHHN_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1E1C4720)
#define GEIEDJHJHHN_MDGCOKBMLFG_OFFSET UNITYSDK_OFFSET(0x1E1C4B60)
#define GEIEDJHJHHN_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1E1C4AB0)
#define GEIEDJHJHHN__CTOR_OFFSET UNITYSDK_OFFSET(0x1E1C44B0)

inline static constexpr unsigned int GEIEDJHJHHN_TypeDefinitionIndex = 94075;

class GEIEDJHJHHN : public ::PJBGHMDHHBM
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::IOELCALDECH*>* JMINOGAOFIL; // 0x18
	::NPCANJIJBKD DHDJDGFNBOA; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEIEDJHJHHN__CTOR_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEIEDJHJHHN_BHLAEBMEOLO_OFFSET))(this);
	}

	::IOELCALDECH* KGNEJKNNODJ(::System::Int32 MGMDLMBEDJF, ::System::Boolean ANLJEKFCBNO)
	{
		return ((::IOELCALDECH*(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + GEIEDJHJHHN_KGNEJKNNODJ_OFFSET))(this, MGMDLMBEDJF, ANLJEKFCBNO);
	}

	::System::Void LNFENFDLMIG(::FlatBuffers::ByteBuffer* CAFJHKGOAEB)
	{
		return ((::System::Void(*)(::PVOID, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GEIEDJHJHHN_LNFENFDLMIG_OFFSET))(this, CAFJHKGOAEB);
	}

	::System::Boolean MDGCOKBMLFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GEIEDJHJHHN_MDGCOKBMLFG_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEIEDJHJHHN_PHOADBJGFBE_OFFSET))(this);
	}
};
