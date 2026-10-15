#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LLJAOGKDNFD.h"
class CLFIGBPHLHI;
class PKAOKIGODPE;
namespace UnityEngine { class Behaviour; }

#define PKAOKIGODPE_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xC2AA320)
#define PKAOKIGODPE_CLONE_OFFSET UNITYSDK_OFFSET(0xC2AA510)
#define PKAOKIGODPE_CTOR_OFFSET UNITYSDK_OFFSET(0xC2AA3A0)
#define PKAOKIGODPE_OJKBPPHNOIP_OFFSET UNITYSDK_OFFSET(0xC2AA3C0)
#define PKAOKIGODPE_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0xC2AA5D0)
#define PKAOKIGODPE_REVERSE_OFFSET UNITYSDK_OFFSET(0xC2AA450)

	class PKAOKIGODPE : public ::LLJAOGKDNFD
	{
	public:
		::UnityEngine::Behaviour* FKJHPLCMJPI; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKAOKIGODPE_CTOR_OFFSET))(this);
		}

		static ::PKAOKIGODPE* BPLPBPMEODA()
		{
			return ((::PKAOKIGODPE*(*)())((::PBYTE)hIl2Cpp + PKAOKIGODPE_BPLPBPMEODA_OFFSET))();
		}

		::CLFIGBPHLHI* OJKBPPHNOIP(::UnityEngine::Behaviour* a1)
		{
			return ((::CLFIGBPHLHI*(*)(::PVOID, ::UnityEngine::Behaviour*))((::PBYTE)hIl2Cpp + PKAOKIGODPE_OJKBPPHNOIP_OFFSET))(this, a1);
		}

		::CLFIGBPHLHI* Reverse()
		{
			return ((::CLFIGBPHLHI*(*)(::PVOID))((::PBYTE)hIl2Cpp + PKAOKIGODPE_REVERSE_OFFSET))(this);
		}

		::CLFIGBPHLHI* Clone()
		{
			return ((::CLFIGBPHLHI*(*)(::PVOID))((::PBYTE)hIl2Cpp + PKAOKIGODPE_CLONE_OFFSET))(this);
		}

		::System::Void PAGKOAEOLKA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PKAOKIGODPE_PAGKOAEOLKA_OFFSET))(this, a1);
		}

	};
