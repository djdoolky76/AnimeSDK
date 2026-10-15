#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ExeCode.h"
#include "unitysdk/System/Object.h"
class CEOABLKMPKE;
class HGCEOEHGPPE;
class JIAFOPELMJJ;
class KGPCBBIOGLB;
class PNFLEMCDMJD;
namespace System { class Object; }

#define JIAFOPELMJJ___C__DISPLAYCLASS20_0_CTOR_OFFSET UNITYSDK_OFFSET(0xB1D4100)
#define JIAFOPELMJJ___C__DISPLAYCLASS20_0___MAKEPREDOWNLOADV2_B__0_OFFSET UNITYSDK_OFFSET(0xB1E6B80)
#define JIAFOPELMJJ___C__DISPLAYCLASS20_0___MAKEPREDOWNLOADV2_B__1_OFFSET UNITYSDK_OFFSET(0xB1E6BA0)

inline static constexpr unsigned int JIAFOPELMJJ___c__DisplayClass20_0_TypeDefinitionIndex = 59511;

	class JIAFOPELMJJ___c__DisplayClass20_0 : public ::System::Object
	{
	public:
		::JIAFOPELMJJ* __4__this; // 0x10
		::PNFLEMCDMJD* blockHPatch; // 0x18
		::CEOABLKMPKE* audioHPatch; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIAFOPELMJJ___C__DISPLAYCLASS20_0_CTOR_OFFSET))(this);
		}

		::System::Void __MakePreDownloadV2_b__0(::HGCEOEHGPPE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGCEOEHGPPE*))((::PBYTE)hIl2Cpp + JIAFOPELMJJ___C__DISPLAYCLASS20_0___MAKEPREDOWNLOADV2_B__0_OFFSET))(this, a1);
		}

		::System::Void __MakePreDownloadV2_b__1(::HGCEOEHGPPE* a1, ::KGPCBBIOGLB* a2, ::System::Object* a3, ::RPG::Client::ExeCode a4)
		{
			return ((::System::Void(*)(::PVOID, ::HGCEOEHGPPE*, ::KGPCBBIOGLB*, ::System::Object*, ::RPG::Client::ExeCode))((::PBYTE)hIl2Cpp + JIAFOPELMJJ___C__DISPLAYCLASS20_0___MAKEPREDOWNLOADV2_B__1_OFFSET))(this, a1, a2, a3, a4);
		}

	};
