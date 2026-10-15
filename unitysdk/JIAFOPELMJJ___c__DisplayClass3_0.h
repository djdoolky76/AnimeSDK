#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ExeCode.h"
#include "unitysdk/System/Object.h"
class HGCEOEHGPPE;
class JIAFOPELMJJ;
class KGPCBBIOGLB;
class KPNOBBFKNHA;
namespace System { class Object; }

#define JIAFOPELMJJ___C__DISPLAYCLASS3_0_CTOR_OFFSET UNITYSDK_OFFSET(0xB1CC140)
#define JIAFOPELMJJ___C__DISPLAYCLASS3_0___MAKETEXTMAPPACKPROGRESS_B__0_OFFSET UNITYSDK_OFFSET(0xB1E6E50)

	class JIAFOPELMJJ___c__DisplayClass3_0 : public ::System::Object
	{
	public:
		::KPNOBBFKNHA* designHPatch; // 0x10
		::JIAFOPELMJJ* __4__this; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIAFOPELMJJ___C__DISPLAYCLASS3_0_CTOR_OFFSET))(this);
		}

		::System::Void __MakeTextmapPackProgress_b__0(::HGCEOEHGPPE* a1, ::KGPCBBIOGLB* a2, ::System::Object* a3, ::RPG::Client::ExeCode a4)
		{
			return ((::System::Void(*)(::PVOID, ::HGCEOEHGPPE*, ::KGPCBBIOGLB*, ::System::Object*, ::RPG::Client::ExeCode))((::PBYTE)hIl2Cpp + JIAFOPELMJJ___C__DISPLAYCLASS3_0___MAKETEXTMAPPACKPROGRESS_B__0_OFFSET))(this, a1, a2, a3, a4);
		}

	};
