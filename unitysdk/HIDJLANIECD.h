#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class IFOHGNLIAKH;
namespace UnityEngine { class GameObject; }

#define HIDJLANIECD_EMKKKFOMLKH_OFFSET UNITYSDK_OFFSET(0x16CF3B40)
#define HIDJLANIECD_JIPJAGOKBLO_OFFSET UNITYSDK_OFFSET(0x16CF3E50)

inline static constexpr unsigned int HIDJLANIECD_TypeDefinitionIndex = 91764;

class HIDJLANIECD : public ::System::Object
{
public:
	static ::IFOHGNLIAKH* EMKKKFOMLKH(::UnityEngine::GameObject* NJOAJLDJCCJ)
	{
		return ((::IFOHGNLIAKH*(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + HIDJLANIECD_EMKKKFOMLKH_OFFSET))(NJOAJLDJCCJ);
	}

	static ::System::Boolean JIPJAGOKBLO(::IFOHGNLIAKH* CBLGCIFLMKL)
	{
		return ((::System::Boolean(*)(::IFOHGNLIAKH*))((::PBYTE)hIl2Cpp + HIDJLANIECD_JIPJAGOKBLO_OFFSET))(CBLGCIFLMKL);
	}
};
