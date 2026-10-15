#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace UnityEngine { class GameObject; }

#define EMFHLHBEDKP_CTOR_OFFSET UNITYSDK_OFFSET(0x15534690)
#define EMFHLHBEDKP_HOAHHKDMAFB_OFFSET UNITYSDK_OFFSET(0x15534610)

	class EMFHLHBEDKP : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMFHLHBEDKP_CTOR_OFFSET))(this);
		}

		::UnityEngine::GameObject* HOAHHKDMAFB()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + EMFHLHBEDKP_HOAHHKDMAFB_OFFSET))(this);
		}

	};
