#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class KOGPMKOGCLC;
namespace UnityEngine { class Component; }
namespace UnityEngine { class GameObject; }

#define GDKDNOIAHPH_KEPKMHLELKE_1_OFFSET UNITYSDK_OFFSET(0x1CE92840)
#define GDKDNOIAHPH_KEPKMHLELKE_OFFSET UNITYSDK_OFFSET(0x1CE92520)

inline static constexpr unsigned int GDKDNOIAHPH_TypeDefinitionIndex = 34769;

class GDKDNOIAHPH : public ::System::Object
{
public:
	static ::KOGPMKOGCLC* KEPKMHLELKE(::UnityEngine::GameObject* JEIDPPCEHLD)
	{
		return ((::KOGPMKOGCLC*(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + GDKDNOIAHPH_KEPKMHLELKE_OFFSET))(JEIDPPCEHLD);
	}

	static ::KOGPMKOGCLC* KEPKMHLELKE_1(::UnityEngine::Component* GBELIHABEDH)
	{
		return ((::KOGPMKOGCLC*(*)(::UnityEngine::Component*))((::PBYTE)hIl2Cpp + GDKDNOIAHPH_KEPKMHLELKE_1_OFFSET))(GBELIHABEDH);
	}
};
