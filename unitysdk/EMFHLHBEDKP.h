#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace UnityEngine { class GameObject; }

#define EMFHLHBEDKP_CTOR_OFFSET UNITYSDK_OFFSET(0x155289D0)
#define EMFHLHBEDKP_HOAHHKDMAFB_OFFSET UNITYSDK_OFFSET(0x15528950)

inline static constexpr unsigned int EMFHLHBEDKP_TypeDefinitionIndex = 81975;

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
