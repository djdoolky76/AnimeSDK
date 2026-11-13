#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NFCBKEDMBPA.h"
class LDLLJHAEPKK;
namespace RPG::Client { class GridFightEquipItemData; }
namespace RPG::Client { class GridFightItemFrameInfo; }
namespace RPG::Client { class GridFightTemplateEquipTraitEffect; }

#define LDLLJHAEPKK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1AC98320)
#define LDLLJHAEPKK_CTOR_OFFSET UNITYSDK_OFFSET(0x1AC97F10)
#define LDLLJHAEPKK_GNADABFLEFM_OFFSET UNITYSDK_OFFSET(0x1AC97F20)
#define LDLLJHAEPKK_JIPEELKDLPD_OFFSET UNITYSDK_OFFSET(0x1AC98280)

inline static constexpr unsigned int LDLLJHAEPKK_TypeDefinitionIndex = 66517;

	class LDLLJHAEPKK : public ::NFCBKEDMBPA
	{
	public:
		static ::LDLLJHAEPKK** StaticGet_FMJPMFEDIJL()
		{
			return (::LDLLJHAEPKK**)UnitySDK::FromName("", "LDLLJHAEPKK")->GetStaticField(0x57A70);
		}

		// static const ::System::String* GKOGGAKOBDK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDLLJHAEPKK_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LDLLJHAEPKK_CCTOR_OFFSET))();
		}

		::System::Boolean GNADABFLEFM(::RPG::Client::GridFightEquipItemData* a1, ::RPG::Client::GridFightTemplateEquipTraitEffect* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipItemData*, ::RPG::Client::GridFightTemplateEquipTraitEffect*))((::PBYTE)hIl2Cpp + LDLLJHAEPKK_GNADABFLEFM_OFFSET))(this, a1, a2);
		}

		::RPG::Client::GridFightItemFrameInfo* JIPEELKDLPD(::RPG::Client::GridFightEquipItemData* a1)
		{
			return ((::RPG::Client::GridFightItemFrameInfo*(*)(::PVOID, ::RPG::Client::GridFightEquipItemData*))((::PBYTE)hIl2Cpp + LDLLJHAEPKK_JIPEELKDLPD_OFFSET))(this, a1);
		}

	};
