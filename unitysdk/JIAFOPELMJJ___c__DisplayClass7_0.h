#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class AODPGPILMKK;
class BMNJKMDDACL;
class DJLGNEMNIKI;
class EADIJOHAPHK;
class EJLIOMPMHHI;
class EMGAGCLHCNL;
class HGCEOEHGPPE;
class JIAFOPELMJJ;
class NBNLIDCJLHK;
class OFLJCMOBHIH;
namespace System { class Action; }

#define JIAFOPELMJJ___C__DISPLAYCLASS7_0_CTOR_OFFSET UNITYSDK_OFFSET(0xB1E9A80)
#define JIAFOPELMJJ___C__DISPLAYCLASS7_0__STARTFORMIDPACK_B__0_OFFSET UNITYSDK_OFFSET(0xB1E9A90)
#define JIAFOPELMJJ___C__DISPLAYCLASS7_0__STARTFORMIDPACK_B__1_OFFSET UNITYSDK_OFFSET(0xB1EAE70)
#define JIAFOPELMJJ___C__DISPLAYCLASS7_0__STARTFORMIDPACK_B__2_OFFSET UNITYSDK_OFFSET(0xB1EAE90)

	class JIAFOPELMJJ___c__DisplayClass7_0 : public ::System::Object
	{
	public:
		::AODPGPILMKK* archiveData; // 0x10
		::JIAFOPELMJJ* __4__this; // 0x18
		::DJLGNEMNIKI* designData; // 0x20
		::EMGAGCLHCNL* nativeData; // 0x28
		::BMNJKMDDACL* rawData; // 0x30
		::EJLIOMPMHHI* queue; // 0x38
		::EADIJOHAPHK* blockData; // 0x40
		::NBNLIDCJLHK* luaData; // 0x48
		::OFLJCMOBHIH* startData; // 0x50
		::System::Action* __9__1; // 0x58
		::RPG::Client::TextID progressDescText; // 0x60
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIAFOPELMJJ___C__DISPLAYCLASS7_0_CTOR_OFFSET))(this);
		}

		::System::Void _StartForMidPack_b__0(::HGCEOEHGPPE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGCEOEHGPPE*))((::PBYTE)hIl2Cpp + JIAFOPELMJJ___C__DISPLAYCLASS7_0__STARTFORMIDPACK_B__0_OFFSET))(this, a1);
		}

		::System::Void _StartForMidPack_b__1(::HGCEOEHGPPE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGCEOEHGPPE*))((::PBYTE)hIl2Cpp + JIAFOPELMJJ___C__DISPLAYCLASS7_0__STARTFORMIDPACK_B__1_OFFSET))(this, a1);
		}

		::System::Void _StartForMidPack_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIAFOPELMJJ___C__DISPLAYCLASS7_0__STARTFORMIDPACK_B__2_OFFSET))(this);
		}

	};
