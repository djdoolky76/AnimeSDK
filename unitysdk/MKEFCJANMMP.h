#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

#define MKEFCJANMMP_GLCIHGOCHMP_1_OFFSET UNITYSDK_OFFSET(0x14D8A8C0)
#define MKEFCJANMMP_GLCIHGOCHMP_2_OFFSET UNITYSDK_OFFSET(0x14D8A970)
#define MKEFCJANMMP_GLCIHGOCHMP_3_OFFSET UNITYSDK_OFFSET(0x14D8AA00)
#define MKEFCJANMMP_GLCIHGOCHMP_OFFSET UNITYSDK_OFFSET(0x14D8A7D0)

inline static constexpr unsigned int MKEFCJANMMP_TypeDefinitionIndex = 42829;

class MKEFCJANMMP : public ::System::Object
{
public:
	static ::UnityEngine::Vector3 GLCIHGOCHMP(::UnityEngine::Vector3 EJCBEJMGFAJ, ::UnityEngine::Vector3 EBFCACIEKBC, ::UnityEngine::Vector3 EGEGIMGMJHN)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MKEFCJANMMP_GLCIHGOCHMP_OFFSET))(EJCBEJMGFAJ, EBFCACIEKBC, EGEGIMGMJHN);
	}

	static ::UnityEngine::Vector2 GLCIHGOCHMP_1(::UnityEngine::Vector2 EJCBEJMGFAJ, ::UnityEngine::Vector2 EBFCACIEKBC, ::UnityEngine::Vector2 EGEGIMGMJHN)
	{
		return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MKEFCJANMMP_GLCIHGOCHMP_1_OFFSET))(EJCBEJMGFAJ, EBFCACIEKBC, EGEGIMGMJHN);
	}

	static ::System::Single GLCIHGOCHMP_2(::System::Single EJCBEJMGFAJ, ::System::Single EBFCACIEKBC, ::System::Single EGEGIMGMJHN)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MKEFCJANMMP_GLCIHGOCHMP_2_OFFSET))(EJCBEJMGFAJ, EBFCACIEKBC, EGEGIMGMJHN);
	}

	static ::UnityEngine::Vector4 GLCIHGOCHMP_3(::UnityEngine::Vector4 EJCBEJMGFAJ, ::UnityEngine::Vector4 EBFCACIEKBC, ::UnityEngine::Vector4 EGEGIMGMJHN)
	{
		return ((::UnityEngine::Vector4(*)(::UnityEngine::Vector4, ::UnityEngine::Vector4, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + MKEFCJANMMP_GLCIHGOCHMP_3_OFFSET))(EJCBEJMGFAJ, EBFCACIEKBC, EGEGIMGMJHN);
	}
};
