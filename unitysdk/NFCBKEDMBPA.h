#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GMAAIJFIFED.h"
namespace RPG::Client { class GridFightEquipItemData; }
namespace RPG::Client { class GridFightTemplateEquipTraitEffect; }

#define NFCBKEDMBPA_CJDBCNNLKHH_OFFSET UNITYSDK_OFFSET(0xC453610)
#define NFCBKEDMBPA_CTOR_OFFSET UNITYSDK_OFFSET(0xC453830)
#define NFCBKEDMBPA_GNADABFLEFM_OFFSET UNITYSDK_OFFSET(0xC453510)

inline static constexpr unsigned int NFCBKEDMBPA_TypeDefinitionIndex = 66515;

	class NFCBKEDMBPA : public ::GMAAIJFIFED
	{
	public:
		// static const ::System::Object BNCKFPAGOMF; // 0x0
		// static const ::System::Object AGKCOGGMIKJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFCBKEDMBPA_CTOR_OFFSET))(this);
		}

		::System::Boolean GNADABFLEFM(::RPG::Client::GridFightEquipItemData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipItemData*))((::PBYTE)hIl2Cpp + NFCBKEDMBPA_GNADABFLEFM_OFFSET))(this, a1);
		}

		static ::RPG::Client::GridFightTemplateEquipTraitEffect* CJDBCNNLKHH()
		{
			return ((::RPG::Client::GridFightTemplateEquipTraitEffect*(*)())((::PBYTE)hIl2Cpp + NFCBKEDMBPA_CJDBCNNLKHH_OFFSET))();
		}

	};
