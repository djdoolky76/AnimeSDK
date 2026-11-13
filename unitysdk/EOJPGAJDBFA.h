#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NFCBKEDMBPA.h"
class EOJPGAJDBFA;
namespace RPG::Client { class GridFightEquipItemData; }
namespace RPG::Client { class GridFightItemFrameInfo; }
namespace RPG::Client { class GridFightTemplateEquipTraitEffect; }

#define EOJPGAJDBFA_CCTOR_OFFSET UNITYSDK_OFFSET(0x16B26DF0)
#define EOJPGAJDBFA_CTOR_OFFSET UNITYSDK_OFFSET(0x16B26CB0)
#define EOJPGAJDBFA_GNADABFLEFM_OFFSET UNITYSDK_OFFSET(0x16B26CC0)
#define EOJPGAJDBFA_JIPEELKDLPD_OFFSET UNITYSDK_OFFSET(0x16B26D50)

inline static constexpr unsigned int EOJPGAJDBFA_TypeDefinitionIndex = 66514;

	class EOJPGAJDBFA : public ::NFCBKEDMBPA
	{
	public:
		static ::EOJPGAJDBFA** StaticGet_FMJPMFEDIJL()
		{
			return (::EOJPGAJDBFA**)UnitySDK::FromName("", "EOJPGAJDBFA")->GetStaticField(0x2DBC0);
		}

		// static const ::System::String* GKOGGAKOBDK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EOJPGAJDBFA_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EOJPGAJDBFA_CCTOR_OFFSET))();
		}

		::System::Boolean GNADABFLEFM(::RPG::Client::GridFightEquipItemData* a1, ::RPG::Client::GridFightTemplateEquipTraitEffect* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipItemData*, ::RPG::Client::GridFightTemplateEquipTraitEffect*))((::PBYTE)hIl2Cpp + EOJPGAJDBFA_GNADABFLEFM_OFFSET))(this, a1, a2);
		}

		::RPG::Client::GridFightItemFrameInfo* JIPEELKDLPD(::RPG::Client::GridFightEquipItemData* a1)
		{
			return ((::RPG::Client::GridFightItemFrameInfo*(*)(::PVOID, ::RPG::Client::GridFightEquipItemData*))((::PBYTE)hIl2Cpp + EOJPGAJDBFA_JIPEELKDLPD_OFFSET))(this, a1);
		}

	};
