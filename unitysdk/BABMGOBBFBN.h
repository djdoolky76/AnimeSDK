#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHBKNJHBGCA.h"
#include "unitysdk/BGMMEOHOOEA.h"
#include "unitysdk/UnityEngine/Vector3.h"

class KGBFLHNJHHN;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BABMGOBBFBN_JOEMCOANBFC_OFFSET UNITYSDK_OFFSET(0x15778750)
#define BABMGOBBFBN__CTOR_OFFSET UNITYSDK_OFFSET(0x15778740)

inline static constexpr unsigned int BABMGOBBFBN_TypeDefinitionIndex = 11721;

class BABMGOBBFBN : public ::MHBKNJHBGCA
{
public:
	::System::Void _ctor(::BGMMEOHOOEA LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::BGMMEOHOOEA, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + BABMGOBBFBN__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::UnityEngine::Vector3 JOEMCOANBFC(::System::Collections::Generic::List_1<::System::Single>* DJLOKMMLFJC)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Single>*))((::PBYTE)hIl2Cpp + BABMGOBBFBN_JOEMCOANBFC_OFFSET))(this, DJLOKMMLFJC);
	}
};
