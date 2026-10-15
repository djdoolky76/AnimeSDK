#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CPHHPNGICFP_CDKBKBNJMEH_OFFSET UNITYSDK_OFFSET(0xDCD58F0)
#define CPHHPNGICFP_CTOR_OFFSET UNITYSDK_OFFSET(0xDCD5890)

inline static constexpr unsigned int CPHHPNGICFP_TypeDefinitionIndex = 68904;

	class CPHHPNGICFP : public ::System::Object
	{
	public:
		::System::Single IHFLGOPFOKF; // 0x10
		::System::Single KDMHBDFCNMG; // 0x14
		::System::Single GLNJBPOLMCN; // 0x18
		::System::Single MGJHICAMJPA; // 0x1C
		::System::Single NFPEKMOMGFD; // 0x20
		::System::Single DJLJLKMBGPC; // 0x24
		::UnityEngine::Vector2 DIBOGGNBCIP; // 0x28
		::System::Single COAELIHGAHH; // 0x30
		::System::Void _ctor(::UnityEngine::Vector3 a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CPHHPNGICFP_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean CDKBKBNJMEH(::UnityEngine::Vector3 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CPHHPNGICFP_CDKBKBNJMEH_OFFSET))(this, a1);
		}

	};
