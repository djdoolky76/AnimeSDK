#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LLJAOGKDNFD.h"
class CLFIGBPHLHI;
class LPIMOIEMCII;
namespace UnityEngine { class Behaviour; }

#define LPIMOIEMCII_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xB820530)
#define LPIMOIEMCII_CLONE_OFFSET UNITYSDK_OFFSET(0xB820720)
#define LPIMOIEMCII_CTOR_OFFSET UNITYSDK_OFFSET(0xB8205B0)
#define LPIMOIEMCII_OJKBPPHNOIP_OFFSET UNITYSDK_OFFSET(0xB8205D0)
#define LPIMOIEMCII_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0xB8207E0)
#define LPIMOIEMCII_REVERSE_OFFSET UNITYSDK_OFFSET(0xB820660)

inline static constexpr unsigned int LPIMOIEMCII_TypeDefinitionIndex = 73500;

	class LPIMOIEMCII : public ::LLJAOGKDNFD
	{
	public:
		::UnityEngine::Behaviour* FKJHPLCMJPI; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPIMOIEMCII_CTOR_OFFSET))(this);
		}

		static ::LPIMOIEMCII* BPLPBPMEODA()
		{
			return ((::LPIMOIEMCII*(*)())((::PBYTE)hIl2Cpp + LPIMOIEMCII_BPLPBPMEODA_OFFSET))();
		}

		::CLFIGBPHLHI* OJKBPPHNOIP(::UnityEngine::Behaviour* a1)
		{
			return ((::CLFIGBPHLHI*(*)(::PVOID, ::UnityEngine::Behaviour*))((::PBYTE)hIl2Cpp + LPIMOIEMCII_OJKBPPHNOIP_OFFSET))(this, a1);
		}

		::CLFIGBPHLHI* Reverse()
		{
			return ((::CLFIGBPHLHI*(*)(::PVOID))((::PBYTE)hIl2Cpp + LPIMOIEMCII_REVERSE_OFFSET))(this);
		}

		::CLFIGBPHLHI* Clone()
		{
			return ((::CLFIGBPHLHI*(*)(::PVOID))((::PBYTE)hIl2Cpp + LPIMOIEMCII_CLONE_OFFSET))(this);
		}

		::System::Void PAGKOAEOLKA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LPIMOIEMCII_PAGKOAEOLKA_OFFSET))(this, a1);
		}

	};
