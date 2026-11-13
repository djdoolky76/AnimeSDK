#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EEDKGBHGAPN.h"
#include "unitysdk/System/Object.h"
class CEJNPLLGHMO;
class IAFKJCICCOP;
class IGACELAIJCM;
class OAFCOIPLJAH;
class PNDNFPHFBMK;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HLAIKCMDIJB_CCBKNOANBLL_OFFSET UNITYSDK_OFFSET(0x19896C40)
#define HLAIKCMDIJB_CTOR_OFFSET UNITYSDK_OFFSET(0x198967C0)
#define HLAIKCMDIJB_EFCHABHKDIK_OFFSET UNITYSDK_OFFSET(0x19896960)
#define HLAIKCMDIJB_EJEKPIHCDMB_OFFSET UNITYSDK_OFFSET(0x19896880)
#define HLAIKCMDIJB_GHDHBFKGENA_OFFSET UNITYSDK_OFFSET(0x19896D80)
#define HLAIKCMDIJB_KGDDIFMLKIF_OFFSET UNITYSDK_OFFSET(0x19896B60)
#define HLAIKCMDIJB_PDECCOOPPNC_OFFSET UNITYSDK_OFFSET(0x19896A80)

inline static constexpr unsigned int HLAIKCMDIJB_TypeDefinitionIndex = 69123;

	class HLAIKCMDIJB : public ::System::Object
	{
	public:
		::IAFKJCICCOP* OFKHJNMELII; // 0x10
		::IGACELAIJCM* LAFJHAGHJCL; // 0x18
		::System::Collections::Generic::Dictionary_2<::EEDKGBHGAPN, ::IGACELAIJCM*>* KGDMMICKJIB; // 0x20
		::CEJNPLLGHMO* JHACIMOOIAM; // 0x28
		::System::Void _ctor(::IAFKJCICCOP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IAFKJCICCOP*))((::PBYTE)hIl2Cpp + HLAIKCMDIJB_CTOR_OFFSET))(this, a1);
		}

		::PNDNFPHFBMK* EJEKPIHCDMB(::System::UInt32 a1)
		{
			return ((::PNDNFPHFBMK*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HLAIKCMDIJB_EJEKPIHCDMB_OFFSET))(this, a1);
		}

		::PNDNFPHFBMK* KGDDIFMLKIF(::System::UInt32 a1)
		{
			return ((::PNDNFPHFBMK*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HLAIKCMDIJB_KGDDIFMLKIF_OFFSET))(this, a1);
		}

		::OAFCOIPLJAH* EFCHABHKDIK(::EEDKGBHGAPN a1)
		{
			return ((::OAFCOIPLJAH*(*)(::PVOID, ::EEDKGBHGAPN))((::PBYTE)hIl2Cpp + HLAIKCMDIJB_EFCHABHKDIK_OFFSET))(this, a1);
		}

		::OAFCOIPLJAH* PDECCOOPPNC()
		{
			return ((::OAFCOIPLJAH*(*)(::PVOID))((::PBYTE)hIl2Cpp + HLAIKCMDIJB_PDECCOOPPNC_OFFSET))(this);
		}

		::System::Void CCBKNOANBLL(::EEDKGBHGAPN a1)
		{
			return ((::System::Void(*)(::PVOID, ::EEDKGBHGAPN))((::PBYTE)hIl2Cpp + HLAIKCMDIJB_CCBKNOANBLL_OFFSET))(this, a1);
		}

		::System::Void GHDHBFKGENA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLAIKCMDIJB_GHDHBFKGENA_OFFSET))(this);
		}

	};
