#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace UnityEngine { class GameObject; }

#define MACCDOJMOPK_BLJLIHCPEAK_OFFSET UNITYSDK_OFFSET(0xB83ECC0)
#define MACCDOJMOPK_HILJEAIAMEL_OFFSET UNITYSDK_OFFSET(0xB83EC80)

	class MACCDOJMOPK : public ::System::Object
	{
	public:
		static ::System::Void HILJEAIAMEL(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MACCDOJMOPK_HILJEAIAMEL_OFFSET))(a1);
		}

		static ::System::Void BLJLIHCPEAK()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MACCDOJMOPK_BLJLIHCPEAK_OFFSET))();
		}

	};
