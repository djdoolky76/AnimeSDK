#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HEHCFJGBLJM.h"
#include "unitysdk/JAJDJEOAMCP.h"

class KGBFLHNJHHN;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GHDKDEGBEAE_GACDFFBIMEL_OFFSET UNITYSDK_OFFSET(0x1BACA8C0)
#define GHDKDEGBEAE_KFINKHNMEOP_OFFSET UNITYSDK_OFFSET(0x1BACAB10)
#define GHDKDEGBEAE_KNFNNPJIEMK_OFFSET UNITYSDK_OFFSET(0x1BACAB40)
#define GHDKDEGBEAE_MLBBHFKALPL_OFFSET UNITYSDK_OFFSET(0x1BACAB50)
#define GHDKDEGBEAE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BACA8B0)

inline static constexpr unsigned int GHDKDEGBEAE_TypeDefinitionIndex = 15600;

class GHDKDEGBEAE : public ::HEHCFJGBLJM
{
public:
	::System::Collections::Generic::List_1<::System::String*>* LJFICHHFLKK; // 0xA8
	::System::Int32 _IAEJOHNBNEJ_k__BackingField; // 0xB0

	::System::Void _ctor(::JAJDJEOAMCP LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::JAJDJEOAMCP, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + GHDKDEGBEAE__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Collections::Generic::List_1<::System::String*>* GACDFFBIMEL()
	{
		return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GHDKDEGBEAE_GACDFFBIMEL_OFFSET))(this);
	}

	::System::Void KFINKHNMEOP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHDKDEGBEAE_KFINKHNMEOP_OFFSET))(this);
	}

	::System::Void KNFNNPJIEMK(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GHDKDEGBEAE_KNFNNPJIEMK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 MLBBHFKALPL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GHDKDEGBEAE_MLBBHFKALPL_OFFSET))(this);
	}
};
