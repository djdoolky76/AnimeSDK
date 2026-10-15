#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class AnniversaryCollectionPanelData; }

#define NADABFJHEHM_CTOR_OFFSET UNITYSDK_OFFSET(0xBA55DF0)
#define NADABFJHEHM_KHCMGMOCHKN_OFFSET UNITYSDK_OFFSET(0xBA55E80)
#define NADABFJHEHM_MNFDJHCGKNE_OFFSET UNITYSDK_OFFSET(0xBA55E00)

inline static constexpr unsigned int NADABFJHEHM_TypeDefinitionIndex = 62391;

	class NADABFJHEHM : public ::System::Object
	{
	public:
		::RPG::Client::AnniversaryCollectionPanelData* HDCJMGPBJOJ; // 0x10
		::System::Void _ctor(::RPG::Client::AnniversaryCollectionPanelData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AnniversaryCollectionPanelData*))((::PBYTE)hIl2Cpp + NADABFJHEHM_CTOR_OFFSET))(this, a1);
		}

		::System::Boolean MNFDJHCGKNE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NADABFJHEHM_MNFDJHCGKNE_OFFSET))(this);
		}

		::System::Void KHCMGMOCHKN(::RPG::Client::AnniversaryCollectionPanelData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AnniversaryCollectionPanelData*))((::PBYTE)hIl2Cpp + NADABFJHEHM_KHCMGMOCHKN_OFFSET))(this, a1);
		}

	};
