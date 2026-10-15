#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KPCDEJGJHBK;
namespace RPG::GameCore { class LittleGameEntityConfig; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define OAAOCEHKKBK_AJAPKBAEEOD_OFFSET UNITYSDK_OFFSET(0xBD11420)
#define OAAOCEHKKBK_FPHMPAEDFIP_OFFSET UNITYSDK_OFFSET(0xBD109F0)
#define OAAOCEHKKBK_IHBKNDBBPPN_OFFSET UNITYSDK_OFFSET(0xBD11030)
#define OAAOCEHKKBK_LNKGPIDCNIN_OFFSET UNITYSDK_OFFSET(0xBD11180)
#define OAAOCEHKKBK_MHIPBMKDGDL_OFFSET UNITYSDK_OFFSET(0xBD10EB0)

inline static constexpr unsigned int OAAOCEHKKBK_TypeDefinitionIndex = 76547;

	class OAAOCEHKKBK : public ::System::Object
	{
	public:
		static ::UnityEngine::GameObject* FPHMPAEDFIP(::KPCDEJGJHBK* a1, ::System::String* a2)
		{
			return ((::UnityEngine::GameObject*(*)(::KPCDEJGJHBK*, ::System::String*))((::PBYTE)hIl2Cpp + OAAOCEHKKBK_FPHMPAEDFIP_OFFSET))(a1, a2);
		}

		static ::System::Void IHBKNDBBPPN(::KPCDEJGJHBK* a1)
		{
			return ((::System::Void(*)(::KPCDEJGJHBK*))((::PBYTE)hIl2Cpp + OAAOCEHKKBK_IHBKNDBBPPN_OFFSET))(a1);
		}

		static ::System::String* MHIPBMKDGDL(::KPCDEJGJHBK* a1)
		{
			return ((::System::String*(*)(::KPCDEJGJHBK*))((::PBYTE)hIl2Cpp + OAAOCEHKKBK_MHIPBMKDGDL_OFFSET))(a1);
		}

		static ::RPG::GameCore::LittleGameEntityConfig* LNKGPIDCNIN(::KPCDEJGJHBK* a1)
		{
			return ((::RPG::GameCore::LittleGameEntityConfig*(*)(::KPCDEJGJHBK*))((::PBYTE)hIl2Cpp + OAAOCEHKKBK_LNKGPIDCNIN_OFFSET))(a1);
		}

		static ::System::Boolean AJAPKBAEEOD(::KPCDEJGJHBK* a1)
		{
			return ((::System::Boolean(*)(::KPCDEJGJHBK*))((::PBYTE)hIl2Cpp + OAAOCEHKKBK_AJAPKBAEEOD_OFFSET))(a1);
		}

	};
