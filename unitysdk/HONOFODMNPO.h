#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HONOFODMNPO;
namespace System { class String; }
namespace UnityEngine { class Animator; }

#define HONOFODMNPO_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x15DB0EB0)
#define HONOFODMNPO_CTOR_OFFSET UNITYSDK_OFFSET(0x15DB0F10)
#define HONOFODMNPO_EEFBKDNCPBD_OFFSET UNITYSDK_OFFSET(0x15DB0F20)
#define HONOFODMNPO_ELNDOHIPBAL_OFFSET UNITYSDK_OFFSET(0x15DB1140)

inline static constexpr unsigned int HONOFODMNPO_TypeDefinitionIndex = 71243;

	class HONOFODMNPO : public ::System::Object
	{
	public:
		::UnityEngine::Animator* CFNGLMDMENE; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HONOFODMNPO_CTOR_OFFSET))(this);
		}

		static ::HONOFODMNPO* BPLPBPMEODA(::UnityEngine::Animator* a1)
		{
			return ((::HONOFODMNPO*(*)(::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + HONOFODMNPO_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::Void EEFBKDNCPBD(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HONOFODMNPO_EEFBKDNCPBD_OFFSET))(this, a1);
		}

		::System::Void ELNDOHIPBAL(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HONOFODMNPO_ELNDOHIPBAL_OFFSET))(this, a1);
		}

	};
