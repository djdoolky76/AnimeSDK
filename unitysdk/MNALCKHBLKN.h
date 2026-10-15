#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FLIPNFHAMPO;
class OMOEFAHFJFL;
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define MNALCKHBLKN_ALELFIAFCMD_OFFSET UNITYSDK_OFFSET(0xB9DCE00)
#define MNALCKHBLKN_CTOR_OFFSET UNITYSDK_OFFSET(0xB9DCC40)
#define MNALCKHBLKN_NFLFJANAICB_OFFSET UNITYSDK_OFFSET(0xB9DCDA0)
#define MNALCKHBLKN_PMJANNPMPAK_OFFSET UNITYSDK_OFFSET(0xB9DCD10)

inline static constexpr unsigned int MNALCKHBLKN_TypeDefinitionIndex = 81499;

	class MNALCKHBLKN : public ::System::Object
	{
	public:
		::System::Collections::Generic::HashSet_1<::System::UInt32>* GNBJKHLPFJG; // 0x10
		::OMOEFAHFJFL* MJHHLOPFDNK; // 0x18
		::System::Void _ctor(::OMOEFAHFJFL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OMOEFAHFJFL*))((::PBYTE)hIl2Cpp + MNALCKHBLKN_CTOR_OFFSET))(this, a1);
		}

		::System::Void PMJANNPMPAK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNALCKHBLKN_PMJANNPMPAK_OFFSET))(this);
		}

		::System::Boolean NFLFJANAICB(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MNALCKHBLKN_NFLFJANAICB_OFFSET))(this, a1);
		}

		::System::Void ALELFIAFCMD(::FLIPNFHAMPO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FLIPNFHAMPO*))((::PBYTE)hIl2Cpp + MNALCKHBLKN_ALELFIAFCMD_OFFSET))(this, a1);
		}

	};
