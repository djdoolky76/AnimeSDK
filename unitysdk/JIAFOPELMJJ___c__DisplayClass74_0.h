#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ExeCode.h"
#include "unitysdk/System/Object.h"
class CEOABLKMPKE;
class HGCEOEHGPPE;
class JIAFOPELMJJ;
class KGPCBBIOGLB;
class KPNOBBFKNHA;
class NBNLIDCJLHK;
class PNFLEMCDMJD;
namespace System { class Object; }

#define JIAFOPELMJJ___C__DISPLAYCLASS74_0_CTOR_OFFSET UNITYSDK_OFFSET(0xB1E99A0)
#define JIAFOPELMJJ___C__DISPLAYCLASS74_0___MAKEPATCHPROGRESS_B__0_OFFSET UNITYSDK_OFFSET(0xB1E99B0)
#define JIAFOPELMJJ___C__DISPLAYCLASS74_0___MAKEPATCHPROGRESS_B__1_OFFSET UNITYSDK_OFFSET(0xB1E99F0)

	class JIAFOPELMJJ___c__DisplayClass74_0 : public ::System::Object
	{
	public:
		::CEOABLKMPKE* audioHPatch; // 0x10
		::KPNOBBFKNHA* designHPatch; // 0x18
		::JIAFOPELMJJ* __4__this; // 0x20
		::PNFLEMCDMJD* blockHPatch; // 0x28
		::NBNLIDCJLHK* luaData; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIAFOPELMJJ___C__DISPLAYCLASS74_0_CTOR_OFFSET))(this);
		}

		::System::Void __MakePatchProgress_b__0(::HGCEOEHGPPE* a1, ::KGPCBBIOGLB* a2, ::System::Object* a3, ::RPG::Client::ExeCode a4)
		{
			return ((::System::Void(*)(::PVOID, ::HGCEOEHGPPE*, ::KGPCBBIOGLB*, ::System::Object*, ::RPG::Client::ExeCode))((::PBYTE)hIl2Cpp + JIAFOPELMJJ___C__DISPLAYCLASS74_0___MAKEPATCHPROGRESS_B__0_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void __MakePatchProgress_b__1(::HGCEOEHGPPE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGCEOEHGPPE*))((::PBYTE)hIl2Cpp + JIAFOPELMJJ___C__DISPLAYCLASS74_0___MAKEPATCHPROGRESS_B__1_OFFSET))(this, a1);
		}

	};
