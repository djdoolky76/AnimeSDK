#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ELPNFNJGCGD;
namespace UnityEngine { class GameObject; }

#define ELPNFNJGCGD_CTOR_OFFSET UNITYSDK_OFFSET(0x199B51A0)
#define ELPNFNJGCGD_FFHNOMIDEDE_OFFSET UNITYSDK_OFFSET(0x199B51B0)
#define ELPNFNJGCGD_GIJADIPLPOP_OFFSET UNITYSDK_OFFSET(0x199A19D0)

inline static constexpr unsigned int ELPNFNJGCGD_TypeDefinitionIndex = 70180;

	class ELPNFNJGCGD : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELPNFNJGCGD_CTOR_OFFSET))(this);
		}

		static ::ELPNFNJGCGD* GIJADIPLPOP(::UnityEngine::GameObject* a1)
		{
			return ((::ELPNFNJGCGD*(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + ELPNFNJGCGD_GIJADIPLPOP_OFFSET))(a1);
		}

		::System::Void FFHNOMIDEDE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELPNFNJGCGD_FFHNOMIDEDE_OFFSET))(this);
		}

	};
