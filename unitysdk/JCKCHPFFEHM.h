#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector2.h"
class DLOJKAIBPBI;

#define JCKCHPFFEHM_CTOR_1_OFFSET UNITYSDK_OFFSET(0xB8DB160)
#define JCKCHPFFEHM_CTOR_OFFSET UNITYSDK_OFFSET(0xB8DB100)
#define JCKCHPFFEHM_EOAGKKAIAGM_OFFSET UNITYSDK_OFFSET(0xB8DB190)

inline static constexpr unsigned int JCKCHPFFEHM_TypeDefinitionIndex = 48420;

	class JCKCHPFFEHM : public ::System::Object
	{
	public:
		::UnityEngine::Vector3 COIHCPBGBPA; // 0x10
		::UnityEngine::Vector3 ECKAIJLHEEM; // 0x1C
		::System::Single NIDAPHBEMDE; // 0x28
		::System::Void _ctor(::DLOJKAIBPBI* a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::DLOJKAIBPBI*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + JCKCHPFFEHM_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _ctor_1(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + JCKCHPFFEHM_CTOR_1_OFFSET))(this, a1, a2, a3);
		}

		::Il2CppArray<::UnityEngine::Vector3>* EOAGKKAIAGM()
		{
			return ((::Il2CppArray<::UnityEngine::Vector3>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JCKCHPFFEHM_EOAGKKAIAGM_OFFSET))(this);
		}

	};
