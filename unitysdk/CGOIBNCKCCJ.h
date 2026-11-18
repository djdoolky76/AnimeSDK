#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class EMGBMBACIAO;
class JFBNBOHNJBF;
namespace UnityEngine { class Transform; }

#define CGOIBNCKCCJ_OKONPAMLJIG_OFFSET UNITYSDK_OFFSET(0x14550170)
#define CGOIBNCKCCJ_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x145501E0)
#define CGOIBNCKCCJ__CTOR_OFFSET UNITYSDK_OFFSET(0x14550160)

inline static constexpr unsigned int CGOIBNCKCCJ_TypeDefinitionIndex = 51570;

class CGOIBNCKCCJ : public ::System::Object
{
public:
	::EMGBMBACIAO* AKCFJBLPHCD; // 0x10
	::JFBNBOHNJBF* BIFHJIKDHIA; // 0x18
	::UnityEngine::Transform* FKGEOBBECEE; // 0x20
	::UnityEngine::Vector3 OHKFHLHGKNG; // 0x28
	::UnityEngine::Vector3 HMCOFKHHLML; // 0x34
	::System::Single CKKILDJJLHC; // 0x40
	::System::Boolean LMIPANFKHKG; // 0x44
	::System::Boolean JEMLMPPPDJN; // 0x45
	::System::Boolean DBIKCHNAKEI; // 0x46
	::System::Byte _padding0[0x1];
	::UnityEngine::Vector3 NDIIIOCOBGH; // 0x48
	::System::Single MCGBAJNKBIH; // 0x54
	::System::Single HMLCJEHBNCO; // 0x58
	::UnityEngine::Quaternion IIDODMGBADI; // 0x5C
	::System::Single LGPEPECMMEI; // 0x6C
	::UnityEngine::Vector3 NDNAMFINNHC; // 0x70
	::System::Single MJLJPPDFLPN; // 0x7C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGOIBNCKCCJ__CTOR_OFFSET))(this);
	}

	::System::Void OKONPAMLJIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGOIBNCKCCJ_OKONPAMLJIG_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGOIBNCKCCJ_PHOADBJGFBE_OFFSET))(this);
	}
};
