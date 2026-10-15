#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EJLIOMPMHHI;
class HGCEOEHGPPE;
class JIAFOPELMJJ;
class NBNLIDCJLHK;

#define JIAFOPELMJJ___C__DISPLAYCLASS14_0_CTOR_OFFSET UNITYSDK_OFFSET(0xB1D0750)
#define JIAFOPELMJJ___C__DISPLAYCLASS14_0__STARTFORLUAHOTFIX_B__0_OFFSET UNITYSDK_OFFSET(0xB1E5420)
#define JIAFOPELMJJ___C__DISPLAYCLASS14_0__STARTFORLUAHOTFIX_B__1_OFFSET UNITYSDK_OFFSET(0xB1E5440)

	class JIAFOPELMJJ___c__DisplayClass14_0 : public ::System::Object
	{
	public:
		::NBNLIDCJLHK* luaData; // 0x10
		::EJLIOMPMHHI* queue; // 0x18
		::JIAFOPELMJJ* __4__this; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIAFOPELMJJ___C__DISPLAYCLASS14_0_CTOR_OFFSET))(this);
		}

		::System::Void _StartForLuaHotfix_b__0(::HGCEOEHGPPE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGCEOEHGPPE*))((::PBYTE)hIl2Cpp + JIAFOPELMJJ___C__DISPLAYCLASS14_0__STARTFORLUAHOTFIX_B__0_OFFSET))(this, a1);
		}

		::System::Void _StartForLuaHotfix_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIAFOPELMJJ___C__DISPLAYCLASS14_0__STARTFORLUAHOTFIX_B__1_OFFSET))(this);
		}

	};
