#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }
namespace UnityEngine { class Animator; }

#define PKHDFPFPOEA_ACJMKBDMOFM_OFFSET UNITYSDK_OFFSET(0xCBE5B30)
#define PKHDFPFPOEA_CTOR_OFFSET UNITYSDK_OFFSET(0xCBE5BF0)

inline static constexpr unsigned int PKHDFPFPOEA_TypeDefinitionIndex = 74579;

	class PKHDFPFPOEA : public ::System::Object
	{
	public:
		::System::String* ECJAFCIFGNJ; // 0x10
		::System::String* CNBLKCIPEMA; // 0x18
		::System::String* JEPECKPOBNI; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKHDFPFPOEA_CTOR_OFFSET))(this);
		}

		::System::Void ACJMKBDMOFM(::UnityEngine::Animator* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::System::Boolean))((::PBYTE)hIl2Cpp + PKHDFPFPOEA_ACJMKBDMOFM_OFFSET))(this, a1, a2);
		}

	};
