#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NGABLGOHHID.h"
#include "unitysdk/PJBGHMDHHBM.h"

class DFMOFLEKIOB;
namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KDFKBMEDDJI_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1EEB0600)
#define KDFKBMEDDJI_KGNEJKNNODJ_OFFSET UNITYSDK_OFFSET(0x1EEB0B10)
#define KDFKBMEDDJI_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1EEB06D0)
#define KDFKBMEDDJI_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1EEB0A60)
#define KDFKBMEDDJI__CTOR_OFFSET UNITYSDK_OFFSET(0x1EEB0640)

inline static constexpr unsigned int KDFKBMEDDJI_TypeDefinitionIndex = 94778;

class KDFKBMEDDJI : public ::PJBGHMDHHBM
{
public:
	::NGABLGOHHID DHDJDGFNBOA; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::DFMOFLEKIOB*>* JMINOGAOFIL; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDFKBMEDDJI__CTOR_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDFKBMEDDJI_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG(::FlatBuffers::ByteBuffer* CAFJHKGOAEB)
	{
		return ((::System::Void(*)(::PVOID, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KDFKBMEDDJI_LNFENFDLMIG_OFFSET))(this, CAFJHKGOAEB);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDFKBMEDDJI_PHOADBJGFBE_OFFSET))(this);
	}

	::DFMOFLEKIOB* KGNEJKNNODJ(::System::Int32 MGMDLMBEDJF)
	{
		return ((::DFMOFLEKIOB*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KDFKBMEDDJI_KGNEJKNNODJ_OFFSET))(this, MGMDLMBEDJF);
	}
};
