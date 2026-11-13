#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LLJAOGKDNFD.h"
class CLFIGBPHLHI;
class LPIMOIEMCII;
namespace UnityEngine { class Behaviour; }

#define LPIMOIEMCII_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x1B6B3F60)
#define LPIMOIEMCII_CLONE_OFFSET UNITYSDK_OFFSET(0x1B6B4150)
#define LPIMOIEMCII_CTOR_OFFSET UNITYSDK_OFFSET(0x1B6B3FE0)
#define LPIMOIEMCII_OJKBPPHNOIP_OFFSET UNITYSDK_OFFSET(0x1B6B4000)
#define LPIMOIEMCII_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0x1B6B4210)
#define LPIMOIEMCII_REVERSE_OFFSET UNITYSDK_OFFSET(0x1B6B4090)

inline static constexpr unsigned int LPIMOIEMCII_TypeDefinitionIndex = 75622;

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
