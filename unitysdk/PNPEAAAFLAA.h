#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PNPEAAAFLAA;

#define PNPEAAAFLAA_ALJIOCDBMKO_OFFSET UNITYSDK_OFFSET(0x1D978E20)
#define PNPEAAAFLAA_CTOR_OFFSET UNITYSDK_OFFSET(0x1D978E80)

inline static constexpr unsigned int PNPEAAAFLAA_TypeDefinitionIndex = 37125;

	class PNPEAAAFLAA : public ::System::Object
	{
	public:
		::System::UInt32 MNMBCFEIIFC; // 0x10
		::System::UInt32 FECDAFJNJDK; // 0x14
		::System::UInt32 BAJALIKAKJD; // 0x18
		::System::UInt32 ADFAKNJIAPJ; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNPEAAAFLAA_CTOR_OFFSET))(this);
		}

		::System::Void ALJIOCDBMKO(::PNPEAAAFLAA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PNPEAAAFLAA*))((::PBYTE)hIl2Cpp + PNPEAAAFLAA_ALJIOCDBMKO_OFFSET))(this, a1);
		}

	};
