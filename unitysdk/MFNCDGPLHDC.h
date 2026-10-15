#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CDEAABODKCP;
class DDAMEHEPOBD;
class FPHPFJLAJDK;
class GGAKNLJJNEI;
class NDPFOOJIAIJ;
namespace RPG::Client { class GridFightForgeItemData; }
namespace RPG::Client { class GridFightNPC; }
namespace RPG::Client { class GridFightProjection; }
namespace RPG::Client { class GridFightRole; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define MFNCDGPLHDC_CTOR_OFFSET UNITYSDK_OFFSET(0xB90CAC0)
#define MFNCDGPLHDC_DJPOOEOFGFF_OFFSET UNITYSDK_OFFSET(0xB90CAD0)
#define MFNCDGPLHDC_EHJLKCKNCPB_OFFSET UNITYSDK_OFFSET(0xB90D1D0)
#define MFNCDGPLHDC_GPLEDJMMHLE_OFFSET UNITYSDK_OFFSET(0xB90D160)
#define MFNCDGPLHDC_JGJJKDKJILP_OFFSET UNITYSDK_OFFSET(0xB90CDB0)
#define MFNCDGPLHDC_NIMEEICFLCA_OFFSET UNITYSDK_OFFSET(0xB90D110)

inline static constexpr unsigned int MFNCDGPLHDC_TypeDefinitionIndex = 65269;

	class MFNCDGPLHDC : public ::System::Object
	{
	public:
		::NDPFOOJIAIJ* BABBJILOOAL; // 0x10
		::System::Void _ctor(::NDPFOOJIAIJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NDPFOOJIAIJ*))((::PBYTE)hIl2Cpp + MFNCDGPLHDC_CTOR_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightRole* DJPOOEOFGFF(::CDEAABODKCP* a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::RPG::Client::GridFightRole*(*)(::PVOID, ::CDEAABODKCP*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MFNCDGPLHDC_DJPOOEOFGFF_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::GridFightRole* JGJJKDKJILP(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a4)
		{
			return ((::RPG::Client::GridFightRole*(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + MFNCDGPLHDC_JGJJKDKJILP_OFFSET))(this, a1, a2, a3, a4);
		}

		::RPG::Client::GridFightForgeItemData* NIMEEICFLCA(::DDAMEHEPOBD* a1)
		{
			return ((::RPG::Client::GridFightForgeItemData*(*)(::PVOID, ::DDAMEHEPOBD*))((::PBYTE)hIl2Cpp + MFNCDGPLHDC_NIMEEICFLCA_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightNPC* GPLEDJMMHLE(::GGAKNLJJNEI* a1)
		{
			return ((::RPG::Client::GridFightNPC*(*)(::PVOID, ::GGAKNLJJNEI*))((::PBYTE)hIl2Cpp + MFNCDGPLHDC_GPLEDJMMHLE_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightProjection* EHJLKCKNCPB(::FPHPFJLAJDK* a1)
		{
			return ((::RPG::Client::GridFightProjection*(*)(::PVOID, ::FPHPFJLAJDK*))((::PBYTE)hIl2Cpp + MFNCDGPLHDC_EHJLKCKNCPB_OFFSET))(this, a1);
		}

	};
