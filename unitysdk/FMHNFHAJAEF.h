#pragma once
#include "unitysdk/unitysdk.h"
class BABNOKHOBCF;
class INMMPMDELKE;
class MNCOPNHONHO;

#define FMHNFHAJAEF_CTOR_OFFSET UNITYSDK_OFFSET(0x167CA2A0)
#define FMHNFHAJAEF__ISBILLBOARDNEEDSHOW_OFFSET UNITYSDK_OFFSET(0x167CA390)

inline static constexpr unsigned int FMHNFHAJAEF_TypeDefinitionIndex = 79079;

	class FMHNFHAJAEF
	{
	public:
		::BABNOKHOBCF* EEFMDEHLLFI; // 0x20
		::MNCOPNHONHO* PDENFEFCAGN; // 0x28
		::System::Void _ctor(::BABNOKHOBCF* a1, ::MNCOPNHONHO* a2)
		{
			return ((::System::Void(*)(::PVOID, ::BABNOKHOBCF*, ::MNCOPNHONHO*))((::PBYTE)hIl2Cpp + FMHNFHAJAEF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean _IsBillBoardNeedShow(::INMMPMDELKE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::INMMPMDELKE*))((::PBYTE)hIl2Cpp + FMHNFHAJAEF__ISBILLBOARDNEEDSHOW_OFFSET))(this, a1);
		}

	};
