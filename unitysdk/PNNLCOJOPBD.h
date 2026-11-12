#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
class PNNLCOJOPBD;
namespace UnityEngine { class Texture2D; }

#define PNNLCOJOPBD_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xCC83250)
#define PNNLCOJOPBD_CTOR_OFFSET UNITYSDK_OFFSET(0xCC832E0)
#define PNNLCOJOPBD_MOKNCFJICIC_OFFSET UNITYSDK_OFFSET(0xCC832F0)

inline static constexpr unsigned int PNNLCOJOPBD_TypeDefinitionIndex = 63736;

	class PNNLCOJOPBD : public ::System::Object
	{
	public:
		::UnityEngine::Texture2D* HLHAIDNNEEL; // 0x10
		::UnityEngine::Vector2 DGEIHDFONAP; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNNLCOJOPBD_CTOR_OFFSET))(this);
		}

		static ::PNNLCOJOPBD* BPLPBPMEODA(::UnityEngine::Texture2D* a1, ::UnityEngine::Vector2 a2)
		{
			return ((::PNNLCOJOPBD*(*)(::UnityEngine::Texture2D*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + PNNLCOJOPBD_BPLPBPMEODA_OFFSET))(a1, a2);
		}

		::System::Void MOKNCFJICIC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNNLCOJOPBD_MOKNCFJICIC_OFFSET))(this);
		}

	};
