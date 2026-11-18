#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/DCBBMOHJDOJ.h"
#include "unitysdk/IKOBMGNNNNK.h"
#include "unitysdk/MJAHOIFKDNI.h"
#include "unitysdk/POAGPDPBBEO.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define JKCLDAGOMKP_AIHDLODCHEG_OFFSET UNITYSDK_OFFSET(0x15298C10)
#define JKCLDAGOMKP_IGMJCDOPHBA_OFFSET UNITYSDK_OFFSET(0x15299620)
#define JKCLDAGOMKP_KCCGAABAKKJ_OFFSET UNITYSDK_OFFSET(0x15298960)
#define JKCLDAGOMKP_KDEANGOALPB_OFFSET UNITYSDK_OFFSET(0x15298870)

inline static constexpr unsigned int JKCLDAGOMKP_TypeDefinitionIndex = 86985;

class JKCLDAGOMKP : public ::System::Object
{
public:
	static ::DCBBMOHJDOJ KDEANGOALPB(::DCBBMOHJDOJ& FBHDMHOBIEE, ::UnityEngine::Matrix4x4& MDLNMDJMMJP)
	{
		return ((::DCBBMOHJDOJ(*)(::DCBBMOHJDOJ&, ::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + JKCLDAGOMKP_KDEANGOALPB_OFFSET))(FBHDMHOBIEE, MDLNMDJMMJP);
	}

	static ::IKOBMGNNNNK KCCGAABAKKJ(::IKOBMGNNNNK& FBHDMHOBIEE, ::UnityEngine::Matrix4x4& MDLNMDJMMJP)
	{
		return ((::IKOBMGNNNNK(*)(::IKOBMGNNNNK&, ::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + JKCLDAGOMKP_KCCGAABAKKJ_OFFSET))(FBHDMHOBIEE, MDLNMDJMMJP);
	}

	static ::POAGPDPBBEO AIHDLODCHEG(::MJAHOIFKDNI& HLFFCMIFFIB)
	{
		return ((::POAGPDPBBEO(*)(::MJAHOIFKDNI&))((::PBYTE)hIl2Cpp + JKCLDAGOMKP_AIHDLODCHEG_OFFSET))(HLFFCMIFFIB);
	}

	static ::UnityEngine::Matrix4x4 IGMJCDOPHBA(::UnityEngine::Vector3& OHOGDOMNHNK, ::UnityEngine::Quaternion& BFBELMDIAHI)
	{
		return ((::UnityEngine::Matrix4x4(*)(::UnityEngine::Vector3&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + JKCLDAGOMKP_IGMJCDOPHBA_OFFSET))(OHOGDOMNHNK, BFBELMDIAHI);
	}
};
