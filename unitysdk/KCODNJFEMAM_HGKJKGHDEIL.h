#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KCODNJFEMAM_MFLDIANCDPA.h"

namespace System { class Object; }
namespace System { template <typename T1, typename T2, typename T3, typename T4> class Action_4; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KCODNJFEMAM_HGKJKGHDEIL_AGELNELLFFO_OFFSET UNITYSDK_OFFSET(0x1297ADF0)
#define KCODNJFEMAM_HGKJKGHDEIL_CCDEOGEAJCI_OFFSET UNITYSDK_OFFSET(0x1297ACC0)
#define KCODNJFEMAM_HGKJKGHDEIL_OHFHFOHMBJH_OFFSET UNITYSDK_OFFSET(0x1297ACB0)
#define KCODNJFEMAM_HGKJKGHDEIL_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1297AB20)
#define KCODNJFEMAM_HGKJKGHDEIL__CTOR_OFFSET UNITYSDK_OFFSET(0x1297AA90)

inline static constexpr unsigned int KCODNJFEMAM_HGKJKGHDEIL_TypeDefinitionIndex = 78174;

class KCODNJFEMAM_HGKJKGHDEIL
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* JLKKIKCPGKJ; // 0x48

	::System::Void _ctor(::System::Int32 AHFJCBLHFIJ, ::System::Action_4<::System::Object*, ::System::Int32, ::System::Object*, ::System::Int32>* DFPPJJPCKPA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action_4<::System::Object*, ::System::Int32, ::System::Object*, ::System::Int32>*))((::PBYTE)hIl2Cpp + KCODNJFEMAM_HGKJKGHDEIL__CTOR_OFFSET))(this, AHFJCBLHFIJ, DFPPJJPCKPA);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCODNJFEMAM_HGKJKGHDEIL_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void OHFHFOHMBJH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCODNJFEMAM_HGKJKGHDEIL_OHFHFOHMBJH_OFFSET))(this);
	}

	::System::Void CCDEOGEAJCI(::System::UInt32 CAIGIHGPCPO)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KCODNJFEMAM_HGKJKGHDEIL_CCDEOGEAJCI_OFFSET))(this, CAIGIHGPCPO);
	}

	::System::Void AGELNELLFFO(::KCODNJFEMAM_MFLDIANCDPA ICIHGGJHDKA, ::System::UInt32 CAIGIHGPCPO)
	{
		return ((::System::Void(*)(::PVOID, ::KCODNJFEMAM_MFLDIANCDPA, ::System::UInt32))((::PBYTE)hIl2Cpp + KCODNJFEMAM_HGKJKGHDEIL_AGELNELLFFO_OFFSET))(this, ICIHGGJHDKA, CAIGIHGPCPO);
	}
};
