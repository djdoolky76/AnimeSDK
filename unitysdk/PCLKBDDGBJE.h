#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EJLIOMPMHHI;
namespace System { class String; }

#define PCLKBDDGBJE_CIHFGJDCHIA_OFFSET UNITYSDK_OFFSET(0xC003400)
#define PCLKBDDGBJE_CTOR_OFFSET UNITYSDK_OFFSET(0xC003580)
#define PCLKBDDGBJE_IECIAPPANHI_OFFSET UNITYSDK_OFFSET(0xC0034C0)
#define PCLKBDDGBJE_LNBKAMKHOMO_OFFSET UNITYSDK_OFFSET(0xC003460)
#define PCLKBDDGBJE_MDMLIHMGBCA_OFFSET UNITYSDK_OFFSET(0xC0032E0)
#define PCLKBDDGBJE_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0xC003120)
#define PCLKBDDGBJE_OHMHJFANEIF_OFFSET UNITYSDK_OFFSET(0xC003520)

inline static constexpr unsigned int PCLKBDDGBJE_TypeDefinitionIndex = 59639;

	class PCLKBDDGBJE : public ::System::Object
	{
	public:
		::System::String* NJFKHPIHDEF; // 0x10
		::EJLIOMPMHHI* FEICCPBBIHG; // 0x18
		::System::Boolean EKBCHBNECCN; // 0x20
		::System::Boolean LAMDNHEMNJJ; // 0x21
		::System::Byte _padding0[0x2];
		::System::Single HBLIICAPKJI; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCLKBDDGBJE_CTOR_OFFSET))(this);
		}

		::System::Void NPAFMEBNFOB(::EJLIOMPMHHI* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::EJLIOMPMHHI*, ::System::Boolean))((::PBYTE)hIl2Cpp + PCLKBDDGBJE_NPAFMEBNFOB_OFFSET))(this, a1, a2);
		}

		::System::Void CIHFGJDCHIA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCLKBDDGBJE_CIHFGJDCHIA_OFFSET))(this);
		}

		::System::Void LNBKAMKHOMO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCLKBDDGBJE_LNBKAMKHOMO_OFFSET))(this);
		}

		::System::Void IECIAPPANHI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCLKBDDGBJE_IECIAPPANHI_OFFSET))(this);
		}

		::System::Void OHMHJFANEIF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCLKBDDGBJE_OHMHJFANEIF_OFFSET))(this);
		}

		::System::Void MDMLIHMGBCA(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PCLKBDDGBJE_MDMLIHMGBCA_OFFSET))(this, a1);
		}

	};
