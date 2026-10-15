#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EJLIOMPMHHI;
class HGCEOEHGPPE;
class KGPCBBIOGLB;
class LFCKLPMBGGI;
namespace RPG::Client { template <typename T> class DataActionProgress_1; }

#define EJLIOMPMHHI___C__DISPLAYCLASS13_0_CTOR_OFFSET UNITYSDK_OFFSET(0x154D9A10)
#define EJLIOMPMHHI___C__DISPLAYCLASS13_0__ADDBLOCKHPATCH_B__0_OFFSET UNITYSDK_OFFSET(0x154DECE0)
#define EJLIOMPMHHI___C__DISPLAYCLASS13_0__ADDBLOCKHPATCH_B__1_OFFSET UNITYSDK_OFFSET(0x154DEC20)

inline static constexpr unsigned int EJLIOMPMHHI___c__DisplayClass13_0_TypeDefinitionIndex = 59566;

	class EJLIOMPMHHI___c__DisplayClass13_0 : public ::System::Object
	{
	public:
		::RPG::Client::DataActionProgress_1<::LFCKLPMBGGI*>* progress; // 0x10
		::EJLIOMPMHHI* __4__this; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJLIOMPMHHI___C__DISPLAYCLASS13_0_CTOR_OFFSET))(this);
		}

		::System::Void _AddBlockHPatch_b__1(::HGCEOEHGPPE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGCEOEHGPPE*))((::PBYTE)hIl2Cpp + EJLIOMPMHHI___C__DISPLAYCLASS13_0__ADDBLOCKHPATCH_B__1_OFFSET))(this, a1);
		}

		::System::Void _AddBlockHPatch_b__0(::KGPCBBIOGLB* a1, ::LFCKLPMBGGI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::KGPCBBIOGLB*, ::LFCKLPMBGGI*))((::PBYTE)hIl2Cpp + EJLIOMPMHHI___C__DISPLAYCLASS13_0__ADDBLOCKHPATCH_B__0_OFFSET))(this, a1, a2);
		}

	};
