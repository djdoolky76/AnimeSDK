#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class ParticleSystem; }

#define BOGLEMMMDAC_KKMHKFIDOPE_CTOR_OFFSET UNITYSDK_OFFSET(0xC18FD10)

inline static constexpr unsigned int BOGLEMMMDAC_KKMHKFIDOPE_TypeDefinitionIndex = 69888;

	class BOGLEMMMDAC_KKMHKFIDOPE : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Object*>* FFHGLILNAHO; // 0x10
		::UnityEngine::ParticleSystem* BMLFFCLALIC; // 0x18
		::System::Void _ctor(::UnityEngine::ParticleSystem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem*))((::PBYTE)hIl2Cpp + BOGLEMMMDAC_KKMHKFIDOPE_CTOR_OFFSET))(this, a1);
		}

	};
