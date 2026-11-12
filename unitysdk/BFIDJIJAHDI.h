#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NFCBKEDMBPA.h"
class BFIDJIJAHDI;
namespace RPG::Client { class GridFightEquipItemData; }
namespace RPG::Client { class GridFightItemFrameInfo; }
namespace RPG::Client { class GridFightTemplateEquipTraitEffect; }

#define BFIDJIJAHDI_CCTOR_OFFSET UNITYSDK_OFFSET(0xB7EE790)
#define BFIDJIJAHDI_CTOR_OFFSET UNITYSDK_OFFSET(0xB7EE560)
#define BFIDJIJAHDI_GNADABFLEFM_OFFSET UNITYSDK_OFFSET(0xB7EE570)
#define BFIDJIJAHDI_JIPEELKDLPD_1_OFFSET UNITYSDK_OFFSET(0xB7EE700)
#define BFIDJIJAHDI_JIPEELKDLPD_OFFSET UNITYSDK_OFFSET(0xB7EE5E0)

inline static constexpr unsigned int BFIDJIJAHDI_TypeDefinitionIndex = 66516;

	class BFIDJIJAHDI : public ::NFCBKEDMBPA
	{
	public:
		static ::BFIDJIJAHDI** StaticGet_FMJPMFEDIJL()
		{
			return (::BFIDJIJAHDI**)UnitySDK::FromName("", "BFIDJIJAHDI")->GetStaticField(0x69C20);
		}

		// static const ::System::String* GKOGGAKOBDK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFIDJIJAHDI_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BFIDJIJAHDI_CCTOR_OFFSET))();
		}

		::System::Boolean GNADABFLEFM(::RPG::Client::GridFightEquipItemData* a1, ::RPG::Client::GridFightTemplateEquipTraitEffect* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipItemData*, ::RPG::Client::GridFightTemplateEquipTraitEffect*))((::PBYTE)hIl2Cpp + BFIDJIJAHDI_GNADABFLEFM_OFFSET))(this, a1, a2);
		}

		::RPG::Client::GridFightItemFrameInfo* JIPEELKDLPD(::RPG::Client::GridFightEquipItemData* a1)
		{
			return ((::RPG::Client::GridFightItemFrameInfo*(*)(::PVOID, ::RPG::Client::GridFightEquipItemData*))((::PBYTE)hIl2Cpp + BFIDJIJAHDI_JIPEELKDLPD_OFFSET))(this, a1);
		}

		static ::RPG::Client::GridFightItemFrameInfo* JIPEELKDLPD_1()
		{
			return ((::RPG::Client::GridFightItemFrameInfo*(*)())((::PBYTE)hIl2Cpp + BFIDJIJAHDI_JIPEELKDLPD_1_OFFSET))();
		}

	};
