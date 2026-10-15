#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define NNEDFJMPCCK_CTOR_OFFSET UNITYSDK_OFFSET(0xBC995E0)
#define NNEDFJMPCCK_DNFGFHMNDEF_OFFSET UNITYSDK_OFFSET(0xBC996F0)

inline static constexpr unsigned int NNEDFJMPCCK_TypeDefinitionIndex = 47754;

	class NNEDFJMPCCK : public ::System::Object
	{
	public:
		::System::Single GCJMFBKLGHI; // 0x10
		::UnityEngine::Vector3 LJDHGFECMHJ; // 0x14
		::UnityEngine::Vector3 OJOMJHOMPCC; // 0x20
		::System::Single MLKAGGJKCGN; // 0x2C
		::System::Void _ctor(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + NNEDFJMPCCK_CTOR_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 DNFGFHMNDEF()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + NNEDFJMPCCK_DNFGFHMNDEF_OFFSET))(this);
		}

	};
