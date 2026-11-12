#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LJKHPOHKIIF.h"
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BLPBLLOFMNE_BCHIANKFLPI_OFFSET UNITYSDK_OFFSET(0xC4156D0)
#define BLPBLLOFMNE_BMEDNBHJKLE_OFFSET UNITYSDK_OFFSET(0xC415640)
#define BLPBLLOFMNE_CTOR_OFFSET UNITYSDK_OFFSET(0xC4157F0)
#define BLPBLLOFMNE_GAFKECIDLJG_OFFSET UNITYSDK_OFFSET(0xC415580)
#define BLPBLLOFMNE_GGNBOEIMEPM_OFFSET UNITYSDK_OFFSET(0xC414E80)
#define BLPBLLOFMNE_GNLKPJHAKHM_OFFSET UNITYSDK_OFFSET(0xC4155D0)
#define BLPBLLOFMNE_NOFNMENJAFN_OFFSET UNITYSDK_OFFSET(0xC414ED0)

inline static constexpr unsigned int BLPBLLOFMNE_TypeDefinitionIndex = 60993;

	class BLPBLLOFMNE : public ::LJKHPOHKIIF
	{
	public:
		::System::Boolean FJMFKJEIOIO; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLPBLLOFMNE_CTOR_OFFSET))(this);
		}

		::System::Void GGNBOEIMEPM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLPBLLOFMNE_GGNBOEIMEPM_OFFSET))(this);
		}

		::System::Void GAFKECIDLJG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLPBLLOFMNE_GAFKECIDLJG_OFFSET))(this);
		}

		::System::Void GNLKPJHAKHM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLPBLLOFMNE_GNLKPJHAKHM_OFFSET))(this);
		}

		::System::Void NOFNMENJAFN(::System::Int32 a1, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>*))((::PBYTE)hIl2Cpp + BLPBLLOFMNE_NOFNMENJAFN_OFFSET))(this, a1, a2);
		}

		::System::Void BMEDNBHJKLE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLPBLLOFMNE_BMEDNBHJKLE_OFFSET))(this);
		}

		::System::Void BCHIANKFLPI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLPBLLOFMNE_BCHIANKFLPI_OFFSET))(this);
		}

	};
