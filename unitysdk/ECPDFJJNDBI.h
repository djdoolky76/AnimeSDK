#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ECPDFJJNDBI_Flags.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define ECPDFJJNDBI_CTOR_OFFSET UNITYSDK_OFFSET(0x15ABDE60)
#define ECPDFJJNDBI_HIFGANKHPPJ_OFFSET UNITYSDK_OFFSET(0x15ABDF10)
#define ECPDFJJNDBI_PCOHLHKDNDF_OFFSET UNITYSDK_OFFSET(0x15AF32A0)

inline static constexpr unsigned int ECPDFJJNDBI_TypeDefinitionIndex = 42528;

	class ECPDFJJNDBI : public ::System::Object
	{
	public:
		::System::String* MEBGACKEOOG; // 0x10
		::System::UInt32 MPOOGFEJOOF; // 0x18
		::System::UInt16 ABNPHONMCEP; // 0x1C
		::ECPDFJJNDBI_Flags FNPGDNFLMPC; // 0x1E
		::System::UInt16 ADLIHHPHHLG; // 0x20
		::System::UInt16 DGDINKFBOID; // 0x22
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECPDFJJNDBI_CTOR_OFFSET))(this);
		}

		::System::Boolean PCOHLHKDNDF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ECPDFJJNDBI_PCOHLHKDNDF_OFFSET))(this);
		}

		::System::Void HIFGANKHPPJ(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ECPDFJJNDBI_HIFGANKHPPJ_OFFSET))(this, a1);
		}

	};
