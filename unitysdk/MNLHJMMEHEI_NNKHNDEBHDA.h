#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace System { class String; }

#define MNLHJMMEHEI_NNKHNDEBHDA_CTOR_OFFSET UNITYSDK_OFFSET(0xC2D32F0)
#define MNLHJMMEHEI_NNKHNDEBHDA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xC2D4270)
#define MNLHJMMEHEI_NNKHNDEBHDA_JNEKHBHNKNM_OFFSET UNITYSDK_OFFSET(0xC2D41E0)

inline static constexpr unsigned int MNLHJMMEHEI_NNKHNDEBHDA_TypeDefinitionIndex = 58227;

	class MNLHJMMEHEI_NNKHNDEBHDA : public ::System::Object
	{
	public:
		::System::String* CDEEHGCEOKN; // 0x10
		::System::Boolean LMHIBNLEOMD; // 0x18
		::System::Boolean KMPIPOGCGDD; // 0x19
		::System::Boolean JAMNDDOGHLA; // 0x1A
		::System::Byte _padding0[0x1];
		::System::UInt32 LFIEOIKFGNG; // 0x1C
		::System::Single NNFHBOPOLCO; // 0x20
		::UnityEngine::Vector3 ABIIKNGPAIE; // 0x24
		::UnityEngine::Vector3 BHCMCMADHBF; // 0x30
		::UnityEngine::Vector3 OBJEAOODKLK; // 0x3C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNLHJMMEHEI_NNKHNDEBHDA_CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector3 JNEKHBHNKNM()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MNLHJMMEHEI_NNKHNDEBHDA_JNEKHBHNKNM_OFFSET))(this);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MNLHJMMEHEI_NNKHNDEBHDA_GETHASHCODE_OFFSET))(this);
		}

	};
