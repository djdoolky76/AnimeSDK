#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class AODPGPILMKK;
class EJLIOMPMHHI;
class HGCEOEHGPPE;
class IBNCECGKMNI;
class JIAFOPELMJJ;
class NBNLIDCJLHK;
class OEODAOIOGLO;
namespace System { class String; }

#define JIAFOPELMJJ___C__DISPLAYCLASS72_0_CTOR_OFFSET UNITYSDK_OFFSET(0xB1E9680)
#define JIAFOPELMJJ___C__DISPLAYCLASS72_0__STARTPATCH_B__0_OFFSET UNITYSDK_OFFSET(0xB1E9690)
#define JIAFOPELMJJ___C__DISPLAYCLASS72_0__STARTPATCH_B__1_OFFSET UNITYSDK_OFFSET(0xB1E9840)

	class JIAFOPELMJJ___c__DisplayClass72_0 : public ::System::Object
	{
	public:
		::System::String* stateLocalVerify; // 0x10
		::EJLIOMPMHHI* queue; // 0x18
		::IBNCECGKMNI* archiveDesign; // 0x20
		::OEODAOIOGLO* audioData; // 0x28
		::JIAFOPELMJJ* __4__this; // 0x30
		::NBNLIDCJLHK* luaData; // 0x38
		::AODPGPILMKK* archiveData; // 0x40
		::RPG::Client::TextID progressDescText; // 0x48
		::System::Boolean isDownloadedFullAssets; // 0x58
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIAFOPELMJJ___C__DISPLAYCLASS72_0_CTOR_OFFSET))(this);
		}

		::System::Void _StartPatch_b__0(::HGCEOEHGPPE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGCEOEHGPPE*))((::PBYTE)hIl2Cpp + JIAFOPELMJJ___C__DISPLAYCLASS72_0__STARTPATCH_B__0_OFFSET))(this, a1);
		}

		::System::Void _StartPatch_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIAFOPELMJJ___C__DISPLAYCLASS72_0__STARTPATCH_B__1_OFFSET))(this);
		}

	};
