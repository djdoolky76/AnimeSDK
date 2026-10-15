#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
class JCKCHPFFEHM;

#define BDOADFOBGFH_AEBCGOOEMLG_OFFSET UNITYSDK_OFFSET(0x162F88B0)
#define BDOADFOBGFH_EJHEGGLDPKI_OFFSET UNITYSDK_OFFSET(0x162F9480)

inline static constexpr unsigned int BDOADFOBGFH_TypeDefinitionIndex = 47392;

	class BDOADFOBGFH : public ::System::Object
	{
	public:
		static ::System::Boolean AEBCGOOEMLG(::JCKCHPFFEHM* a1, ::JCKCHPFFEHM* a2)
		{
			return ((::System::Boolean(*)(::JCKCHPFFEHM*, ::JCKCHPFFEHM*))((::PBYTE)hIl2Cpp + BDOADFOBGFH_AEBCGOOEMLG_OFFSET))(a1, a2);
		}

		static ::System::Boolean EJHEGGLDPKI(::Il2CppArray<::UnityEngine::Vector3>* a1, ::Il2CppArray<::UnityEngine::Vector3>* a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::UnityEngine::Vector3>*, ::Il2CppArray<::UnityEngine::Vector3>*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + BDOADFOBGFH_EJHEGGLDPKI_OFFSET))(a1, a2, a3);
		}

	};
