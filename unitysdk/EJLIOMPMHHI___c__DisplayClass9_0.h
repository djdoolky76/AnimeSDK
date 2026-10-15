#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EJLIOMPMHHI;
class HGCEOEHGPPE;
class HGDELEAHIJO;
class KGPCBBIOGLB;
namespace RPG::Client { template <typename T> class DataActionProgress_1; }

#define EJLIOMPMHHI___C__DISPLAYCLASS9_0_CTOR_OFFSET UNITYSDK_OFFSET(0x154E4A20)
#define EJLIOMPMHHI___C__DISPLAYCLASS9_0__ADDVERIFY_B__0_OFFSET UNITYSDK_OFFSET(0x154EADA0)
#define EJLIOMPMHHI___C__DISPLAYCLASS9_0__ADDVERIFY_B__1_OFFSET UNITYSDK_OFFSET(0x154EAD30)

inline static constexpr unsigned int EJLIOMPMHHI___c__DisplayClass9_0_TypeDefinitionIndex = 59569;

	class EJLIOMPMHHI___c__DisplayClass9_0 : public ::System::Object
	{
	public:
		::RPG::Client::DataActionProgress_1<::HGDELEAHIJO*>* progress; // 0x10
		::EJLIOMPMHHI* __4__this; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJLIOMPMHHI___C__DISPLAYCLASS9_0_CTOR_OFFSET))(this);
		}

		::System::Void _AddVerify_b__1(::HGCEOEHGPPE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGCEOEHGPPE*))((::PBYTE)hIl2Cpp + EJLIOMPMHHI___C__DISPLAYCLASS9_0__ADDVERIFY_B__1_OFFSET))(this, a1);
		}

		::System::Void _AddVerify_b__0(::KGPCBBIOGLB* a1, ::HGDELEAHIJO* a2)
		{
			return ((::System::Void(*)(::PVOID, ::KGPCBBIOGLB*, ::HGDELEAHIJO*))((::PBYTE)hIl2Cpp + EJLIOMPMHHI___C__DISPLAYCLASS9_0__ADDVERIFY_B__0_OFFSET))(this, a1, a2);
		}

	};
