#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AbilityTargetting.h"
#include "unitysdk/System/Object.h"

class OAMAMDGEJKH;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PNILCJPDPEK_ALMIGIELKCC_OFFSET UNITYSDK_OFFSET(0x1C6995C0)
#define PNILCJPDPEK_ICJGBANKNNG_OFFSET UNITYSDK_OFFSET(0x1C6993B0)
#define PNILCJPDPEK_OFICEBEFMKB_OFFSET UNITYSDK_OFFSET(0x1C6991B0)
#define PNILCJPDPEK__CTOR_OFFSET UNITYSDK_OFFSET(0x1C699120)

inline static constexpr unsigned int PNILCJPDPEK_TypeDefinitionIndex = 47279;

class PNILCJPDPEK : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::MoleMole::Config::AbilityTargetting, ::System::Collections::Generic::List_1<::OAMAMDGEJKH*>*>* BDANNODEDIH; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNILCJPDPEK__CTOR_OFFSET))(this);
	}

	::System::Void OFICEBEFMKB(::MoleMole::Config::AbilityTargetting IBGOCLFPIDE, ::System::Collections::Generic::List_1<::OAMAMDGEJKH*>* MJPDCKOPEMF)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AbilityTargetting, ::System::Collections::Generic::List_1<::OAMAMDGEJKH*>*))((::PBYTE)hIl2Cpp + PNILCJPDPEK_OFICEBEFMKB_OFFSET))(this, IBGOCLFPIDE, MJPDCKOPEMF);
	}

	::System::Void ICJGBANKNNG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNILCJPDPEK_ICJGBANKNNG_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::OAMAMDGEJKH*>* ALMIGIELKCC(::MoleMole::Config::AbilityTargetting IBGOCLFPIDE)
	{
		return ((::System::Collections::Generic::List_1<::OAMAMDGEJKH*>*(*)(::PVOID, ::MoleMole::Config::AbilityTargetting))((::PBYTE)hIl2Cpp + PNILCJPDPEK_ALMIGIELKCC_OFFSET))(this, IBGOCLFPIDE);
	}
};
