#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CFJJFFMMEAF.h"
#include "unitysdk/JLBPMGGAFJE.h"
#include "unitysdk/System/Object.h"
class GELIALJDFBL;
class MNBNFBAMKKI;
class OEOLGJFLJDO;
namespace RPG::GameCore { class RtModifierConfig; }
namespace RPG::GameCore { class RtSubModifierData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MNAADIBENLC_ALJIOCDBMKO_OFFSET UNITYSDK_OFFSET(0xB9DBC00)
#define MNAADIBENLC_CLEAR_OFFSET UNITYSDK_OFFSET(0xB9DA9D0)
#define MNAADIBENLC_CTOR_OFFSET UNITYSDK_OFFSET(0xB9DC600)
#define MNAADIBENLC_JEJPBIGFOOB_OFFSET UNITYSDK_OFFSET(0xB9DBAF0)
#define MNAADIBENLC_JKCPLEJCBML_OFFSET UNITYSDK_OFFSET(0xB9DBA00)
#define MNAADIBENLC_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xB9DAA10)
#define MNAADIBENLC_LJBCDJNNBJH_OFFSET UNITYSDK_OFFSET(0xB9DAF20)
#define MNAADIBENLC_MGINCIJOPIL_OFFSET UNITYSDK_OFFSET(0xB9DC410)
#define MNAADIBENLC_MLMGEFIOION_OFFSET UNITYSDK_OFFSET(0xB9DC5E0)

inline static constexpr unsigned int MNAADIBENLC_TypeDefinitionIndex = 53770;

	class MNAADIBENLC : public ::System::Object
	{
	public:
		::GELIALJDFBL* BCNKCIJBGEF; // 0x10
		::System::Collections::Generic::List_1<::CFJJFFMMEAF>* KCBBGOGCNLP; // 0x18
		::RPG::GameCore::RtModifierConfig* BMNKALMLGFP; // 0x20
		::MNBNFBAMKKI* GCBHBMNNHPJ; // 0x28
		::System::Collections::Generic::List_1<::JLBPMGGAFJE>* CMKFNEEAGOC; // 0x30
		::RPG::GameCore::RtSubModifierData* IGHAHBNLIJA; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNAADIBENLC_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNAADIBENLC_CLEAR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::MNBNFBAMKKI* a1, ::RPG::GameCore::RtSubModifierData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MNBNFBAMKKI*, ::RPG::GameCore::RtSubModifierData*))((::PBYTE)hIl2Cpp + MNAADIBENLC_KPJGDHLENIP_OFFSET))(this, a1, a2);
		}

		::System::Void JKCPLEJCBML()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNAADIBENLC_JKCPLEJCBML_OFFSET))(this);
		}

		::System::Void ALJIOCDBMKO(::RPG::GameCore::RtSubModifierData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RtSubModifierData*))((::PBYTE)hIl2Cpp + MNAADIBENLC_ALJIOCDBMKO_OFFSET))(this, a1);
		}

		::System::Void LJBCDJNNBJH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNAADIBENLC_LJBCDJNNBJH_OFFSET))(this);
		}

		::System::Void JEJPBIGFOOB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNAADIBENLC_JEJPBIGFOOB_OFFSET))(this);
		}

		::OEOLGJFLJDO* MGINCIJOPIL()
		{
			return ((::OEOLGJFLJDO*(*)(::PVOID))((::PBYTE)hIl2Cpp + MNAADIBENLC_MGINCIJOPIL_OFFSET))(this);
		}

		::System::String* MLMGEFIOION()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MNAADIBENLC_MLMGEFIOION_OFFSET))(this);
		}

	};
