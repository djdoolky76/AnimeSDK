#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define FDFOKCFJEJG_CLMKAOKPNME_OFFSET UNITYSDK_OFFSET(0x156D65B0)
#define FDFOKCFJEJG_CNOHOCHJEHM_OFFSET UNITYSDK_OFFSET(0x156D66F0)
#define FDFOKCFJEJG_FNKBCCEPHOJ_OFFSET UNITYSDK_OFFSET(0x156D6400)
#define FDFOKCFJEJG_PMDPEIANNLF_OFFSET UNITYSDK_OFFSET(0x156D62A0)

	class FDFOKCFJEJG : public ::System::Object
	{
	public:
		static ::UnityEngine::Vector3 PMDPEIANNLF(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4, ::System::Single a5)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + FDFOKCFJEJG_PMDPEIANNLF_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::UnityEngine::Vector3 FNKBCCEPHOJ(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4, ::System::Single a5)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + FDFOKCFJEJG_FNKBCCEPHOJ_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::UnityEngine::Vector3 CLMKAOKPNME(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4, ::System::Single a5)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + FDFOKCFJEJG_CLMKAOKPNME_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::ValueTuple CNOHOCHJEHM(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Vector3 a5, ::System::Int32 a6, ::System::Int32 a7)
		{
			return ((::System::ValueTuple(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + FDFOKCFJEJG_CNOHOCHJEHM_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
		}

	};
