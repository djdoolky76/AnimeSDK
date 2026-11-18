#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Keyframe.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CGAEDDFDFHC_KMLNDHGEKHP_CJBIPGBFEEC_OFFSET UNITYSDK_OFFSET(0x10E38630)
#define CGAEDDFDFHC_KMLNDHGEKHP_DJJAPODNEJF_OFFSET UNITYSDK_OFFSET(0x10E38930)
#define CGAEDDFDFHC_KMLNDHGEKHP_NLNFHJGFNCE_OFFSET UNITYSDK_OFFSET(0x10E388F0)
#define CGAEDDFDFHC_KMLNDHGEKHP__CTOR_OFFSET UNITYSDK_OFFSET(0x10E38620)

inline static constexpr unsigned int CGAEDDFDFHC_KMLNDHGEKHP_TypeDefinitionIndex = 77382;

class CGAEDDFDFHC_KMLNDHGEKHP : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::UnityEngine::Keyframe>* MELCPGAMPCN; // 0x10
	::System::Single EOOHPAKNNNI; // 0x18
	::System::Single FCGNBJGDFEP; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGAEDDFDFHC_KMLNDHGEKHP__CTOR_OFFSET))(this);
	}

	::System::Boolean CJBIPGBFEEC(::UnityEngine::Keyframe HAAEBCOBKFF)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Keyframe))((::PBYTE)hIl2Cpp + CGAEDDFDFHC_KMLNDHGEKHP_CJBIPGBFEEC_OFFSET))(this, HAAEBCOBKFF);
	}

	::System::Void NLNFHJGFNCE(::UnityEngine::Keyframe HAAEBCOBKFF)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Keyframe))((::PBYTE)hIl2Cpp + CGAEDDFDFHC_KMLNDHGEKHP_NLNFHJGFNCE_OFFSET))(this, HAAEBCOBKFF);
	}

	::System::Boolean DJJAPODNEJF(::UnityEngine::Keyframe HAAEBCOBKFF)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Keyframe))((::PBYTE)hIl2Cpp + CGAEDDFDFHC_KMLNDHGEKHP_DJJAPODNEJF_OFFSET))(this, HAAEBCOBKFF);
	}
};
