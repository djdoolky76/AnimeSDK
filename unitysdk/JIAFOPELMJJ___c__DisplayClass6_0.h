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
namespace System { template <typename T> class Action_1; }

#define JIAFOPELMJJ___C__DISPLAYCLASS6_0_CTOR_OFFSET UNITYSDK_OFFSET(0xB1C71C0)
#define JIAFOPELMJJ___C__DISPLAYCLASS6_0__STARTFORMIDPACKPS_B__0_OFFSET UNITYSDK_OFFSET(0xB1E1D50)
#define JIAFOPELMJJ___C__DISPLAYCLASS6_0__STARTFORMIDPACKPS_B__1_OFFSET UNITYSDK_OFFSET(0xB1E3130)
#define JIAFOPELMJJ___C__DISPLAYCLASS6_0__STARTFORMIDPACKPS_B__2_OFFSET UNITYSDK_OFFSET(0xB1E3150)

inline static constexpr unsigned int JIAFOPELMJJ___c__DisplayClass6_0_TypeDefinitionIndex = 59523;

	class JIAFOPELMJJ___c__DisplayClass6_0 : public ::System::Object
	{
	public:
		::EADIJOHAPHK* blockData; // 0x10
		::AODPGPILMKK* archiveData; // 0x18
		::JIAFOPELMJJ* __4__this; // 0x20
		::DJLGNEMNIKI* designData; // 0x28
		::BMNJKMDDACL* rawData; // 0x30
		::System::Action_1<::HGCEOEHGPPE*>* __9__1; // 0x38
		::EMGAGCLHCNL* nativeData; // 0x40
		::EJLIOMPMHHI* queue; // 0x48
		::NBNLIDCJLHK* luaData; // 0x50
		::OFLJCMOBHIH* startData; // 0x58
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
