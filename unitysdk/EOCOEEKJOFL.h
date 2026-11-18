#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MFINKENLHKG.h"
#include "unitysdk/PJBGHMDHHBM.h"

class MEIBMCJBIBA;
namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define EOCOEEKJOFL_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1E3B0830)
#define EOCOEEKJOFL_KGNEJKNNODJ_OFFSET UNITYSDK_OFFSET(0x1E3B0D50)
#define EOCOEEKJOFL_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1E3B09B0)
#define EOCOEEKJOFL_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1E3B0900)
#define EOCOEEKJOFL__CTOR_OFFSET UNITYSDK_OFFSET(0x1E3B0870)

inline static constexpr unsigned int EOCOEEKJOFL_TypeDefinitionIndex = 94413;

class EOCOEEKJOFL : public ::PJBGHMDHHBM
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::MEIBMCJBIBA*>* JMINOGAOFIL; // 0x18
	::MFINKENLHKG DHDJDGFNBOA; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EOCOEEKJOFL__CTOR_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EOCOEEKJOFL_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EOCOEEKJOFL_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG(::FlatBuffers::ByteBuffer* CAFJHKGOAEB)
	{
		return ((::System::Void(*)(::PVOID, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EOCOEEKJOFL_LNFENFDLMIG_OFFSET))(this, CAFJHKGOAEB);
	}

	::MEIBMCJBIBA* KGNEJKNNODJ(::System::Int32 MGMDLMBEDJF)
	{
		return ((::MEIBMCJBIBA*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EOCOEEKJOFL_KGNEJKNNODJ_OFFSET))(this, MGMDLMBEDJF);
	}
};
