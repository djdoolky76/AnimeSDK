#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BOMMJNIPOLG;
namespace UnityEngine { class Texture2D; }

#define BOMMJNIPOLG_CTOR_OFFSET UNITYSDK_OFFSET(0xC197430)
#define BOMMJNIPOLG_PPEGOIODAKI_OFFSET UNITYSDK_OFFSET(0xC197440)

inline static constexpr unsigned int BOMMJNIPOLG_TypeDefinitionIndex = 70803;

	class BOMMJNIPOLG : public ::System::Object
	{
	public:
		::UnityEngine::Texture2D* HPEOBGNBBEO; // 0x10
		::UnityEngine::Texture2D* HELJCCAOLFK; // 0x18
		::System::Single BDLDENPDEHF; // 0x20
		::System::Single FCEPMFIPHJK; // 0x24
		::System::Single MJPIHFICAJD; // 0x28
		::System::Boolean JMCJJIGIPJB; // 0x2C
		::System::Boolean BNCOMEFNILN; // 0x2D
		::System::Byte _padding0[0x2];
		::System::Single JNDDHADIIAD; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOMMJNIPOLG_CTOR_OFFSET))(this);
		}

		::System::Void PPEGOIODAKI(::BOMMJNIPOLG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BOMMJNIPOLG*))((::PBYTE)hIl2Cpp + BOMMJNIPOLG_PPEGOIODAKI_OFFSET))(this, a1);
		}

	};
