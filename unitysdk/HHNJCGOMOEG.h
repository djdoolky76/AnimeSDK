#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/HGCDFKINFPA.h"
class HNLKNLJBHDD;

#define HHNJCGOMOEG_CPFDFOKLGHO_OFFSET UNITYSDK_OFFSET(0x1C666CF0)
#define HHNJCGOMOEG_CTOR_OFFSET UNITYSDK_OFFSET(0x1C667020)
#define HHNJCGOMOEG_DJMAKDCNPDA_OFFSET UNITYSDK_OFFSET(0x1C666EF0)

	class HHNJCGOMOEG : public ::System::Object
	{
	public:
		::System::Single KDMHBDFCNMG; // 0x10
		::System::Single GLNJBPOLMCN; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHNJCGOMOEG_CTOR_OFFSET))(this);
		}

		::System::Void CPFDFOKLGHO(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + HHNJCGOMOEG_CPFDFOKLGHO_OFFSET))(this, a1, a2);
		}

		::System::Boolean DJMAKDCNPDA(::HNLKNLJBHDD* a1, ::HGCDFKINFPA a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::HNLKNLJBHDD*, ::HGCDFKINFPA))((::PBYTE)hIl2Cpp + HHNJCGOMOEG_DJMAKDCNPDA_OFFSET))(this, a1, a2);
		}

	};
