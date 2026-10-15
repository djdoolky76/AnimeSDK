#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
namespace RPG::GameCore { class HoyoTag; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define EDFBKGOLCNM_CTOR_OFFSET UNITYSDK_OFFSET(0x13313D10)
#define EDFBKGOLCNM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x133132A0)
#define EDFBKGOLCNM_EFBBDIPKIBF_OFFSET UNITYSDK_OFFSET(0x13313170)
#define EDFBKGOLCNM_LMCEDCHJKFF_OFFSET UNITYSDK_OFFSET(0x13313080)
#define EDFBKGOLCNM_ONMODELARTLOADED_OFFSET UNITYSDK_OFFSET(0x13313390)
#define EDFBKGOLCNM_ONMODELARTUNLOADED_OFFSET UNITYSDK_OFFSET(0x133137F0)
#define EDFBKGOLCNM_PGIELCLCMKD_OFFSET UNITYSDK_OFFSET(0x13313C50)

inline static constexpr unsigned int EDFBKGOLCNM_TypeDefinitionIndex = 57298;

	class EDFBKGOLCNM : public ::RPG::GameCore::GameComponentBase
	{
	public:
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::HoyoTag*, ::System::Action*>* HPGCEEADNDH; // 0x18
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::HoyoTag*, ::System::Action*>* JMMOFMIHNMN; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDFBKGOLCNM_CTOR_OFFSET))(this);
		}

		::System::Void LMCEDCHJKFF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDFBKGOLCNM_LMCEDCHJKFF_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDFBKGOLCNM_DISPOSE_OFFSET))(this);
		}

		::System::Void OnModelArtLoaded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDFBKGOLCNM_ONMODELARTLOADED_OFFSET))(this);
		}

		::System::Void OnModelArtUnloaded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDFBKGOLCNM_ONMODELARTUNLOADED_OFFSET))(this);
		}

		static ::RPG::GameCore::HoyoTag* EFBBDIPKIBF(::System::String* a1)
		{
			return ((::RPG::GameCore::HoyoTag*(*)(::System::String*))((::PBYTE)hIl2Cpp + EDFBKGOLCNM_EFBBDIPKIBF_OFFSET))(a1);
		}

		::System::Void PGIELCLCMKD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDFBKGOLCNM_PGIELCLCMKD_OFFSET))(this);
		}

	};
