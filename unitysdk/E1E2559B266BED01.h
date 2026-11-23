#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/B39AAAD1233537D7/A667A4F14287E993.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

class A25EE7D8417FFEA2;
namespace ABC::UI { class MonoPrefabLoader; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define E1E2559B266BED01_AA5A2A2A5B2D5C25_OFFSET UNITYSDK_OFFSET(0x21AF390)
#define E1E2559B266BED01_B86883D7E66746FA_OFFSET UNITYSDK_OFFSET(0x21AF7B0)
#define E1E2559B266BED01_BAAB973748FB8917_OFFSET UNITYSDK_OFFSET(0x21AF680)
#define E1E2559B266BED01_E0F49A14684694BC_OFFSET UNITYSDK_OFFSET(0x21AF990)
#define E1E2559B266BED01_E2C6F2285659D216_OFFSET UNITYSDK_OFFSET(0x21AFB70)
#define E1E2559B266BED01_F6691C1FDBE16930_OFFSET UNITYSDK_OFFSET(0x21AF740)
#define E1E2559B266BED01_FCC7443573DD0222_OFFSET UNITYSDK_OFFSET(0x21AF4E0)
#define E1E2559B266BED01__CTOR_OFFSET UNITYSDK_OFFSET(0x21AFCA0)

inline static constexpr unsigned int E1E2559B266BED01_TypeDefinitionIndex = 8816;

class E1E2559B266BED01 : public ::System::Object
{
public:
	::System::Nullable_1<::B39AAAD1233537D7::A667A4F14287E993> BF5051BEEADDE276; // 0x10
	::System::Collections::Generic::List_1<::A25EE7D8417FFEA2*>* BC1401E1048D8E81; // 0x18
	::System::Action* E04A060E3B4E7376; // 0x20

	::System::Void E0F49A14684694BC(::B39AAAD1233537D7::A667A4F14287E993 F71230635756A10D, ::System::Boolean F1AACB3553F67303)
	{
		return ((::System::Void(*)(::PVOID, ::B39AAAD1233537D7::A667A4F14287E993, ::System::Boolean))((::PBYTE)hIl2Cpp + E1E2559B266BED01_E0F49A14684694BC_OFFSET))(this, F71230635756A10D, F1AACB3553F67303);
	}

	::System::Void _ctor(::ABC::UI::MonoPrefabLoader* E6305B8DDD56CFBC, ::System::Action* EAEBB580C1ACF0EA)
	{
		return ((::System::Void(*)(::PVOID, ::ABC::UI::MonoPrefabLoader*, ::System::Action*))((::PBYTE)hIl2Cpp + E1E2559B266BED01__CTOR_OFFSET))(this, E6305B8DDD56CFBC, EAEBB580C1ACF0EA);
	}

	::System::Void B86883D7E66746FA(::System::Collections::Generic::List_1<::System::UInt32>* A5186934037221CA, ::System::Nullable_1<::System::UInt32> B2C7EFC78EE92D9D)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Nullable_1<::System::UInt32>))((::PBYTE)hIl2Cpp + E1E2559B266BED01_B86883D7E66746FA_OFFSET))(this, A5186934037221CA, B2C7EFC78EE92D9D);
	}

	::System::Boolean E2C6F2285659D216(::System::UInt32 BC8A36DD3606E794)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + E1E2559B266BED01_E2C6F2285659D216_OFFSET))(this, BC8A36DD3606E794);
	}

	::System::Void AA5A2A2A5B2D5C25()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E1E2559B266BED01_AA5A2A2A5B2D5C25_OFFSET))(this);
	}

	::System::Void FCC7443573DD0222()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E1E2559B266BED01_FCC7443573DD0222_OFFSET))(this);
	}

	::System::Boolean F6691C1FDBE16930()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + E1E2559B266BED01_F6691C1FDBE16930_OFFSET))(this);
	}

	::System::Nullable_1<::System::UInt32> BAAB973748FB8917()
	{
		return ((::System::Nullable_1<::System::UInt32>(*)(::PVOID))((::PBYTE)hIl2Cpp + E1E2559B266BED01_BAAB973748FB8917_OFFSET))(this);
	}
};
