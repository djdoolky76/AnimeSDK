#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class ParticleSystem; }

#define BOGLEMMMDAC_KKMHKFIDOPE_CTOR_OFFSET UNITYSDK_OFFSET(0xC191210)

	class BOGLEMMMDAC_KKMHKFIDOPE : public ::System::Object
	{
	public:
		::UnityEngine::ParticleSystem* BMLFFCLALIC; // 0x10
		::System::Collections::Generic::List_1<::System::Object*>* FFHGLILNAHO; // 0x18
		::System::Void _ctor(::UnityEngine::ParticleSystem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem*))((::PBYTE)hIl2Cpp + BOGLEMMMDAC_KKMHKFIDOPE_CTOR_OFFSET))(this, a1);
		}

	};
