#pragma once
#include "unitysdk/unitysdk.h"
class EFODGECFLLC;
class HIOEAKHGILF;
class NDDFLGNNMDK;
class PEEDLCHFAFL;

#define HGIAIHBMEMI_CTOR_OFFSET UNITYSDK_OFFSET(0x16BE9B90)
#define HGIAIHBMEMI__ISBILLBOARDNEEDSHOW_OFFSET UNITYSDK_OFFSET(0x16BE9C60)

inline static constexpr unsigned int HGIAIHBMEMI_TypeDefinitionIndex = 79247;

	class HGIAIHBMEMI
	{
	public:
		::PEEDLCHFAFL* PDENFEFCAGN; // 0x20
		::EFODGECFLLC* EEFMDEHLLFI; // 0x28
		::System::Void _ctor(::NDDFLGNNMDK* a1, ::PEEDLCHFAFL* a2)
		{
			return ((::System::Void(*)(::PVOID, ::NDDFLGNNMDK*, ::PEEDLCHFAFL*))((::PBYTE)hIl2Cpp + HGIAIHBMEMI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean _IsBillBoardNeedShow(::HIOEAKHGILF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + HGIAIHBMEMI__ISBILLBOARDNEEDSHOW_OFFSET))(this, a1);
		}

	};
