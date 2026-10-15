#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DGICFAFGCPA.h"
class CCFBPCBMINH;
namespace EnviromentSystemV2Space { class LLGKeyValuePairsScAsset; }
namespace System { class String; }

#define JGBDPKCDENM_BIHKNODHIDI_OFFSET UNITYSDK_OFFSET(0x1665D400)
#define JGBDPKCDENM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1665D3A0)
#define JGBDPKCDENM_CTOR_OFFSET UNITYSDK_OFFSET(0x1665D350)
#define JGBDPKCDENM_DGPLBNAIIGN_OFFSET UNITYSDK_OFFSET(0x1665D3B0)
#define JGBDPKCDENM_GMFKFFBMACL_OFFSET UNITYSDK_OFFSET(0x1665E120)
#define JGBDPKCDENM_KBFDFOGDILL_OFFSET UNITYSDK_OFFSET(0x1665D660)
#define JGBDPKCDENM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1665E380)

	class JGBDPKCDENM : public ::DGICFAFGCPA
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGBDPKCDENM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::EnviromentSystemV2Space::LLGKeyValuePairsScAsset* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystemV2Space::LLGKeyValuePairsScAsset*))((::PBYTE)hIl2Cpp + JGBDPKCDENM_CTOR_1_OFFSET))(this, a1);
		}

		::System::Void DGPLBNAIIGN(::CCFBPCBMINH* a1, ::CCFBPCBMINH* a2)
		{
			return ((::System::Void(*)(::PVOID, ::CCFBPCBMINH*, ::CCFBPCBMINH*))((::PBYTE)hIl2Cpp + JGBDPKCDENM_DGPLBNAIIGN_OFFSET))(this, a1, a2);
		}

		::System::Void BIHKNODHIDI(::CCFBPCBMINH* a1, ::CCFBPCBMINH* a2)
		{
			return ((::System::Void(*)(::PVOID, ::CCFBPCBMINH*, ::CCFBPCBMINH*))((::PBYTE)hIl2Cpp + JGBDPKCDENM_BIHKNODHIDI_OFFSET))(this, a1, a2);
		}

		::System::Void KBFDFOGDILL(::CCFBPCBMINH* a1, ::CCFBPCBMINH* a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::CCFBPCBMINH*, ::CCFBPCBMINH*, ::System::Single))((::PBYTE)hIl2Cpp + JGBDPKCDENM_KBFDFOGDILL_OFFSET))(this, a1, a2, a3);
		}

		::System::Void GMFKFFBMACL(::CCFBPCBMINH* a1, ::CCFBPCBMINH* a2)
		{
			return ((::System::Void(*)(::PVOID, ::CCFBPCBMINH*, ::CCFBPCBMINH*))((::PBYTE)hIl2Cpp + JGBDPKCDENM_GMFKFFBMACL_OFFSET))(this, a1, a2);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JGBDPKCDENM_TOSTRING_OFFSET))(this);
		}

	};
