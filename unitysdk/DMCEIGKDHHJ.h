#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Space.h"
#include "unitysdk/HEGAIBENLJF.h"

namespace FluffyUnderware::Curvy { class CurvySpline; }

#define DMCEIGKDHHJ_ENCMHFKFOGK_1_OFFSET UNITYSDK_OFFSET(0x13E58C60)
#define DMCEIGKDHHJ_ENCMHFKFOGK_2_OFFSET UNITYSDK_OFFSET(0x13E58CD0)
#define DMCEIGKDHHJ_ENCMHFKFOGK_3_OFFSET UNITYSDK_OFFSET(0x13E58D40)
#define DMCEIGKDHHJ_ENCMHFKFOGK_OFFSET UNITYSDK_OFFSET(0x13E58BE0)

inline static constexpr unsigned int DMCEIGKDHHJ_TypeDefinitionIndex = 82058;

class DMCEIGKDHHJ : public ::System::Object
{
public:
	static ::HEGAIBENLJF ENCMHFKFOGK(::FluffyUnderware::Curvy::CurvySpline* PJLEHOLOIGI, ::System::Boolean GJKBCLEKKFF, ::UnityEngine::Space GDIPJHMLFHD)
	{
		return ((::HEGAIBENLJF(*)(::FluffyUnderware::Curvy::CurvySpline*, ::System::Boolean, ::UnityEngine::Space))((::PBYTE)hIl2Cpp + DMCEIGKDHHJ_ENCMHFKFOGK_OFFSET))(PJLEHOLOIGI, GJKBCLEKKFF, GDIPJHMLFHD);
	}

	static ::HEGAIBENLJF ENCMHFKFOGK_1(::FluffyUnderware::Curvy::CurvySpline* PJLEHOLOIGI, ::UnityEngine::Space GDIPJHMLFHD)
	{
		return ((::HEGAIBENLJF(*)(::FluffyUnderware::Curvy::CurvySpline*, ::UnityEngine::Space))((::PBYTE)hIl2Cpp + DMCEIGKDHHJ_ENCMHFKFOGK_1_OFFSET))(PJLEHOLOIGI, GDIPJHMLFHD);
	}

	static ::HEGAIBENLJF ENCMHFKFOGK_2(::FluffyUnderware::Curvy::CurvySpline* PJLEHOLOIGI)
	{
		return ((::HEGAIBENLJF(*)(::FluffyUnderware::Curvy::CurvySpline*))((::PBYTE)hIl2Cpp + DMCEIGKDHHJ_ENCMHFKFOGK_2_OFFSET))(PJLEHOLOIGI);
	}

	static ::HEGAIBENLJF ENCMHFKFOGK_3(::FluffyUnderware::Curvy::CurvySpline* PJLEHOLOIGI, ::System::Boolean GJKBCLEKKFF)
	{
		return ((::HEGAIBENLJF(*)(::FluffyUnderware::Curvy::CurvySpline*, ::System::Boolean))((::PBYTE)hIl2Cpp + DMCEIGKDHHJ_ENCMHFKFOGK_3_OFFSET))(PJLEHOLOIGI, GJKBCLEKKFF);
	}
};
