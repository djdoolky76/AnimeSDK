#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FGJAKGPJCKB;

#define FIIPOAMEICN_CTOR_OFFSET UNITYSDK_OFFSET(0x1C5EC430)
#define FIIPOAMEICN_IAEKDNGGBEN_OFFSET UNITYSDK_OFFSET(0x1C5E4310)

inline static constexpr unsigned int FIIPOAMEICN_TypeDefinitionIndex = 37325;

	class FIIPOAMEICN : public ::System::Object
	{
	public:
		::System::UInt32 NICBADCOCBA; // 0x10
		::System::UInt32 MNAKIEOGPDK; // 0x14
		::System::Int32 ELPDAJBOFEE; // 0x18
		::System::Int32 MHAHLJPLCII; // 0x1C
		::System::UInt32 KMFAPDJCKLF; // 0x20
		::System::UInt32 GBJLLAJJEOL; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIIPOAMEICN_CTOR_OFFSET))(this);
		}

		::System::Void IAEKDNGGBEN(::FGJAKGPJCKB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FGJAKGPJCKB*))((::PBYTE)hIl2Cpp + FIIPOAMEICN_IAEKDNGGBEN_OFFSET))(this, a1);
		}

	};
