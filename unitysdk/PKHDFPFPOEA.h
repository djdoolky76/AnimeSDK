#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }
namespace UnityEngine { class Animator; }

#define PKHDFPFPOEA_ACJMKBDMOFM_OFFSET UNITYSDK_OFFSET(0xC2BADB0)
#define PKHDFPFPOEA_CTOR_OFFSET UNITYSDK_OFFSET(0xC2BAE70)

	class PKHDFPFPOEA : public ::System::Object
	{
	public:
		::System::String* CNBLKCIPEMA; // 0x10
		::System::String* JEPECKPOBNI; // 0x18
		::System::String* ECJAFCIFGNJ; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKHDFPFPOEA_CTOR_OFFSET))(this);
		}

		::System::Void ACJMKBDMOFM(::UnityEngine::Animator* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::System::Boolean))((::PBYTE)hIl2Cpp + PKHDFPFPOEA_ACJMKBDMOFM_OFFSET))(this, a1, a2);
		}

	};
