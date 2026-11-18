#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class DJPEEJFNCHL;
class MKFNBHDICNJ;
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define MKFNBHDICNJ_MIKAMFHHLOP_MPPNCBLCHHM_OFFSET UNITYSDK_OFFSET(0x12D90DC0)
#define MKFNBHDICNJ_MIKAMFHHLOP_NEBFJMOJMNJ_OFFSET UNITYSDK_OFFSET(0x12D90E20)
#define MKFNBHDICNJ_MIKAMFHHLOP_PLKIILLNLCK_OFFSET UNITYSDK_OFFSET(0x12D90E00)
#define MKFNBHDICNJ_MIKAMFHHLOP__CTOR_OFFSET UNITYSDK_OFFSET(0x12D90DB0)

inline static constexpr unsigned int MKFNBHDICNJ_MIKAMFHHLOP_TypeDefinitionIndex = 61363;

class MKFNBHDICNJ_MIKAMFHHLOP : public ::System::Object
{
public:
	::MKFNBHDICNJ* KLHPEBKNIFB; // 0x10
	::System::Collections::Generic::HashSet_1<::System::Int32>* HMKAELOOHKC; // 0x18
	::System::Int32 BPLDELAGEBB; // 0x20
	::System::Int32 BMPFDAECMCG; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKFNBHDICNJ_MIKAMFHHLOP__CTOR_OFFSET))(this);
	}

	::System::Boolean MPPNCBLCHHM(::DJPEEJFNCHL* FGMNCNLGPAP)
	{
		return ((::System::Boolean(*)(::PVOID, ::DJPEEJFNCHL*))((::PBYTE)hIl2Cpp + MKFNBHDICNJ_MIKAMFHHLOP_MPPNCBLCHHM_OFFSET))(this, FGMNCNLGPAP);
	}

	::System::Boolean PLKIILLNLCK(::DJPEEJFNCHL* FGMNCNLGPAP)
	{
		return ((::System::Boolean(*)(::PVOID, ::DJPEEJFNCHL*))((::PBYTE)hIl2Cpp + MKFNBHDICNJ_MIKAMFHHLOP_PLKIILLNLCK_OFFSET))(this, FGMNCNLGPAP);
	}

	::System::Boolean NEBFJMOJMNJ(::System::Int32 AOCOIDIMLIH)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MKFNBHDICNJ_MIKAMFHHLOP_NEBFJMOJMNJ_OFFSET))(this, AOCOIDIMLIH);
	}
};
