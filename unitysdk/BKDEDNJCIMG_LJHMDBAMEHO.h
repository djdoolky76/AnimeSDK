#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/RaycastHit.h"

#define BKDEDNJCIMG_LJHMDBAMEHO_COMPARE_OFFSET UNITYSDK_OFFSET(0xC104700)
#define BKDEDNJCIMG_LJHMDBAMEHO_CTOR_OFFSET UNITYSDK_OFFSET(0xC1046F0)

inline static constexpr unsigned int BKDEDNJCIMG_LJHMDBAMEHO_TypeDefinitionIndex = 79768;

	class BKDEDNJCIMG_LJHMDBAMEHO : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKDEDNJCIMG_LJHMDBAMEHO_CTOR_OFFSET))(this);
		}

		::System::Int32 Compare(::UnityEngine::RaycastHit a1, ::UnityEngine::RaycastHit a2)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::RaycastHit, ::UnityEngine::RaycastHit))((::PBYTE)hIl2Cpp + BKDEDNJCIMG_LJHMDBAMEHO_COMPARE_OFFSET))(this, a1, a2);
		}

	};
