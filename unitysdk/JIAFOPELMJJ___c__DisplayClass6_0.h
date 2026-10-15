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

#define JIAFOPELMJJ___C__DISPLAYCLASS6_0_CTOR_OFFSET UNITYSDK_OFFSET(0xB1E8120)
#define JIAFOPELMJJ___C__DISPLAYCLASS6_0__STARTFORMIDPACKPS_B__0_OFFSET UNITYSDK_OFFSET(0xB1E8130)
#define JIAFOPELMJJ___C__DISPLAYCLASS6_0__STARTFORMIDPACKPS_B__1_OFFSET UNITYSDK_OFFSET(0xB1E9510)
#define JIAFOPELMJJ___C__DISPLAYCLASS6_0__STARTFORMIDPACKPS_B__2_OFFSET UNITYSDK_OFFSET(0xB1E9530)

inline static constexpr unsigned int JIAFOPELMJJ___c__DisplayClass6_0_TypeDefinitionIndex = 59523;

	class JIAFOPELMJJ___c__DisplayClass6_0 : public ::System::Object
	{
	public:
		::NBNLIDCJLHK* luaData; // 0x10
		::OFLJCMOBHIH* startData; // 0x18
		::BMNJKMDDACL* rawData; // 0x20
		::EJLIOMPMHHI* queue; // 0x28
		::AODPGPILMKK* archiveData; // 0x30
		::EMGAGCLHCNL* nativeData; // 0x38
		::DJLGNEMNIKI* designData; // 0x40
		::JIAFOPELMJJ* __4__this; // 0x48
		::System::Action* __9__1; // 0x50
		::EADIJOHAPHK* blockData; // 0x58
		::RPG::Client::TextID progressDescText; // 0x60
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIAFOPELMJJ___C__DISPLAYCLASS6_0_CTOR_OFFSET))(this);
		}

		::System::Void _StartForMidPackPS_b__0(::HGCEOEHGPPE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGCEOEHGPPE*))((::PBYTE)hIl2Cpp + JIAFOPELMJJ___C__DISPLAYCLASS6_0__STARTFORMIDPACKPS_B__0_OFFSET))(this, a1);
		}

		::System::Void _StartForMidPackPS_b__1(::HGCEOEHGPPE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGCEOEHGPPE*))((::PBYTE)hIl2Cpp + JIAFOPELMJJ___C__DISPLAYCLASS6_0__STARTFORMIDPACKPS_B__1_OFFSET))(this, a1);
		}

		::System::Void _StartForMidPackPS_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIAFOPELMJJ___C__DISPLAYCLASS6_0__STARTFORMIDPACKPS_B__2_OFFSET))(this);
		}

	};
