#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace System { class Action; }

#define OIEAECJBMNO_CTOR_OFFSET UNITYSDK_OFFSET(0xBE73930)

inline static constexpr unsigned int OIEAECJBMNO_TypeDefinitionIndex = 71475;

	class OIEAECJBMNO : public ::System::Object
	{
	public:
		::System::Action* BDMPBAPEBOH; // 0x10
		::System::Single HKGPLKJOCDH; // 0x18
		::UnityEngine::Vector3 BLBPHAKCCLL; // 0x1C
		::UnityEngine::Vector3 GIFHGOPLGEO; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIEAECJBMNO_CTOR_OFFSET))(this);
		}

	};
