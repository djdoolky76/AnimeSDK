#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define AGOFJCNEAFM_CTOR_OFFSET UNITYSDK_OFFSET(0xF135330)
#define AGOFJCNEAFM_GGNBOEIMEPM_OFFSET UNITYSDK_OFFSET(0xF135120)
#define AGOFJCNEAFM_LJOLGCNKIEH_OFFSET UNITYSDK_OFFSET(0xF1352D0)

inline static constexpr unsigned int AGOFJCNEAFM_TypeDefinitionIndex = 70644;

	class AGOFJCNEAFM
	{
	public:
		::System::Nullable_1<::UnityEngine::Vector2> LJLDPMLBAJB; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGOFJCNEAFM_CTOR_OFFSET))(this);
		}

		::System::Void GGNBOEIMEPM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGOFJCNEAFM_GGNBOEIMEPM_OFFSET))(this);
		}

		::System::Void LJOLGCNKIEH(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AGOFJCNEAFM_LJOLGCNKIEH_OFFSET))(this, a1);
		}

	};
