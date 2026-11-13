#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace UnityEngine { class Transform; }

#define KGKDMDDAMLH_CTOR_OFFSET UNITYSDK_OFFSET(0x19777B70)

inline static constexpr unsigned int KGKDMDDAMLH_TypeDefinitionIndex = 70405;

	class KGKDMDDAMLH : public ::System::Object
	{
	public:
		::UnityEngine::Transform* MCLLALGABAB; // 0x10
		::System::Single CPILOCNMCDG; // 0x18
		::UnityEngine::Quaternion MPDAOFHBLOD; // 0x1C
		::UnityEngine::Vector3 IOEDIDIGDJK; // 0x2C
		::UnityEngine::Vector3 KGKAHGNKDCD; // 0x38
		::UnityEngine::Quaternion BPKPHOCKMOA; // 0x44
		::UnityEngine::Vector3 EFELHFFDBLK; // 0x54
		::System::Single AEHLICKJCDA; // 0x60
		::System::Single EBMNDJKKHLD; // 0x64
		::UnityEngine::Vector3 FJMCLOIEMKG; // 0x68
		::UnityEngine::Vector3 IGENCKALDIN; // 0x74
		::System::Single MLDKFEKPLFK; // 0x80
		::System::Int32 GMDBHJKEAEI; // 0x84
		::System::Single FPNNKEJPHNN; // 0x88
		::UnityEngine::Quaternion KPAODKOHDHE; // 0x8C
		::UnityEngine::Vector3 JFEGMABDCIF; // 0x9C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGKDMDDAMLH_CTOR_OFFSET))(this);
		}

	};
