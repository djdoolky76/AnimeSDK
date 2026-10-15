#pragma once
#include "unitysdk/unitysdk.h"
class BABNOKHOBCF;
class INMMPMDELKE;
class MNCOPNHONHO;

#define FMHNFHAJAEF_CTOR_OFFSET UNITYSDK_OFFSET(0x1584E120)
#define FMHNFHAJAEF__ISBILLBOARDNEEDSHOW_OFFSET UNITYSDK_OFFSET(0x1584E210)

inline static constexpr unsigned int FMHNFHAJAEF_TypeDefinitionIndex = 76745;

	class FMHNFHAJAEF
	{
	public:
		::MNCOPNHONHO* PDENFEFCAGN; // 0x20
		::BABNOKHOBCF* EEFMDEHLLFI; // 0x28
		::System::Void _ctor(::BABNOKHOBCF* a1, ::MNCOPNHONHO* a2)
		{
			return ((::System::Void(*)(::PVOID, ::BABNOKHOBCF*, ::MNCOPNHONHO*))((::PBYTE)hIl2Cpp + FMHNFHAJAEF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean _IsBillBoardNeedShow(::INMMPMDELKE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::INMMPMDELKE*))((::PBYTE)hIl2Cpp + FMHNFHAJAEF__ISBILLBOARDNEEDSHOW_OFFSET))(this, a1);
		}

	};
