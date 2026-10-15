#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/NPCBodySize.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::Client { class EmoEyeCtrl; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define GPPPDGFLHLJ_AFILAANOIAB_OFFSET UNITYSDK_OFFSET(0x15B69410)
#define GPPPDGFLHLJ_KEPMOCBBOKP_OFFSET UNITYSDK_OFFSET(0x15B69DB0)
#define GPPPDGFLHLJ_KGHBLDBMMAD_OFFSET UNITYSDK_OFFSET(0x15B692A0)

	class GPPPDGFLHLJ : public ::System::Object
	{
	public:
		static ::System::Void KGHBLDBMMAD(::RPG::GameCore::NPCBodySize a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::RPG::GameCore::NPCBodySize, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + GPPPDGFLHLJ_KGHBLDBMMAD_OFFSET))(a1, a2, a3);
		}

		static ::System::Void AFILAANOIAB(::UnityEngine::Transform* a1, ::RPG::GameCore::NPCBodySize a2, ::RPG::Client::EmoEyeCtrl* a3)
		{
			return ((::System::Void(*)(::UnityEngine::Transform*, ::RPG::GameCore::NPCBodySize, ::RPG::Client::EmoEyeCtrl*))((::PBYTE)hIl2Cpp + GPPPDGFLHLJ_AFILAANOIAB_OFFSET))(a1, a2, a3);
		}

		static ::System::Void KEPMOCBBOKP(::UnityEngine::Transform* a1, ::RPG::GameCore::NPCBodySize a2, ::System::Collections::Generic::List_1<::System::Object*>* a3)
		{
			return ((::System::Void(*)(::UnityEngine::Transform*, ::RPG::GameCore::NPCBodySize, ::System::Collections::Generic::List_1<::System::Object*>*))((::PBYTE)hIl2Cpp + GPPPDGFLHLJ_KEPMOCBBOKP_OFFSET))(a1, a2, a3);
		}

	};
