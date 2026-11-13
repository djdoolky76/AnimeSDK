#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define FHKIKPOPLPJ_CTOR_OFFSET UNITYSDK_OFFSET(0x18AAB1B0)
#define FHKIKPOPLPJ_MGPLPPLEMPK_OFFSET UNITYSDK_OFFSET(0x18AAB150)

inline static constexpr unsigned int FHKIKPOPLPJ_TypeDefinitionIndex = 58543;

	class FHKIKPOPLPJ : public ::System::Object
	{
	public:
		::System::UInt32 NPHAJEKCBKF; // 0x10
		::System::UInt32 NBELOOHEBMO; // 0x14
		::System::Boolean JBDJFBPNAGG; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHKIKPOPLPJ_CTOR_OFFSET))(this);
		}

		::System::Boolean MGPLPPLEMPK(::UnityEngine::Vector3 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + FHKIKPOPLPJ_MGPLPPLEMPK_OFFSET))(this, a1);
		}

	};
