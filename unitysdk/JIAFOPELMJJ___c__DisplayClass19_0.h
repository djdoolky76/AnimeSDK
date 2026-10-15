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

#define JIAFOPELMJJ___C__DISPLAYCLASS19_0_CTOR_OFFSET UNITYSDK_OFFSET(0xB1CC690)
#define JIAFOPELMJJ___C__DISPLAYCLASS19_0___MAKEPREDOWNLOAD_B__0_OFFSET UNITYSDK_OFFSET(0xB1E0760)

inline static constexpr unsigned int JIAFOPELMJJ___c__DisplayClass19_0_TypeDefinitionIndex = 59509;

	class JIAFOPELMJJ___c__DisplayClass19_0 : public ::System::Object
	{
	public:
		::JIAFOPELMJJ* __4__this; // 0x10
		::CEOABLKMPKE* audioHPatch; // 0x18
		::PNFLEMCDMJD* blockHPatch; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIAFOPELMJJ___C__DISPLAYCLASS19_0_CTOR_OFFSET))(this);
		}

		::System::Void __MakePreDownload_b__0(::HGCEOEHGPPE* a1, ::KGPCBBIOGLB* a2, ::System::Object* a3, ::RPG::Client::ExeCode a4)
		{
			return ((::System::Void(*)(::PVOID, ::HGCEOEHGPPE*, ::KGPCBBIOGLB*, ::System::Object*, ::RPG::Client::ExeCode))((::PBYTE)hIl2Cpp + JIAFOPELMJJ___C__DISPLAYCLASS19_0___MAKEPREDOWNLOAD_B__0_OFFSET))(this, a1, a2, a3, a4);
		}

	};
