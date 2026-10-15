#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
class ALMFLCJCHKP;
class LDLCIEJKBNH_OFMKBFBJDAO;
namespace RPG::GameCore { class ChenLingBattleEffectConfig; }
namespace RPG::GameCore { class ChenLingBattleEffectTier; }
namespace System { class String; }

#define OCHEDHHIJNB_FAPKFFKNCOD_OFFSET UNITYSDK_OFFSET(0xBD5C070)
#define OCHEDHHIJNB_FIFLBLPMGOO_OFFSET UNITYSDK_OFFSET(0xBD5C320)
#define OCHEDHHIJNB_IHOLEGDCFNO_OFFSET UNITYSDK_OFFSET(0xBD5C100)

inline static constexpr unsigned int OCHEDHHIJNB_TypeDefinitionIndex = 77834;

	class OCHEDHHIJNB : public ::System::Object
	{
	public:
		static ::System::String* FAPKFFKNCOD(::ALMFLCJCHKP* a1, ::RPG::GameCore::ChenLingBattleEffectConfig* a2)
		{
			return ((::System::String*(*)(::ALMFLCJCHKP*, ::RPG::GameCore::ChenLingBattleEffectConfig*))((::PBYTE)hIl2Cpp + OCHEDHHIJNB_FAPKFFKNCOD_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Vector3 FIFLBLPMGOO(::ALMFLCJCHKP* a1, ::RPG::GameCore::ChenLingBattleEffectConfig* a2, ::LDLCIEJKBNH_OFMKBFBJDAO* a3)
		{
			return ((::UnityEngine::Vector3(*)(::ALMFLCJCHKP*, ::RPG::GameCore::ChenLingBattleEffectConfig*, ::LDLCIEJKBNH_OFMKBFBJDAO*))((::PBYTE)hIl2Cpp + OCHEDHHIJNB_FIFLBLPMGOO_OFFSET))(a1, a2, a3);
		}

		static ::RPG::GameCore::ChenLingBattleEffectTier* IHOLEGDCFNO(::ALMFLCJCHKP* a1, ::Il2CppArray<::RPG::GameCore::ChenLingBattleEffectTier*>* a2)
		{
			return ((::RPG::GameCore::ChenLingBattleEffectTier*(*)(::ALMFLCJCHKP*, ::Il2CppArray<::RPG::GameCore::ChenLingBattleEffectTier*>*))((::PBYTE)hIl2Cpp + OCHEDHHIJNB_IHOLEGDCFNO_OFFSET))(a1, a2);
		}

	};
