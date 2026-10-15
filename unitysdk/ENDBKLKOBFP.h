#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NKGAIPKINJE;
namespace RPG::GameCore { class CakeRacePickupItemConfig; }

#define ENDBKLKOBFP_CTOR_OFFSET UNITYSDK_OFFSET(0x1C605460)
#define ENDBKLKOBFP_IAEKDNGGBEN_OFFSET UNITYSDK_OFFSET(0x1C6053A0)

inline static constexpr unsigned int ENDBKLKOBFP_TypeDefinitionIndex = 37256;

	class ENDBKLKOBFP : public ::System::Object
	{
	public:
		::RPG::GameCore::CakeRacePickupItemConfig* EABKOHGCHFP; // 0x10
		::System::UInt32 KNAFKCLNNAH; // 0x18
		::System::Int32 EBJKJAGJGPK; // 0x1C
		::System::UInt32 GOCFOJJIAHL; // 0x20
		::System::Byte _padding0[0x4];
		::System::UInt64 KAMOPEEBOHJ; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENDBKLKOBFP_CTOR_OFFSET))(this);
		}

		::System::Void IAEKDNGGBEN(::NKGAIPKINJE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NKGAIPKINJE*))((::PBYTE)hIl2Cpp + ENDBKLKOBFP_IAEKDNGGBEN_OFFSET))(this, a1);
		}

	};
